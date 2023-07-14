﻿/**
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
  class AWS_EC2_API ModifyTransitGatewayVpcAttachmentResponse
  {
  public:
    ModifyTransitGatewayVpcAttachmentResponse();
    ModifyTransitGatewayVpcAttachmentResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ModifyTransitGatewayVpcAttachmentResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the modified attachment.</p>
     */
    inline const TransitGatewayVpcAttachment& GetTransitGatewayVpcAttachment() const{ return m_transitGatewayVpcAttachment; }

    /**
     * <p>Information about the modified attachment.</p>
     */
    inline void SetTransitGatewayVpcAttachment(const TransitGatewayVpcAttachment& value) { m_transitGatewayVpcAttachment = value; }

    /**
     * <p>Information about the modified attachment.</p>
     */
    inline void SetTransitGatewayVpcAttachment(TransitGatewayVpcAttachment&& value) { m_transitGatewayVpcAttachment = std::move(value); }

    /**
     * <p>Information about the modified attachment.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentResponse& WithTransitGatewayVpcAttachment(const TransitGatewayVpcAttachment& value) { SetTransitGatewayVpcAttachment(value); return *this;}

    /**
     * <p>Information about the modified attachment.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentResponse& WithTransitGatewayVpcAttachment(TransitGatewayVpcAttachment&& value) { SetTransitGatewayVpcAttachment(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyTransitGatewayVpcAttachmentResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyTransitGatewayVpcAttachmentResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayVpcAttachment m_transitGatewayVpcAttachment;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
