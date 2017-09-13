/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  /**
   * <p>Contains the output of CreateVpnConnection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnConnectionResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateVpnConnectionResponse
  {
  public:
    CreateVpnConnectionResponse();
    CreateVpnConnectionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateVpnConnectionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline CreateVpnConnectionResponse& WithVpnConnection(const VpnConnection& value) { SetVpnConnection(value); return *this;}

    /**
     * <p>Information about the VPN connection.</p>
     */
    inline CreateVpnConnectionResponse& WithVpnConnection(VpnConnection&& value) { SetVpnConnection(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateVpnConnectionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateVpnConnectionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VpnConnection m_vpnConnection;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
