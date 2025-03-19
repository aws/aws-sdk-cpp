/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpnConnection.h>
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
   * <p>Contains the output of DescribeVpnConnections.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnConnectionsResult">AWS
   * API Reference</a></p>
   */
  class DescribeVpnConnectionsResponse
  {
  public:
    AWS_EC2_API DescribeVpnConnectionsResponse() = default;
    AWS_EC2_API DescribeVpnConnectionsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpnConnectionsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about one or more VPN connections.</p>
     */
    inline const Aws::Vector<VpnConnection>& GetVpnConnections() const { return m_vpnConnections; }
    template<typename VpnConnectionsT = Aws::Vector<VpnConnection>>
    void SetVpnConnections(VpnConnectionsT&& value) { m_vpnConnectionsHasBeenSet = true; m_vpnConnections = std::forward<VpnConnectionsT>(value); }
    template<typename VpnConnectionsT = Aws::Vector<VpnConnection>>
    DescribeVpnConnectionsResponse& WithVpnConnections(VpnConnectionsT&& value) { SetVpnConnections(std::forward<VpnConnectionsT>(value)); return *this;}
    template<typename VpnConnectionsT = VpnConnection>
    DescribeVpnConnectionsResponse& AddVpnConnections(VpnConnectionsT&& value) { m_vpnConnectionsHasBeenSet = true; m_vpnConnections.emplace_back(std::forward<VpnConnectionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpnConnectionsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpnConnection> m_vpnConnections;
    bool m_vpnConnectionsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
