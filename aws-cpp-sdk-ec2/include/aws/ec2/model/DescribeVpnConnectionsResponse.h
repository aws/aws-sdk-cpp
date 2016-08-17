/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpnConnection.h>

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
   * <p>Contains the output of DescribeVpnConnections.</p>
   */
  class AWS_EC2_API DescribeVpnConnectionsResponse
  {
  public:
    DescribeVpnConnectionsResponse();
    DescribeVpnConnectionsResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeVpnConnectionsResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Information about one or more VPN connections.</p>
     */
    inline const Aws::Vector<VpnConnection>& GetVpnConnections() const{ return m_vpnConnections; }

    /**
     * <p>Information about one or more VPN connections.</p>
     */
    inline void SetVpnConnections(const Aws::Vector<VpnConnection>& value) { m_vpnConnections = value; }

    /**
     * <p>Information about one or more VPN connections.</p>
     */
    inline void SetVpnConnections(Aws::Vector<VpnConnection>&& value) { m_vpnConnections = value; }

    /**
     * <p>Information about one or more VPN connections.</p>
     */
    inline DescribeVpnConnectionsResponse& WithVpnConnections(const Aws::Vector<VpnConnection>& value) { SetVpnConnections(value); return *this;}

    /**
     * <p>Information about one or more VPN connections.</p>
     */
    inline DescribeVpnConnectionsResponse& WithVpnConnections(Aws::Vector<VpnConnection>&& value) { SetVpnConnections(value); return *this;}

    /**
     * <p>Information about one or more VPN connections.</p>
     */
    inline DescribeVpnConnectionsResponse& AddVpnConnections(const VpnConnection& value) { m_vpnConnections.push_back(value); return *this; }

    /**
     * <p>Information about one or more VPN connections.</p>
     */
    inline DescribeVpnConnectionsResponse& AddVpnConnections(VpnConnection&& value) { m_vpnConnections.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeVpnConnectionsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeVpnConnectionsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<VpnConnection> m_vpnConnections;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws