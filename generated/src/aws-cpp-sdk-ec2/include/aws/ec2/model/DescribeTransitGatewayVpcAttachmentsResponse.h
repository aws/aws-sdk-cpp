﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayVpcAttachment.h>
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
  class DescribeTransitGatewayVpcAttachmentsResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayVpcAttachmentsResponse();
    AWS_EC2_API DescribeTransitGatewayVpcAttachmentsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayVpcAttachmentsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the VPC attachments.</p>
     */
    inline const Aws::Vector<TransitGatewayVpcAttachment>& GetTransitGatewayVpcAttachments() const{ return m_transitGatewayVpcAttachments; }

    /**
     * <p>Information about the VPC attachments.</p>
     */
    inline void SetTransitGatewayVpcAttachments(const Aws::Vector<TransitGatewayVpcAttachment>& value) { m_transitGatewayVpcAttachments = value; }

    /**
     * <p>Information about the VPC attachments.</p>
     */
    inline void SetTransitGatewayVpcAttachments(Aws::Vector<TransitGatewayVpcAttachment>&& value) { m_transitGatewayVpcAttachments = std::move(value); }

    /**
     * <p>Information about the VPC attachments.</p>
     */
    inline DescribeTransitGatewayVpcAttachmentsResponse& WithTransitGatewayVpcAttachments(const Aws::Vector<TransitGatewayVpcAttachment>& value) { SetTransitGatewayVpcAttachments(value); return *this;}

    /**
     * <p>Information about the VPC attachments.</p>
     */
    inline DescribeTransitGatewayVpcAttachmentsResponse& WithTransitGatewayVpcAttachments(Aws::Vector<TransitGatewayVpcAttachment>&& value) { SetTransitGatewayVpcAttachments(std::move(value)); return *this;}

    /**
     * <p>Information about the VPC attachments.</p>
     */
    inline DescribeTransitGatewayVpcAttachmentsResponse& AddTransitGatewayVpcAttachments(const TransitGatewayVpcAttachment& value) { m_transitGatewayVpcAttachments.push_back(value); return *this; }

    /**
     * <p>Information about the VPC attachments.</p>
     */
    inline DescribeTransitGatewayVpcAttachmentsResponse& AddTransitGatewayVpcAttachments(TransitGatewayVpcAttachment&& value) { m_transitGatewayVpcAttachments.push_back(std::move(value)); return *this; }


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
    inline DescribeTransitGatewayVpcAttachmentsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayVpcAttachmentsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayVpcAttachmentsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTransitGatewayVpcAttachmentsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTransitGatewayVpcAttachmentsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayVpcAttachment> m_transitGatewayVpcAttachments;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
