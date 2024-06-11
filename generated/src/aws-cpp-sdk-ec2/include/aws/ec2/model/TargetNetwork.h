/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class TargetNetwork
  {
  public:
    AWS_EC2_API TargetNetwork();
    AWS_EC2_API TargetNetwork(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TargetNetwork& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }
    inline TargetNetwork& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline TargetNetwork& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline TargetNetwork& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC in which the target network (subnet) is located.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline TargetNetwork& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline TargetNetwork& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline TargetNetwork& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet specified as the target network.</p>
     */
    inline const Aws::String& GetTargetNetworkId() const{ return m_targetNetworkId; }
    inline bool TargetNetworkIdHasBeenSet() const { return m_targetNetworkIdHasBeenSet; }
    inline void SetTargetNetworkId(const Aws::String& value) { m_targetNetworkIdHasBeenSet = true; m_targetNetworkId = value; }
    inline void SetTargetNetworkId(Aws::String&& value) { m_targetNetworkIdHasBeenSet = true; m_targetNetworkId = std::move(value); }
    inline void SetTargetNetworkId(const char* value) { m_targetNetworkIdHasBeenSet = true; m_targetNetworkId.assign(value); }
    inline TargetNetwork& WithTargetNetworkId(const Aws::String& value) { SetTargetNetworkId(value); return *this;}
    inline TargetNetwork& WithTargetNetworkId(Aws::String&& value) { SetTargetNetworkId(std::move(value)); return *this;}
    inline TargetNetwork& WithTargetNetworkId(const char* value) { SetTargetNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Client VPN endpoint with which the target network is
     * associated.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline TargetNetwork& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline TargetNetwork& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline TargetNetwork& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the target network association.</p>
     */
    inline const AssociationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AssociationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AssociationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TargetNetwork& WithStatus(const AssociationStatus& value) { SetStatus(value); return *this;}
    inline TargetNetwork& WithStatus(AssociationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups applied to the target network association.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline TargetNetwork& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline TargetNetwork& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline TargetNetwork& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline TargetNetwork& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline TargetNetwork& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

    Aws::String m_targetNetworkId;
    bool m_targetNetworkIdHasBeenSet = false;

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    AssociationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
