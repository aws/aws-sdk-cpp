/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpnGateway.h>
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
   * <p>Contains the output of CreateVpnGateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateVpnGatewayResult">AWS
   * API Reference</a></p>
   */
  class CreateVpnGatewayResponse
  {
  public:
    AWS_EC2_API CreateVpnGatewayResponse() = default;
    AWS_EC2_API CreateVpnGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateVpnGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the virtual private gateway.</p>
     */
    inline const VpnGateway& GetVpnGateway() const { return m_vpnGateway; }
    template<typename VpnGatewayT = VpnGateway>
    void SetVpnGateway(VpnGatewayT&& value) { m_vpnGatewayHasBeenSet = true; m_vpnGateway = std::forward<VpnGatewayT>(value); }
    template<typename VpnGatewayT = VpnGateway>
    CreateVpnGatewayResponse& WithVpnGateway(VpnGatewayT&& value) { SetVpnGateway(std::forward<VpnGatewayT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateVpnGatewayResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    VpnGateway m_vpnGateway;
    bool m_vpnGatewayHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
