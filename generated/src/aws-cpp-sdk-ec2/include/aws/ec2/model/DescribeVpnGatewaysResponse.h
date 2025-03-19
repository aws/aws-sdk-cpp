/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VpnGateway.h>
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
   * <p>Contains the output of DescribeVpnGateways.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeVpnGatewaysResult">AWS
   * API Reference</a></p>
   */
  class DescribeVpnGatewaysResponse
  {
  public:
    AWS_EC2_API DescribeVpnGatewaysResponse() = default;
    AWS_EC2_API DescribeVpnGatewaysResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVpnGatewaysResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about one or more virtual private gateways.</p>
     */
    inline const Aws::Vector<VpnGateway>& GetVpnGateways() const { return m_vpnGateways; }
    template<typename VpnGatewaysT = Aws::Vector<VpnGateway>>
    void SetVpnGateways(VpnGatewaysT&& value) { m_vpnGatewaysHasBeenSet = true; m_vpnGateways = std::forward<VpnGatewaysT>(value); }
    template<typename VpnGatewaysT = Aws::Vector<VpnGateway>>
    DescribeVpnGatewaysResponse& WithVpnGateways(VpnGatewaysT&& value) { SetVpnGateways(std::forward<VpnGatewaysT>(value)); return *this;}
    template<typename VpnGatewaysT = VpnGateway>
    DescribeVpnGatewaysResponse& AddVpnGateways(VpnGatewaysT&& value) { m_vpnGatewaysHasBeenSet = true; m_vpnGateways.emplace_back(std::forward<VpnGatewaysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVpnGatewaysResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpnGateway> m_vpnGateways;
    bool m_vpnGatewaysHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
