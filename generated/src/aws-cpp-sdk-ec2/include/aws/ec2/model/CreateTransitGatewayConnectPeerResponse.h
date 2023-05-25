/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayConnectPeer.h>
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
  class CreateTransitGatewayConnectPeerResponse
  {
  public:
    AWS_EC2_API CreateTransitGatewayConnectPeerResponse();
    AWS_EC2_API CreateTransitGatewayConnectPeerResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateTransitGatewayConnectPeerResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Connect peer.</p>
     */
    inline const TransitGatewayConnectPeer& GetTransitGatewayConnectPeer() const{ return m_transitGatewayConnectPeer; }

    /**
     * <p>Information about the Connect peer.</p>
     */
    inline void SetTransitGatewayConnectPeer(const TransitGatewayConnectPeer& value) { m_transitGatewayConnectPeer = value; }

    /**
     * <p>Information about the Connect peer.</p>
     */
    inline void SetTransitGatewayConnectPeer(TransitGatewayConnectPeer&& value) { m_transitGatewayConnectPeer = std::move(value); }

    /**
     * <p>Information about the Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerResponse& WithTransitGatewayConnectPeer(const TransitGatewayConnectPeer& value) { SetTransitGatewayConnectPeer(value); return *this;}

    /**
     * <p>Information about the Connect peer.</p>
     */
    inline CreateTransitGatewayConnectPeerResponse& WithTransitGatewayConnectPeer(TransitGatewayConnectPeer&& value) { SetTransitGatewayConnectPeer(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateTransitGatewayConnectPeerResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateTransitGatewayConnectPeerResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayConnectPeer m_transitGatewayConnectPeer;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
