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
    AWS_EC2_API ClientVpnRoute();
    AWS_EC2_API ClientVpnRoute(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnRoute& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Client VPN endpoint with which the route is associated.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline ClientVpnRoute& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline ClientVpnRoute& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline ClientVpnRoute& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range, in CIDR notation, of the route destination.</p>
     */
    inline const Aws::String& GetDestinationCidr() const{ return m_destinationCidr; }
    inline bool DestinationCidrHasBeenSet() const { return m_destinationCidrHasBeenSet; }
    inline void SetDestinationCidr(const Aws::String& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = value; }
    inline void SetDestinationCidr(Aws::String&& value) { m_destinationCidrHasBeenSet = true; m_destinationCidr = std::move(value); }
    inline void SetDestinationCidr(const char* value) { m_destinationCidrHasBeenSet = true; m_destinationCidr.assign(value); }
    inline ClientVpnRoute& WithDestinationCidr(const Aws::String& value) { SetDestinationCidr(value); return *this;}
    inline ClientVpnRoute& WithDestinationCidr(Aws::String&& value) { SetDestinationCidr(std::move(value)); return *this;}
    inline ClientVpnRoute& WithDestinationCidr(const char* value) { SetDestinationCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the subnet through which traffic is routed.</p>
     */
    inline const Aws::String& GetTargetSubnet() const{ return m_targetSubnet; }
    inline bool TargetSubnetHasBeenSet() const { return m_targetSubnetHasBeenSet; }
    inline void SetTargetSubnet(const Aws::String& value) { m_targetSubnetHasBeenSet = true; m_targetSubnet = value; }
    inline void SetTargetSubnet(Aws::String&& value) { m_targetSubnetHasBeenSet = true; m_targetSubnet = std::move(value); }
    inline void SetTargetSubnet(const char* value) { m_targetSubnetHasBeenSet = true; m_targetSubnet.assign(value); }
    inline ClientVpnRoute& WithTargetSubnet(const Aws::String& value) { SetTargetSubnet(value); return *this;}
    inline ClientVpnRoute& WithTargetSubnet(Aws::String&& value) { SetTargetSubnet(std::move(value)); return *this;}
    inline ClientVpnRoute& WithTargetSubnet(const char* value) { SetTargetSubnet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route type.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline ClientVpnRoute& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline ClientVpnRoute& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline ClientVpnRoute& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates how the route was associated with the Client VPN endpoint.
     * <code>associate</code> indicates that the route was automatically added when the
     * target network was associated with the Client VPN endpoint.
     * <code>add-route</code> indicates that the route was manually added using the
     * <b>CreateClientVpnRoute</b> action.</p>
     */
    inline const Aws::String& GetOrigin() const{ return m_origin; }
    inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
    inline void SetOrigin(const Aws::String& value) { m_originHasBeenSet = true; m_origin = value; }
    inline void SetOrigin(Aws::String&& value) { m_originHasBeenSet = true; m_origin = std::move(value); }
    inline void SetOrigin(const char* value) { m_originHasBeenSet = true; m_origin.assign(value); }
    inline ClientVpnRoute& WithOrigin(const Aws::String& value) { SetOrigin(value); return *this;}
    inline ClientVpnRoute& WithOrigin(Aws::String&& value) { SetOrigin(std::move(value)); return *this;}
    inline ClientVpnRoute& WithOrigin(const char* value) { SetOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the route.</p>
     */
    inline const ClientVpnRouteStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ClientVpnRouteStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ClientVpnRouteStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ClientVpnRoute& WithStatus(const ClientVpnRouteStatus& value) { SetStatus(value); return *this;}
    inline ClientVpnRoute& WithStatus(ClientVpnRouteStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the route.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ClientVpnRoute& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ClientVpnRoute& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ClientVpnRoute& WithDescription(const char* value) { SetDescription(value); return *this;}
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
