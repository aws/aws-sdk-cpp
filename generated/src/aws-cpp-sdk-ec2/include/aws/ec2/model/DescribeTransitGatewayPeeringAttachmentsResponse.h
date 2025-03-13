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
    AWS_EC2_API DescribeTransitGatewayPeeringAttachmentsResponse() = default;
    AWS_EC2_API DescribeTransitGatewayPeeringAttachmentsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayPeeringAttachmentsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The transit gateway peering attachments.</p>
     */
    inline const Aws::Vector<TransitGatewayPeeringAttachment>& GetTransitGatewayPeeringAttachments() const { return m_transitGatewayPeeringAttachments; }
    template<typename TransitGatewayPeeringAttachmentsT = Aws::Vector<TransitGatewayPeeringAttachment>>
    void SetTransitGatewayPeeringAttachments(TransitGatewayPeeringAttachmentsT&& value) { m_transitGatewayPeeringAttachmentsHasBeenSet = true; m_transitGatewayPeeringAttachments = std::forward<TransitGatewayPeeringAttachmentsT>(value); }
    template<typename TransitGatewayPeeringAttachmentsT = Aws::Vector<TransitGatewayPeeringAttachment>>
    DescribeTransitGatewayPeeringAttachmentsResponse& WithTransitGatewayPeeringAttachments(TransitGatewayPeeringAttachmentsT&& value) { SetTransitGatewayPeeringAttachments(std::forward<TransitGatewayPeeringAttachmentsT>(value)); return *this;}
    template<typename TransitGatewayPeeringAttachmentsT = TransitGatewayPeeringAttachment>
    DescribeTransitGatewayPeeringAttachmentsResponse& AddTransitGatewayPeeringAttachments(TransitGatewayPeeringAttachmentsT&& value) { m_transitGatewayPeeringAttachmentsHasBeenSet = true; m_transitGatewayPeeringAttachments.emplace_back(std::forward<TransitGatewayPeeringAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTransitGatewayPeeringAttachmentsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeTransitGatewayPeeringAttachmentsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayPeeringAttachment> m_transitGatewayPeeringAttachments;
    bool m_transitGatewayPeeringAttachmentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
