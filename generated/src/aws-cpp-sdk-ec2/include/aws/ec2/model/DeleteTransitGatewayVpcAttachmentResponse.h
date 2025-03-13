/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayVpcAttachment.h>
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
  class DeleteTransitGatewayVpcAttachmentResponse
  {
  public:
    AWS_EC2_API DeleteTransitGatewayVpcAttachmentResponse() = default;
    AWS_EC2_API DeleteTransitGatewayVpcAttachmentResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayVpcAttachmentResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deleted VPC attachment.</p>
     */
    inline const TransitGatewayVpcAttachment& GetTransitGatewayVpcAttachment() const { return m_transitGatewayVpcAttachment; }
    template<typename TransitGatewayVpcAttachmentT = TransitGatewayVpcAttachment>
    void SetTransitGatewayVpcAttachment(TransitGatewayVpcAttachmentT&& value) { m_transitGatewayVpcAttachmentHasBeenSet = true; m_transitGatewayVpcAttachment = std::forward<TransitGatewayVpcAttachmentT>(value); }
    template<typename TransitGatewayVpcAttachmentT = TransitGatewayVpcAttachment>
    DeleteTransitGatewayVpcAttachmentResponse& WithTransitGatewayVpcAttachment(TransitGatewayVpcAttachmentT&& value) { SetTransitGatewayVpcAttachment(std::forward<TransitGatewayVpcAttachmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteTransitGatewayVpcAttachmentResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayVpcAttachment m_transitGatewayVpcAttachment;
    bool m_transitGatewayVpcAttachmentHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
