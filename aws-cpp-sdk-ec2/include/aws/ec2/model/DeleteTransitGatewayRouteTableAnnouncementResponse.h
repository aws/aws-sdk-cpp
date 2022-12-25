/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayRouteTableAnnouncement.h>
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
  class DeleteTransitGatewayRouteTableAnnouncementResponse
  {
  public:
    AWS_EC2_API DeleteTransitGatewayRouteTableAnnouncementResponse();
    AWS_EC2_API DeleteTransitGatewayRouteTableAnnouncementResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayRouteTableAnnouncementResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Provides details about a deleted transit gateway route table.</p>
     */
    inline const TransitGatewayRouteTableAnnouncement& GetTransitGatewayRouteTableAnnouncement() const{ return m_transitGatewayRouteTableAnnouncement; }

    /**
     * <p>Provides details about a deleted transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableAnnouncement(const TransitGatewayRouteTableAnnouncement& value) { m_transitGatewayRouteTableAnnouncement = value; }

    /**
     * <p>Provides details about a deleted transit gateway route table.</p>
     */
    inline void SetTransitGatewayRouteTableAnnouncement(TransitGatewayRouteTableAnnouncement&& value) { m_transitGatewayRouteTableAnnouncement = std::move(value); }

    /**
     * <p>Provides details about a deleted transit gateway route table.</p>
     */
    inline DeleteTransitGatewayRouteTableAnnouncementResponse& WithTransitGatewayRouteTableAnnouncement(const TransitGatewayRouteTableAnnouncement& value) { SetTransitGatewayRouteTableAnnouncement(value); return *this;}

    /**
     * <p>Provides details about a deleted transit gateway route table.</p>
     */
    inline DeleteTransitGatewayRouteTableAnnouncementResponse& WithTransitGatewayRouteTableAnnouncement(TransitGatewayRouteTableAnnouncement&& value) { SetTransitGatewayRouteTableAnnouncement(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteTransitGatewayRouteTableAnnouncementResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteTransitGatewayRouteTableAnnouncementResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayRouteTableAnnouncement m_transitGatewayRouteTableAnnouncement;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
