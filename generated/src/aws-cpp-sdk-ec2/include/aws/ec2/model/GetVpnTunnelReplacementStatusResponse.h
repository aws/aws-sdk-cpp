/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/MaintenanceDetails.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class GetVpnTunnelReplacementStatusResponse
  {
  public:
    AWS_EC2_API GetVpnTunnelReplacementStatusResponse();
    AWS_EC2_API GetVpnTunnelReplacementStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetVpnTunnelReplacementStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline const Aws::String& GetVpnConnectionId() const{ return m_vpnConnectionId; }
    inline void SetVpnConnectionId(const Aws::String& value) { m_vpnConnectionId = value; }
    inline void SetVpnConnectionId(Aws::String&& value) { m_vpnConnectionId = std::move(value); }
    inline void SetVpnConnectionId(const char* value) { m_vpnConnectionId.assign(value); }
    inline GetVpnTunnelReplacementStatusResponse& WithVpnConnectionId(const Aws::String& value) { SetVpnConnectionId(value); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithVpnConnectionId(Aws::String&& value) { SetVpnConnectionId(std::move(value)); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithVpnConnectionId(const char* value) { SetVpnConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const{ return m_transitGatewayId; }
    inline void SetTransitGatewayId(const Aws::String& value) { m_transitGatewayId = value; }
    inline void SetTransitGatewayId(Aws::String&& value) { m_transitGatewayId = std::move(value); }
    inline void SetTransitGatewayId(const char* value) { m_transitGatewayId.assign(value); }
    inline GetVpnTunnelReplacementStatusResponse& WithTransitGatewayId(const Aws::String& value) { SetTransitGatewayId(value); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithTransitGatewayId(Aws::String&& value) { SetTransitGatewayId(std::move(value)); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithTransitGatewayId(const char* value) { SetTransitGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const{ return m_customerGatewayId; }
    inline void SetCustomerGatewayId(const Aws::String& value) { m_customerGatewayId = value; }
    inline void SetCustomerGatewayId(Aws::String&& value) { m_customerGatewayId = std::move(value); }
    inline void SetCustomerGatewayId(const char* value) { m_customerGatewayId.assign(value); }
    inline GetVpnTunnelReplacementStatusResponse& WithCustomerGatewayId(const Aws::String& value) { SetCustomerGatewayId(value); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithCustomerGatewayId(Aws::String&& value) { SetCustomerGatewayId(std::move(value)); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithCustomerGatewayId(const char* value) { SetCustomerGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const{ return m_vpnGatewayId; }
    inline void SetVpnGatewayId(const Aws::String& value) { m_vpnGatewayId = value; }
    inline void SetVpnGatewayId(Aws::String&& value) { m_vpnGatewayId = std::move(value); }
    inline void SetVpnGatewayId(const char* value) { m_vpnGatewayId.assign(value); }
    inline GetVpnTunnelReplacementStatusResponse& WithVpnGatewayId(const Aws::String& value) { SetVpnGatewayId(value); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithVpnGatewayId(Aws::String&& value) { SetVpnGatewayId(std::move(value)); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithVpnGatewayId(const char* value) { SetVpnGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline const Aws::String& GetVpnTunnelOutsideIpAddress() const{ return m_vpnTunnelOutsideIpAddress; }
    inline void SetVpnTunnelOutsideIpAddress(const Aws::String& value) { m_vpnTunnelOutsideIpAddress = value; }
    inline void SetVpnTunnelOutsideIpAddress(Aws::String&& value) { m_vpnTunnelOutsideIpAddress = std::move(value); }
    inline void SetVpnTunnelOutsideIpAddress(const char* value) { m_vpnTunnelOutsideIpAddress.assign(value); }
    inline GetVpnTunnelReplacementStatusResponse& WithVpnTunnelOutsideIpAddress(const Aws::String& value) { SetVpnTunnelOutsideIpAddress(value); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithVpnTunnelOutsideIpAddress(Aws::String&& value) { SetVpnTunnelOutsideIpAddress(std::move(value)); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithVpnTunnelOutsideIpAddress(const char* value) { SetVpnTunnelOutsideIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Get details of pending tunnel endpoint maintenance.</p>
     */
    inline const MaintenanceDetails& GetMaintenanceDetails() const{ return m_maintenanceDetails; }
    inline void SetMaintenanceDetails(const MaintenanceDetails& value) { m_maintenanceDetails = value; }
    inline void SetMaintenanceDetails(MaintenanceDetails&& value) { m_maintenanceDetails = std::move(value); }
    inline GetVpnTunnelReplacementStatusResponse& WithMaintenanceDetails(const MaintenanceDetails& value) { SetMaintenanceDetails(value); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithMaintenanceDetails(MaintenanceDetails&& value) { SetMaintenanceDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline GetVpnTunnelReplacementStatusResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline GetVpnTunnelReplacementStatusResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionId;

    Aws::String m_transitGatewayId;

    Aws::String m_customerGatewayId;

    Aws::String m_vpnGatewayId;

    Aws::String m_vpnTunnelOutsideIpAddress;

    MaintenanceDetails m_maintenanceDetails;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
