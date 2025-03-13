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
    AWS_EC2_API ByoipCidr() = default;
    AWS_EC2_API ByoipCidr(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ByoipCidr& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The address range, in CIDR notation.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    ByoipCidr& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the address range.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ByoipCidr& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The BYOIP CIDR associations with ASNs.</p>
     */
    inline const Aws::Vector<AsnAssociation>& GetAsnAssociations() const { return m_asnAssociations; }
    inline bool AsnAssociationsHasBeenSet() const { return m_asnAssociationsHasBeenSet; }
    template<typename AsnAssociationsT = Aws::Vector<AsnAssociation>>
    void SetAsnAssociations(AsnAssociationsT&& value) { m_asnAssociationsHasBeenSet = true; m_asnAssociations = std::forward<AsnAssociationsT>(value); }
    template<typename AsnAssociationsT = Aws::Vector<AsnAssociation>>
    ByoipCidr& WithAsnAssociations(AsnAssociationsT&& value) { SetAsnAssociations(std::forward<AsnAssociationsT>(value)); return *this;}
    template<typename AsnAssociationsT = AsnAssociation>
    ByoipCidr& AddAsnAssociations(AsnAssociationsT&& value) { m_asnAssociationsHasBeenSet = true; m_asnAssociations.emplace_back(std::forward<AsnAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Upon success, contains the ID of the address pool. Otherwise, contains an
     * error message.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ByoipCidr& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the address range.</p> <ul> <li> <p> <code>advertised</code>:
     * The address range is being advertised to the internet by Amazon Web
     * Services.</p> </li> <li> <p> <code>deprovisioned</code>: The address range is
     * deprovisioned.</p> </li> <li> <p> <code>failed-deprovision</code>: The request
     * to deprovision the address range was unsuccessful. Ensure that all EIPs from the
     * range have been deallocated and try again.</p> </li> <li> <p>
     * <code>failed-provision</code>: The request to provision the address range was
     * unsuccessful.</p> </li> <li> <p> <code>pending-deprovision</code>: You’ve
     * submitted a request to deprovision an address range and it's pending.</p> </li>
     * <li> <p> <code>pending-provision</code>: You’ve submitted a request to provision
     * an address range and it's pending.</p> </li> <li> <p> <code>provisioned</code>:
     * The address range is provisioned and can be advertised. The range is not
     * currently advertised.</p> </li> <li> <p>
     * <code>provisioned-not-publicly-advertisable</code>: The address range is
     * provisioned and cannot be advertised.</p> </li> </ul>
     */
    inline ByoipCidrState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(ByoipCidrState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ByoipCidr& WithState(ByoipCidrState value) { SetState(value); return *this;}
    ///@}

    ///@{
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
    inline const Aws::String& GetNetworkBorderGroup() const { return m_networkBorderGroup; }
    inline bool NetworkBorderGroupHasBeenSet() const { return m_networkBorderGroupHasBeenSet; }
    template<typename NetworkBorderGroupT = Aws::String>
    void SetNetworkBorderGroup(NetworkBorderGroupT&& value) { m_networkBorderGroupHasBeenSet = true; m_networkBorderGroup = std::forward<NetworkBorderGroupT>(value); }
    template<typename NetworkBorderGroupT = Aws::String>
    ByoipCidr& WithNetworkBorderGroup(NetworkBorderGroupT&& value) { SetNetworkBorderGroup(std::forward<NetworkBorderGroupT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<AsnAssociation> m_asnAssociations;
    bool m_asnAssociationsHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ByoipCidrState m_state{ByoipCidrState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::String m_networkBorderGroup;
    bool m_networkBorderGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
