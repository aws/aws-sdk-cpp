/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayRoute.h>
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
  class SearchTransitGatewayRoutesResponse
  {
  public:
    AWS_EC2_API SearchTransitGatewayRoutesResponse();
    AWS_EC2_API SearchTransitGatewayRoutesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API SearchTransitGatewayRoutesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the routes.</p>
     */
    inline const Aws::Vector<TransitGatewayRoute>& GetRoutes() const{ return m_routes; }

    /**
     * <p>Information about the routes.</p>
     */
    inline void SetRoutes(const Aws::Vector<TransitGatewayRoute>& value) { m_routes = value; }

    /**
     * <p>Information about the routes.</p>
     */
    inline void SetRoutes(Aws::Vector<TransitGatewayRoute>&& value) { m_routes = std::move(value); }

    /**
     * <p>Information about the routes.</p>
     */
    inline SearchTransitGatewayRoutesResponse& WithRoutes(const Aws::Vector<TransitGatewayRoute>& value) { SetRoutes(value); return *this;}

    /**
     * <p>Information about the routes.</p>
     */
    inline SearchTransitGatewayRoutesResponse& WithRoutes(Aws::Vector<TransitGatewayRoute>&& value) { SetRoutes(std::move(value)); return *this;}

    /**
     * <p>Information about the routes.</p>
     */
    inline SearchTransitGatewayRoutesResponse& AddRoutes(const TransitGatewayRoute& value) { m_routes.push_back(value); return *this; }

    /**
     * <p>Information about the routes.</p>
     */
    inline SearchTransitGatewayRoutesResponse& AddRoutes(TransitGatewayRoute&& value) { m_routes.push_back(std::move(value)); return *this; }


    /**
     * <p>Indicates whether there are additional routes available.</p>
     */
    inline bool GetAdditionalRoutesAvailable() const{ return m_additionalRoutesAvailable; }

    /**
     * <p>Indicates whether there are additional routes available.</p>
     */
    inline void SetAdditionalRoutesAvailable(bool value) { m_additionalRoutesAvailable = value; }

    /**
     * <p>Indicates whether there are additional routes available.</p>
     */
    inline SearchTransitGatewayRoutesResponse& WithAdditionalRoutesAvailable(bool value) { SetAdditionalRoutesAvailable(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline SearchTransitGatewayRoutesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline SearchTransitGatewayRoutesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<TransitGatewayRoute> m_routes;

    bool m_additionalRoutesAvailable;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
