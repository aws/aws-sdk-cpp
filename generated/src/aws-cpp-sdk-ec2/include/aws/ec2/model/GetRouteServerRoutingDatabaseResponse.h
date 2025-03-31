/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/RouteServerRoute.h>
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
  class GetRouteServerRoutingDatabaseResponse
  {
  public:
    AWS_EC2_API GetRouteServerRoutingDatabaseResponse() = default;
    AWS_EC2_API GetRouteServerRoutingDatabaseResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetRouteServerRoutingDatabaseResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Indicates whether routes are being persisted in the routing database.</p>
     */
    inline bool GetAreRoutesPersisted() const { return m_areRoutesPersisted; }
    inline void SetAreRoutesPersisted(bool value) { m_areRoutesPersistedHasBeenSet = true; m_areRoutesPersisted = value; }
    inline GetRouteServerRoutingDatabaseResponse& WithAreRoutesPersisted(bool value) { SetAreRoutesPersisted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The collection of routes in the route server's routing database.</p>
     */
    inline const Aws::Vector<RouteServerRoute>& GetRoutes() const { return m_routes; }
    template<typename RoutesT = Aws::Vector<RouteServerRoute>>
    void SetRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes = std::forward<RoutesT>(value); }
    template<typename RoutesT = Aws::Vector<RouteServerRoute>>
    GetRouteServerRoutingDatabaseResponse& WithRoutes(RoutesT&& value) { SetRoutes(std::forward<RoutesT>(value)); return *this;}
    template<typename RoutesT = RouteServerRoute>
    GetRouteServerRoutingDatabaseResponse& AddRoutes(RoutesT&& value) { m_routesHasBeenSet = true; m_routes.emplace_back(std::forward<RoutesT>(value)); return *this; }
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
    GetRouteServerRoutingDatabaseResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetRouteServerRoutingDatabaseResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    bool m_areRoutesPersisted{false};
    bool m_areRoutesPersistedHasBeenSet = false;

    Aws::Vector<RouteServerRoute> m_routes;
    bool m_routesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
