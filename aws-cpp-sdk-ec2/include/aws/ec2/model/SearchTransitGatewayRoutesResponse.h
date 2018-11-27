/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API SearchTransitGatewayRoutesResponse
  {
  public:
    SearchTransitGatewayRoutesResponse();
    SearchTransitGatewayRoutesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    SearchTransitGatewayRoutesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
