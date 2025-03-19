/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayPeeringAttachment.h>
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
  class AcceptTransitGatewayPeeringAttachmentResponse
  {
  public:
    AWS_EC2_API AcceptTransitGatewayPeeringAttachmentResponse() = default;
    AWS_EC2_API AcceptTransitGatewayPeeringAttachmentResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AcceptTransitGatewayPeeringAttachmentResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The transit gateway peering attachment.</p>
     */
    inline const TransitGatewayPeeringAttachment& GetTransitGatewayPeeringAttachment() const { return m_transitGatewayPeeringAttachment; }
    template<typename TransitGatewayPeeringAttachmentT = TransitGatewayPeeringAttachment>
    void SetTransitGatewayPeeringAttachment(TransitGatewayPeeringAttachmentT&& value) { m_transitGatewayPeeringAttachmentHasBeenSet = true; m_transitGatewayPeeringAttachment = std::forward<TransitGatewayPeeringAttachmentT>(value); }
    template<typename TransitGatewayPeeringAttachmentT = TransitGatewayPeeringAttachment>
    AcceptTransitGatewayPeeringAttachmentResponse& WithTransitGatewayPeeringAttachment(TransitGatewayPeeringAttachmentT&& value) { SetTransitGatewayPeeringAttachment(std::forward<TransitGatewayPeeringAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AcceptTransitGatewayPeeringAttachmentResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayPeeringAttachment m_transitGatewayPeeringAttachment;
    bool m_transitGatewayPeeringAttachmentHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
