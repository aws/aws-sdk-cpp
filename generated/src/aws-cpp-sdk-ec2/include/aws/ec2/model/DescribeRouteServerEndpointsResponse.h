/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/RouteServerEndpoint.h>
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
  class DescribeRouteServerEndpointsResponse
  {
  public:
    AWS_EC2_API DescribeRouteServerEndpointsResponse() = default;
    AWS_EC2_API DescribeRouteServerEndpointsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeRouteServerEndpointsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the described route server endpoints.</p>
     */
    inline const Aws::Vector<RouteServerEndpoint>& GetRouteServerEndpoints() const { return m_routeServerEndpoints; }
    template<typename RouteServerEndpointsT = Aws::Vector<RouteServerEndpoint>>
    void SetRouteServerEndpoints(RouteServerEndpointsT&& value) { m_routeServerEndpointsHasBeenSet = true; m_routeServerEndpoints = std::forward<RouteServerEndpointsT>(value); }
    template<typename RouteServerEndpointsT = Aws::Vector<RouteServerEndpoint>>
    DescribeRouteServerEndpointsResponse& WithRouteServerEndpoints(RouteServerEndpointsT&& value) { SetRouteServerEndpoints(std::forward<RouteServerEndpointsT>(value)); return *this;}
    template<typename RouteServerEndpointsT = RouteServerEndpoint>
    DescribeRouteServerEndpointsResponse& AddRouteServerEndpoints(RouteServerEndpointsT&& value) { m_routeServerEndpointsHasBeenSet = true; m_routeServerEndpoints.emplace_back(std::forward<RouteServerEndpointsT>(value)); return *this; }
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
    DescribeRouteServerEndpointsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeRouteServerEndpointsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RouteServerEndpoint> m_routeServerEndpoints;
    bool m_routeServerEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
