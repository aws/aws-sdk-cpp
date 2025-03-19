/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpnConnection.h>
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
  class ModifyVpnTunnelCertificateResponse
  {
  public:
    AWS_EC2_API ModifyVpnTunnelCertificateResponse() = default;
    AWS_EC2_API ModifyVpnTunnelCertificateResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVpnTunnelCertificateResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the VPN connection.</p>
     */
    inline const VpnConnection& GetVpnConnection() const { return m_vpnConnection; }
    template<typename VpnConnectionT = VpnConnection>
    void SetVpnConnection(VpnConnectionT&& value) { m_vpnConnectionHasBeenSet = true; m_vpnConnection = std::forward<VpnConnectionT>(value); }
    template<typename VpnConnectionT = VpnConnection>
    ModifyVpnTunnelCertificateResponse& WithVpnConnection(VpnConnectionT&& value) { SetVpnConnection(std::forward<VpnConnectionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyVpnTunnelCertificateResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VpnConnection m_vpnConnection;
    bool m_vpnConnectionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
