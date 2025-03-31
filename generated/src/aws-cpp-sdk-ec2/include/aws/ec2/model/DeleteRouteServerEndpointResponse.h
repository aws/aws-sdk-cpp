/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/RouteServerEndpoint.h>
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
  class DeleteRouteServerEndpointResponse
  {
  public:
    AWS_EC2_API DeleteRouteServerEndpointResponse() = default;
    AWS_EC2_API DeleteRouteServerEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteRouteServerEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deleted route server endpoint.</p>
     */
    inline const RouteServerEndpoint& GetRouteServerEndpoint() const { return m_routeServerEndpoint; }
    template<typename RouteServerEndpointT = RouteServerEndpoint>
    void SetRouteServerEndpoint(RouteServerEndpointT&& value) { m_routeServerEndpointHasBeenSet = true; m_routeServerEndpoint = std::forward<RouteServerEndpointT>(value); }
    template<typename RouteServerEndpointT = RouteServerEndpoint>
    DeleteRouteServerEndpointResponse& WithRouteServerEndpoint(RouteServerEndpointT&& value) { SetRouteServerEndpoint(std::forward<RouteServerEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteRouteServerEndpointResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    RouteServerEndpoint m_routeServerEndpoint;
    bool m_routeServerEndpointHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
