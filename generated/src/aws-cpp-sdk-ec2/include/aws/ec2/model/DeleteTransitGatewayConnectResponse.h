/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayConnect.h>
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
  class DeleteTransitGatewayConnectResponse
  {
  public:
    AWS_EC2_API DeleteTransitGatewayConnectResponse() = default;
    AWS_EC2_API DeleteTransitGatewayConnectResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayConnectResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deleted Connect attachment.</p>
     */
    inline const TransitGatewayConnect& GetTransitGatewayConnect() const { return m_transitGatewayConnect; }
    template<typename TransitGatewayConnectT = TransitGatewayConnect>
    void SetTransitGatewayConnect(TransitGatewayConnectT&& value) { m_transitGatewayConnectHasBeenSet = true; m_transitGatewayConnect = std::forward<TransitGatewayConnectT>(value); }
    template<typename TransitGatewayConnectT = TransitGatewayConnect>
    DeleteTransitGatewayConnectResponse& WithTransitGatewayConnect(TransitGatewayConnectT&& value) { SetTransitGatewayConnect(std::forward<TransitGatewayConnectT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteTransitGatewayConnectResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayConnect m_transitGatewayConnect;
    bool m_transitGatewayConnectHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
