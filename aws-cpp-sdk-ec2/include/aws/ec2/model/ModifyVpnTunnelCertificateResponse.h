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
    AWS_EC2_API ModifyVpnTunnelCertificateResponse();
    AWS_EC2_API ModifyVpnTunnelCertificateResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyVpnTunnelCertificateResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the VPN connection.</p>
     */
    inline const VpnConnection& GetVpnConnection() const{ return m_vpnConnection; }

    /**
     * <p>Information about the VPN connection.</p>
     */
    inline void SetVpnConnection(const VpnConnection& value) { m_vpnConnection = value; }

    /**
     * <p>Information about the VPN connection.</p>
     */
    inline void SetVpnConnection(VpnConnection&& value) { m_vpnConnection = std::move(value); }

    /**
     * <p>Information about the VPN connection.</p>
     */
    inline ModifyVpnTunnelCertificateResponse& WithVpnConnection(const VpnConnection& value) { SetVpnConnection(value); return *this;}

    /**
     * <p>Information about the VPN connection.</p>
     */
    inline ModifyVpnTunnelCertificateResponse& WithVpnConnection(VpnConnection&& value) { SetVpnConnection(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyVpnTunnelCertificateResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyVpnTunnelCertificateResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VpnConnection m_vpnConnection;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
