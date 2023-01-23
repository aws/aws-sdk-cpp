/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayConnect.h>
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
  class DescribeTransitGatewayConnectsResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayConnectsResponse();
    AWS_EC2_API DescribeTransitGatewayConnectsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayConnectsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Connect attachments.</p>
     */
    inline const Aws::Vector<TransitGatewayConnect>& GetTransitGatewayConnects() const{ return m_transitGatewayConnects; }

    /**
     * <p>Information about the Connect attachments.</p>
     */
    inline void SetTransitGatewayConnects(const Aws::Vector<TransitGatewayConnect>& value) { m_transitGatewayConnects = value; }

    /**
     * <p>Information about the Connect attachments.</p>
     */
    inline void SetTransitGatewayConnects(Aws::Vector<TransitGatewayConnect>&& value) { m_transitGatewayConnects = std::move(value); }

    /**
     * <p>Information about the Connect attachments.</p>
     */
    inline DescribeTransitGatewayConnectsResponse& WithTransitGatewayConnects(const Aws::Vector<TransitGatewayConnect>& value) { SetTransitGatewayConnects(value); return *this;}

    /**
     * <p>Information about the Connect attachments.</p>
     */
    inline DescribeTransitGatewayConnectsResponse& WithTransitGatewayConnects(Aws::Vector<TransitGatewayConnect>&& value) { SetTransitGatewayConnects(std::move(value)); return *this;}

    /**
     * <p>Information about the Connect attachments.</p>
     */
    inline DescribeTransitGatewayConnectsResponse& AddTransitGatewayConnects(const TransitGatewayConnect& value) { m_transitGatewayConnects.push_back(value); return *this; }

    /**
     * <p>Information about the Connect attachments.</p>
     */
    inline DescribeTransitGatewayConnectsResponse& AddTransitGatewayConnects(TransitGatewayConnect&& value) { m_transitGatewayConnects.push_back(std::move(value)); return *this; }


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
    inline DescribeTransitGatewayConnectsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayConnectsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayConnectsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTransitGatewayConnectsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTransitGatewayConnectsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayConnect> m_transitGatewayConnects;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
