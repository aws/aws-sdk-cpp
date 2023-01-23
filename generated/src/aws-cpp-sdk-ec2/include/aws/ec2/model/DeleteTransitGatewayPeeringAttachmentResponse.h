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
  class DeleteTransitGatewayPeeringAttachmentResponse
  {
  public:
    AWS_EC2_API DeleteTransitGatewayPeeringAttachmentResponse();
    AWS_EC2_API DeleteTransitGatewayPeeringAttachmentResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayPeeringAttachmentResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The transit gateway peering attachment.</p>
     */
    inline const TransitGatewayPeeringAttachment& GetTransitGatewayPeeringAttachment() const{ return m_transitGatewayPeeringAttachment; }

    /**
     * <p>The transit gateway peering attachment.</p>
     */
    inline void SetTransitGatewayPeeringAttachment(const TransitGatewayPeeringAttachment& value) { m_transitGatewayPeeringAttachment = value; }

    /**
     * <p>The transit gateway peering attachment.</p>
     */
    inline void SetTransitGatewayPeeringAttachment(TransitGatewayPeeringAttachment&& value) { m_transitGatewayPeeringAttachment = std::move(value); }

    /**
     * <p>The transit gateway peering attachment.</p>
     */
    inline DeleteTransitGatewayPeeringAttachmentResponse& WithTransitGatewayPeeringAttachment(const TransitGatewayPeeringAttachment& value) { SetTransitGatewayPeeringAttachment(value); return *this;}

    /**
     * <p>The transit gateway peering attachment.</p>
     */
    inline DeleteTransitGatewayPeeringAttachmentResponse& WithTransitGatewayPeeringAttachment(TransitGatewayPeeringAttachment&& value) { SetTransitGatewayPeeringAttachment(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteTransitGatewayPeeringAttachmentResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteTransitGatewayPeeringAttachmentResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayPeeringAttachment m_transitGatewayPeeringAttachment;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
