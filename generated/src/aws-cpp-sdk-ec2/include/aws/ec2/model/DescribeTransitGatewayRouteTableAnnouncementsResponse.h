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
    AWS_EC2_API DescribeTransitGatewayRouteTableAnnouncementsResponse();
    AWS_EC2_API DescribeTransitGatewayRouteTableAnnouncementsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayRouteTableAnnouncementsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Describes the transit gateway route table announcement.</p>
     */
    inline const Aws::Vector<TransitGatewayRouteTableAnnouncement>& GetTransitGatewayRouteTableAnnouncements() const{ return m_transitGatewayRouteTableAnnouncements; }
    inline void SetTransitGatewayRouteTableAnnouncements(const Aws::Vector<TransitGatewayRouteTableAnnouncement>& value) { m_transitGatewayRouteTableAnnouncements = value; }
    inline void SetTransitGatewayRouteTableAnnouncements(Aws::Vector<TransitGatewayRouteTableAnnouncement>&& value) { m_transitGatewayRouteTableAnnouncements = std::move(value); }
    inline DescribeTransitGatewayRouteTableAnnouncementsResponse& WithTransitGatewayRouteTableAnnouncements(const Aws::Vector<TransitGatewayRouteTableAnnouncement>& value) { SetTransitGatewayRouteTableAnnouncements(value); return *this;}
    inline DescribeTransitGatewayRouteTableAnnouncementsResponse& WithTransitGatewayRouteTableAnnouncements(Aws::Vector<TransitGatewayRouteTableAnnouncement>&& value) { SetTransitGatewayRouteTableAnnouncements(std::move(value)); return *this;}
    inline DescribeTransitGatewayRouteTableAnnouncementsResponse& AddTransitGatewayRouteTableAnnouncements(const TransitGatewayRouteTableAnnouncement& value) { m_transitGatewayRouteTableAnnouncements.push_back(value); return *this; }
    inline DescribeTransitGatewayRouteTableAnnouncementsResponse& AddTransitGatewayRouteTableAnnouncements(TransitGatewayRouteTableAnnouncement&& value) { m_transitGatewayRouteTableAnnouncements.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeTransitGatewayRouteTableAnnouncementsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeTransitGatewayRouteTableAnnouncementsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeTransitGatewayRouteTableAnnouncementsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeTransitGatewayRouteTableAnnouncementsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeTransitGatewayRouteTableAnnouncementsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayRouteTableAnnouncement> m_transitGatewayRouteTableAnnouncements;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
