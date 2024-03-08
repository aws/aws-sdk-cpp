/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ByoipCidrState.h>
#include <aws/ec2/model/AsnAssociation.h>
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
   * <p>Information about an address range that is provisioned for use with your
   * Amazon Web Services resources through bring your own IP addresses
   * (BYOIP).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ByoipCidr">AWS API
   * Reference</a></p>
   */
  class ByoipCidr
  {
  public:
    AWS_EC2_API ByoipCidr();
    AWS_EC2_API ByoipCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ByoipCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline ByoipCidr& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline ByoipCidr& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline ByoipCidr& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The description of the address range.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the address range.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the address range.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the address range.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the address range.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the address range.</p>
     */
    inline ByoipCidr& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the address range.</p>
     */
    inline ByoipCidr& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the address range.</p>
     */
    inline ByoipCidr& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The BYOIP CIDR associations with ASNs.</p>
     */
    inline const Aws::Vector<AsnAssociation>& GetAsnAssociations() const{ return m_asnAssociations; }

    /**
     * <p>The BYOIP CIDR associations with ASNs.</p>
     */
    inline bool AsnAssociationsHasBeenSet() const { return m_asnAssociationsHasBeenSet; }

    /**
     * <p>The BYOIP CIDR associations with ASNs.</p>
     */
    inline void SetAsnAssociations(const Aws::Vector<AsnAssociation>& value) { m_asnAssociationsHasBeenSet = true; m_asnAssociations = value; }

    /**
     * <p>The BYOIP CIDR associations with ASNs.</p>
     */
    inline void SetAsnAssociations(Aws::Vector<AsnAssociation>&& value) { m_asnAssociationsHasBeenSet = true; m_asnAssociations = std::move(value); }

    /**
     * <p>The BYOIP CIDR associations with ASNs.</p>
     */
    inline ByoipCidr& WithAsnAssociations(const Aws::Vector<AsnAssociation>& value) { SetAsnAssociations(value); return *this;}

    /**
     * <p>The BYOIP CIDR associations with ASNs.</p>
     */
    inline ByoipCidr& WithAsnAssociations(Aws::Vector<AsnAssociation>&& value) { SetAsnAssociations(std::move(value)); return *this;}

    /**
     * <p>The BYOIP CIDR associations with ASNs.</p>
     */
    inline ByoipCidr& AddAsnAssociations(const AsnAssociation& value) { m_asnAssociationsHasBeenSet = true; m_asnAssociations.push_back(value); return *this; }

    /**
     * <p>The BYOIP CIDR associations with ASNs.</p>
     */
    inline ByoipCidr& AddAsnAssociations(AsnAssociation&& value) { m_asnAssociationsHasBeenSet = true; m_asnAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline ByoipCidr& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline ByoipCidr& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline ByoipCidr& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The state of the address pool.</p>
     */
    inline const ByoipCidrState& GetState() const{ return m_state; }

    /**
     * <p>The state of the address pool.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the address pool.</p>
     */
    inline void SetState(const ByoipCidrState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the address pool.</p>
     */
    inline void SetState(ByoipCidrState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the address pool.</p>
     */
    inline ByoipCidr& WithState(const ByoipCidrState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the address pool.</p>
     */
    inline ByoipCidr& WithState(ByoipCidrState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline const Aws::String& GetNetworkBorderGroup() const{ return m_networkBorderGroup; }

    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }

    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline void SetNetworkBorderGroup(const Aws::String& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = value; }

    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline void SetNetworkBorderGroup(Aws::String&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::move(value); }

    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline void SetNetworkBorderGroup(const char* value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup.assign(value); }

    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline ByoipCidr& WithNetworkBorderGroup(const Aws::String& value) { SetNetworkBorderGroup(value); return *this;}

    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline ByoipCidr& WithNetworkBorderGroup(Aws::String&& value) { SetNetworkBorderGroup(std::move(value)); return *this;}

    /**
     * <p>If you have <a
     * href="https://docs.aws.amazon.com/local-zones/latest/ug/how-local-zones-work.html">Local
     * Zones</a> enabled, you can choose a network border group for Local Zones when
     * you provision and advertise a BYOIPv4 CIDR. Choose the network border group
     * carefully as the EIP and the Amazon Web Services resource it is associated with
     * must reside in the same network border group.</p> <p>You can provision BYOIP
     * address ranges to and advertise them in the following Local Zone network border
     * groups:</p> <ul> <li> <p>us-east-1-dfw-2</p> </li> <li> <p>us-west-2-lax-1</p>
     * </li> <li> <p>us-west-2-phx-2</p> </li> </ul>  <p>You cannot provision or
     * advertise BYOIPv6 address ranges in Local Zones at this time.</p> 
     */
    inline ByoipCidr& WithNetworkBorderGroup(const char* value) { SetNetworkBorderGroup(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AsnAssociation> m_asnAssociations;
    bool m_asnAssociationsHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ByoipCidrState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
