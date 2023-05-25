/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/LocalGatewayRoute.h>
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
  class CreateLocalGatewayRouteResponse
  {
  public:
    AWS_EC2_API CreateLocalGatewayRouteResponse();
    AWS_EC2_API CreateLocalGatewayRouteResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateLocalGatewayRouteResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the route.</p>
     */
    inline const LocalGatewayRoute& GetRoute() const{ return m_route; }

    /**
     * <p>Information about the route.</p>
     */
    inline void SetRoute(const LocalGatewayRoute& value) { m_route = value; }

    /**
     * <p>Information about the route.</p>
     */
    inline void SetRoute(LocalGatewayRoute&& value) { m_route = std::move(value); }

    /**
     * <p>Information about the route.</p>
     */
    inline CreateLocalGatewayRouteResponse& WithRoute(const LocalGatewayRoute& value) { SetRoute(value); return *this;}

    /**
     * <p>Information about the route.</p>
     */
    inline CreateLocalGatewayRouteResponse& WithRoute(LocalGatewayRoute&& value) { SetRoute(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateLocalGatewayRouteResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateLocalGatewayRouteResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    LocalGatewayRoute m_route;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
