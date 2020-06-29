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
  class AWS_EC2_API ModifyVpnConnectionResponse
  {
  public:
    ModifyVpnConnectionResponse();
    ModifyVpnConnectionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyVpnConnectionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    
    inline const VpnConnection& GetVpnConnection() const{ return m_vpnConnection; }

    
    inline void SetVpnConnection(const VpnConnection& value) { m_vpnConnection = value; }

    
    inline void SetVpnConnection(VpnConnection&& value) { m_vpnConnection = std::move(value); }

    
    inline ModifyVpnConnectionResponse& WithVpnConnection(const VpnConnection& value) { SetVpnConnection(value); return *this;}

    
    inline ModifyVpnConnectionResponse& WithVpnConnection(VpnConnection&& value) { SetVpnConnection(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyVpnConnectionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyVpnConnectionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VpnConnection m_vpnConnection;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
