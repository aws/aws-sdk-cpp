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
    AWS_EC2_API GetVpnTunnelReplacementStatusResponse() = default;
    AWS_EC2_API GetVpnTunnelReplacementStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetVpnTunnelReplacementStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the Site-to-Site VPN connection. </p>
     */
    inline const Aws::String& GetVpnConnectionId() const { return m_vpnConnectionId; }
    template<typename VpnConnectionIdT = Aws::String>
    void SetVpnConnectionId(VpnConnectionIdT&& value) { m_vpnConnectionIdHasBeenSet = true; m_vpnConnectionId = std::forward<VpnConnectionIdT>(value); }
    template<typename VpnConnectionIdT = Aws::String>
    GetVpnTunnelReplacementStatusResponse& WithVpnConnectionId(VpnConnectionIdT&& value) { SetVpnConnectionId(std::forward<VpnConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the transit gateway associated with the VPN connection.</p>
     */
    inline const Aws::String& GetTransitGatewayId() const { return m_transitGatewayId; }
    template<typename TransitGatewayIdT = Aws::String>
    void SetTransitGatewayId(TransitGatewayIdT&& value) { m_transitGatewayIdHasBeenSet = true; m_transitGatewayId = std::forward<TransitGatewayIdT>(value); }
    template<typename TransitGatewayIdT = Aws::String>
    GetVpnTunnelReplacementStatusResponse& WithTransitGatewayId(TransitGatewayIdT&& value) { SetTransitGatewayId(std::forward<TransitGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the customer gateway.</p>
     */
    inline const Aws::String& GetCustomerGatewayId() const { return m_customerGatewayId; }
    template<typename CustomerGatewayIdT = Aws::String>
    void SetCustomerGatewayId(CustomerGatewayIdT&& value) { m_customerGatewayIdHasBeenSet = true; m_customerGatewayId = std::forward<CustomerGatewayIdT>(value); }
    template<typename CustomerGatewayIdT = Aws::String>
    GetVpnTunnelReplacementStatusResponse& WithCustomerGatewayId(CustomerGatewayIdT&& value) { SetCustomerGatewayId(std::forward<CustomerGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the virtual private gateway.</p>
     */
    inline const Aws::String& GetVpnGatewayId() const { return m_vpnGatewayId; }
    template<typename VpnGatewayIdT = Aws::String>
    void SetVpnGatewayId(VpnGatewayIdT&& value) { m_vpnGatewayIdHasBeenSet = true; m_vpnGatewayId = std::forward<VpnGatewayIdT>(value); }
    template<typename VpnGatewayIdT = Aws::String>
    GetVpnTunnelReplacementStatusResponse& WithVpnGatewayId(VpnGatewayIdT&& value) { SetVpnGatewayId(std::forward<VpnGatewayIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external IP address of the VPN tunnel.</p>
     */
    inline const Aws::String& GetVpnTunnelOutsideIpAddress() const { return m_vpnTunnelOutsideIpAddress; }
    template<typename VpnTunnelOutsideIpAddressT = Aws::String>
    void SetVpnTunnelOutsideIpAddress(VpnTunnelOutsideIpAddressT&& value) { m_vpnTunnelOutsideIpAddressHasBeenSet = true; m_vpnTunnelOutsideIpAddress = std::forward<VpnTunnelOutsideIpAddressT>(value); }
    template<typename VpnTunnelOutsideIpAddressT = Aws::String>
    GetVpnTunnelReplacementStatusResponse& WithVpnTunnelOutsideIpAddress(VpnTunnelOutsideIpAddressT&& value) { SetVpnTunnelOutsideIpAddress(std::forward<VpnTunnelOutsideIpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Get details of pending tunnel endpoint maintenance.</p>
     */
    inline const MaintenanceDetails& GetMaintenanceDetails() const { return m_maintenanceDetails; }
    template<typename MaintenanceDetailsT = MaintenanceDetails>
    void SetMaintenanceDetails(MaintenanceDetailsT&& value) { m_maintenanceDetailsHasBeenSet = true; m_maintenanceDetails = std::forward<MaintenanceDetailsT>(value); }
    template<typename MaintenanceDetailsT = MaintenanceDetails>
    GetVpnTunnelReplacementStatusResponse& WithMaintenanceDetails(MaintenanceDetailsT&& value) { SetMaintenanceDetails(std::forward<MaintenanceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetVpnTunnelReplacementStatusResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_vpnConnectionId;
    bool m_vpnConnectionIdHasBeenSet = false;

    Aws::String m_transitGatewayId;
    bool m_transitGatewayIdHasBeenSet = false;

    Aws::String m_customerGatewayId;
    bool m_customerGatewayIdHasBeenSet = false;

    Aws::String m_vpnGatewayId;
    bool m_vpnGatewayIdHasBeenSet = false;

    Aws::String m_vpnTunnelOutsideIpAddress;
    bool m_vpnTunnelOutsideIpAddressHasBeenSet = false;

    MaintenanceDetails m_maintenanceDetails;
    bool m_maintenanceDetailsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
