/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayAttachment.h>
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
  class DescribeTransitGatewayAttachmentsResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayAttachmentsResponse();
    AWS_EC2_API DescribeTransitGatewayAttachmentsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayAttachmentsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the attachments.</p>
     */
    inline const Aws::Vector<TransitGatewayAttachment>& GetTransitGatewayAttachments() const{ return m_transitGatewayAttachments; }

    /**
     * <p>Information about the attachments.</p>
     */
    inline void SetTransitGatewayAttachments(const Aws::Vector<TransitGatewayAttachment>& value) { m_transitGatewayAttachments = value; }

    /**
     * <p>Information about the attachments.</p>
     */
    inline void SetTransitGatewayAttachments(Aws::Vector<TransitGatewayAttachment>&& value) { m_transitGatewayAttachments = std::move(value); }

    /**
     * <p>Information about the attachments.</p>
     */
    inline DescribeTransitGatewayAttachmentsResponse& WithTransitGatewayAttachments(const Aws::Vector<TransitGatewayAttachment>& value) { SetTransitGatewayAttachments(value); return *this;}

    /**
     * <p>Information about the attachments.</p>
     */
    inline DescribeTransitGatewayAttachmentsResponse& WithTransitGatewayAttachments(Aws::Vector<TransitGatewayAttachment>&& value) { SetTransitGatewayAttachments(std::move(value)); return *this;}

    /**
     * <p>Information about the attachments.</p>
     */
    inline DescribeTransitGatewayAttachmentsResponse& AddTransitGatewayAttachments(const TransitGatewayAttachment& value) { m_transitGatewayAttachments.push_back(value); return *this; }

    /**
     * <p>Information about the attachments.</p>
     */
    inline DescribeTransitGatewayAttachmentsResponse& AddTransitGatewayAttachments(TransitGatewayAttachment&& value) { m_transitGatewayAttachments.push_back(std::move(value)); return *this; }


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
    inline DescribeTransitGatewayAttachmentsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayAttachmentsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayAttachmentsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTransitGatewayAttachmentsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTransitGatewayAttachmentsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayAttachment> m_transitGatewayAttachments;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
