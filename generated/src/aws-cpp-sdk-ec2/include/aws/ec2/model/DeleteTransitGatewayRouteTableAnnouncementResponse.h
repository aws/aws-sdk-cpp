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
    AWS_EC2_API DeleteTransitGatewayRouteTableAnnouncementResponse() = default;
    AWS_EC2_API DeleteTransitGatewayRouteTableAnnouncementResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayRouteTableAnnouncementResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Provides details about a deleted transit gateway route table.</p>
     */
    inline const TransitGatewayRouteTableAnnouncement& GetTransitGatewayRouteTableAnnouncement() const { return m_transitGatewayRouteTableAnnouncement; }
    template<typename TransitGatewayRouteTableAnnouncementT = TransitGatewayRouteTableAnnouncement>
    void SetTransitGatewayRouteTableAnnouncement(TransitGatewayRouteTableAnnouncementT&& value) { m_transitGatewayRouteTableAnnouncementHasBeenSet = true; m_transitGatewayRouteTableAnnouncement = std::forward<TransitGatewayRouteTableAnnouncementT>(value); }
    template<typename TransitGatewayRouteTableAnnouncementT = TransitGatewayRouteTableAnnouncement>
    DeleteTransitGatewayRouteTableAnnouncementResponse& WithTransitGatewayRouteTableAnnouncement(TransitGatewayRouteTableAnnouncementT&& value) { SetTransitGatewayRouteTableAnnouncement(std::forward<TransitGatewayRouteTableAnnouncementT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteTransitGatewayRouteTableAnnouncementResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayRouteTableAnnouncement m_transitGatewayRouteTableAnnouncement;
    bool m_transitGatewayRouteTableAnnouncementHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
