/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayConnectPeer.h>
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
  class DeleteTransitGatewayConnectPeerResponse
  {
  public:
    AWS_EC2_API DeleteTransitGatewayConnectPeerResponse() = default;
    AWS_EC2_API DeleteTransitGatewayConnectPeerResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayConnectPeerResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deleted Connect peer.</p>
     */
    inline const TransitGatewayConnectPeer& GetTransitGatewayConnectPeer() const { return m_transitGatewayConnectPeer; }
    template<typename TransitGatewayConnectPeerT = TransitGatewayConnectPeer>
    void SetTransitGatewayConnectPeer(TransitGatewayConnectPeerT&& value) { m_transitGatewayConnectPeerHasBeenSet = true; m_transitGatewayConnectPeer = std::forward<TransitGatewayConnectPeerT>(value); }
    template<typename TransitGatewayConnectPeerT = TransitGatewayConnectPeer>
    DeleteTransitGatewayConnectPeerResponse& WithTransitGatewayConnectPeer(TransitGatewayConnectPeerT&& value) { SetTransitGatewayConnectPeer(std::forward<TransitGatewayConnectPeerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteTransitGatewayConnectPeerResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayConnectPeer m_transitGatewayConnectPeer;
    bool m_transitGatewayConnectPeerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
