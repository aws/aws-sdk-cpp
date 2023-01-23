/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayConnectPeer.h>
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
  class DescribeTransitGatewayConnectPeersResponse
  {
  public:
    AWS_EC2_API DescribeTransitGatewayConnectPeersResponse();
    AWS_EC2_API DescribeTransitGatewayConnectPeersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeTransitGatewayConnectPeersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Connect peers.</p>
     */
    inline const Aws::Vector<TransitGatewayConnectPeer>& GetTransitGatewayConnectPeers() const{ return m_transitGatewayConnectPeers; }

    /**
     * <p>Information about the Connect peers.</p>
     */
    inline void SetTransitGatewayConnectPeers(const Aws::Vector<TransitGatewayConnectPeer>& value) { m_transitGatewayConnectPeers = value; }

    /**
     * <p>Information about the Connect peers.</p>
     */
    inline void SetTransitGatewayConnectPeers(Aws::Vector<TransitGatewayConnectPeer>&& value) { m_transitGatewayConnectPeers = std::move(value); }

    /**
     * <p>Information about the Connect peers.</p>
     */
    inline DescribeTransitGatewayConnectPeersResponse& WithTransitGatewayConnectPeers(const Aws::Vector<TransitGatewayConnectPeer>& value) { SetTransitGatewayConnectPeers(value); return *this;}

    /**
     * <p>Information about the Connect peers.</p>
     */
    inline DescribeTransitGatewayConnectPeersResponse& WithTransitGatewayConnectPeers(Aws::Vector<TransitGatewayConnectPeer>&& value) { SetTransitGatewayConnectPeers(std::move(value)); return *this;}

    /**
     * <p>Information about the Connect peers.</p>
     */
    inline DescribeTransitGatewayConnectPeersResponse& AddTransitGatewayConnectPeers(const TransitGatewayConnectPeer& value) { m_transitGatewayConnectPeers.push_back(value); return *this; }

    /**
     * <p>Information about the Connect peers.</p>
     */
    inline DescribeTransitGatewayConnectPeersResponse& AddTransitGatewayConnectPeers(TransitGatewayConnectPeer&& value) { m_transitGatewayConnectPeers.push_back(std::move(value)); return *this; }


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
    inline DescribeTransitGatewayConnectPeersResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayConnectPeersResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeTransitGatewayConnectPeersResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeTransitGatewayConnectPeersResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeTransitGatewayConnectPeersResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayConnectPeer> m_transitGatewayConnectPeers;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
