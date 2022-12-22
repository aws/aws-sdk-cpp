/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayPeeringAttachment.h>
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
  class DescribeTransitGatewayPeeringAttachmentsResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayPeeringAttachmentsResponse();
    AWS_EC2_API DescribeTransitGatewayPeeringAttachmentsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayPeeringAttachmentsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The transit gateway peering attachments.</p>
     */
    inline const Aws::Vector<TransitGatewayPeeringAttachment>& GetTransitGatewayPeeringAttachments() const{ return m_transitGatewayPeeringAttachments; }

    /**
     * <p>The transit gateway peering attachments.</p>
     */
    inline void SetTransitGatewayPeeringAttachments(const Aws::Vector<TransitGatewayPeeringAttachment>& value) { m_transitGatewayPeeringAttachments = value; }

    /**
     * <p>The transit gateway peering attachments.</p>
     */
    inline void SetTransitGatewayPeeringAttachments(Aws::Vector<TransitGatewayPeeringAttachment>&& value) { m_transitGatewayPeeringAttachments = std::move(value); }

    /**
     * <p>The transit gateway peering attachments.</p>
     */
    inline DescribeTransitGatewayPeeringAttachmentsResponse& WithTransitGatewayPeeringAttachments(const Aws::Vector<TransitGatewayPeeringAttachment>& value) { SetTransitGatewayPeeringAttachments(value); return *this;}

    /**
     * <p>The transit gateway peering attachments.</p>
     */
    inline DescribeTransitGatewayPeeringAttachmentsResponse& WithTransitGatewayPeeringAttachments(Aws::Vector<TransitGatewayPeeringAttachment>&& value) { SetTransitGatewayPeeringAttachments(std::move(value)); return *this;}

    /**
     * <p>The transit gateway peering attachments.</p>
     */
    inline DescribeTransitGatewayPeeringAttachmentsResponse& AddTransitGatewayPeeringAttachments(const TransitGatewayPeeringAttachment& value) { m_transitGatewayPeeringAttachments.push_back(value); return *this; }

    /**
     * <p>The transit gateway peering attachments.</p>
     */
    inline DescribeTransitGatewayPeeringAttachmentsResponse& AddTransitGatewayPeeringAttachments(TransitGatewayPeeringAttachment&& value) { m_transitGatewayPeeringAttachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayPeeringAttachmentsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayPeeringAttachmentsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayPeeringAttachmentsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTransitGatewayPeeringAttachmentsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTransitGatewayPeeringAttachmentsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayPeeringAttachment> m_transitGatewayPeeringAttachments;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
