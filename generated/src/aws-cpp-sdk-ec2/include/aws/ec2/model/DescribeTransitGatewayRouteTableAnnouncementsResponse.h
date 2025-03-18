/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayRouteTableAnnouncement.h>
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
  class DescribeTransitGatewayRouteTableAnnouncementsResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayRouteTableAnnouncementsResponse() = default;
    AWS_EC2_API DescribeTransitGatewayRouteTableAnnouncementsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayRouteTableAnnouncementsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Describes the transit gateway route table announcement.</p>
     */
    inline const Aws::Vector<TransitGatewayRouteTableAnnouncement>& GetTransitGatewayRouteTableAnnouncements() const { return m_transitGatewayRouteTableAnnouncements; }
    template<typename TransitGatewayRouteTableAnnouncementsT = Aws::Vector<TransitGatewayRouteTableAnnouncement>>
    void SetTransitGatewayRouteTableAnnouncements(TransitGatewayRouteTableAnnouncementsT&& value) { m_transitGatewayRouteTableAnnouncementsHasBeenSet = true; m_transitGatewayRouteTableAnnouncements = std::forward<TransitGatewayRouteTableAnnouncementsT>(value); }
    template<typename TransitGatewayRouteTableAnnouncementsT = Aws::Vector<TransitGatewayRouteTableAnnouncement>>
    DescribeTransitGatewayRouteTableAnnouncementsResponse& WithTransitGatewayRouteTableAnnouncements(TransitGatewayRouteTableAnnouncementsT&& value) { SetTransitGatewayRouteTableAnnouncements(std::forward<TransitGatewayRouteTableAnnouncementsT>(value)); return *this;}
    template<typename TransitGatewayRouteTableAnnouncementsT = TransitGatewayRouteTableAnnouncement>
    DescribeTransitGatewayRouteTableAnnouncementsResponse& AddTransitGatewayRouteTableAnnouncements(TransitGatewayRouteTableAnnouncementsT&& value) { m_transitGatewayRouteTableAnnouncementsHasBeenSet = true; m_transitGatewayRouteTableAnnouncements.emplace_back(std::forward<TransitGatewayRouteTableAnnouncementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTransitGatewayRouteTableAnnouncementsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTransitGatewayRouteTableAnnouncementsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayRouteTableAnnouncement> m_transitGatewayRouteTableAnnouncements;
    bool m_transitGatewayRouteTableAnnouncementsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
