/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ClientVpnRouteStatus.h>
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
   * <p>Information about a Client VPN endpoint route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnRoute">AWS
   * API Reference</a></p>
   */
  class ClientVpnRoute
  {
  public:
    AWS_EC2_API ClientVpnRoute() = default;
    AWS_EC2_API ClientVpnRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Client VPN endpoint with which the route is associated.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const { return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    template<typename ClientVpnEndpointIdT = Aws::String>
    void SetClientVpnEndpointId(ClientVpnEndpointIdT&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::forward<ClientVpnEndpointIdT>(value); }
    template<typename ClientVpnEndpointIdT = Aws::String>
    ClientVpnRoute& WithClientVpnEndpointId(ClientVpnEndpointIdT&& value) { SetClientVpnEndpointId(std::forward<ClientVpnEndpointIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination.</p>
     */
    inline const Aws::String& GetDestinationCidr() const { return m_destinationCidr; }
    inline bool DestinationCidrHasBeenSet() const { return m_destinationCidrHasBeenSet; }
    template<typename DestinationCidrT = Aws::String>
    void SetDestinationCidr(DestinationCidrT&& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = std::forward<DestinationCidrT>(value); }
    template<typename DestinationCidrT = Aws::String>
    ClientVpnRoute& WithDestinationCidr(DestinationCidrT&& value) { SetDestinationCidr(std::forward<DestinationCidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet through which traffic is routed.</p>
     */
    inline const Aws::String& GetTargetSubnet() const { return m_targetSubnet; }
    inline bool TargetSubnetHasBeenSet() const { return m_targetSubnetHasBeenSet; }
    template<typename TargetSubnetT = Aws::String>
    void SetTargetSubnet(TargetSubnetT&& value) { m_targetSubnetHasBeenSet = true; m_targetSubnet = std::forward<TargetSubnetT>(value); }
    template<typename TargetSubnetT = Aws::String>
    ClientVpnRoute& WithTargetSubnet(TargetSubnetT&& value) { SetTargetSubnet(std::forward<TargetSubnetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route type.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    ClientVpnRoute& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the route was associated with the Client VPN endpoint.
     * <code>associate</code> indicates that the route was automatically added when the
     * target network was associated with the Client VPN endpoint.
     * <code>add-route</code> indicates that the route was manually added using the
     * <b>CreateClientVpnRoute</b> action.</p>
     */
    inline const Aws::String& GetOrigin() const { return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    template<typename OriginT = Aws::String>
    void SetOrigin(OriginT&& value) { m_originHasBeenSet = true; m_origin = std::forward<OriginT>(value); }
    template<typename OriginT = Aws::String>
    ClientVpnRoute& WithOrigin(OriginT&& value) { SetOrigin(std::forward<OriginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the route.</p>
     */
    inline const ClientVpnRouteStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = ClientVpnRouteStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = ClientVpnRouteStatus>
    ClientVpnRoute& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the route.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ClientVpnRoute& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_destinationCidr;
    bool m_destinationCidrHasBeenSet = false;

    Aws::String m_targetSubnet;
    bool m_targetSubnetHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_origin;
    bool m_originHasBeenSet = false;

    ClientVpnRouteStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
