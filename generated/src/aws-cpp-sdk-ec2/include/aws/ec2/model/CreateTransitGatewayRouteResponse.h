/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayRoute.h>
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
  class CreateTransitGatewayRouteResponse
  {
  public:
    AWS_EC2_API CreateTransitGatewayRouteResponse();
    AWS_EC2_API CreateTransitGatewayRouteResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateTransitGatewayRouteResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the route.</p>
     */
    inline const TransitGatewayRoute& GetRoute() const{ return m_route; }

    /**
     * <p>Information about the route.</p>
     */
    inline void SetRoute(const TransitGatewayRoute& value) { m_route = value; }

    /**
     * <p>Information about the route.</p>
     */
    inline void SetRoute(TransitGatewayRoute&& value) { m_route = std::move(value); }

    /**
     * <p>Information about the route.</p>
     */
    inline CreateTransitGatewayRouteResponse& WithRoute(const TransitGatewayRoute& value) { SetRoute(value); return *this;}

    /**
     * <p>Information about the route.</p>
     */
    inline CreateTransitGatewayRouteResponse& WithRoute(TransitGatewayRoute&& value) { SetRoute(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateTransitGatewayRouteResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateTransitGatewayRouteResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayRoute m_route;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
