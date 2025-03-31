/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/RouteServerPeer.h>
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
  class DeleteRouteServerPeerResponse
  {
  public:
    AWS_EC2_API DeleteRouteServerPeerResponse() = default;
    AWS_EC2_API DeleteRouteServerPeerResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteRouteServerPeerResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deleted route server peer.</p>
     */
    inline const RouteServerPeer& GetRouteServerPeer() const { return m_routeServerPeer; }
    template<typename RouteServerPeerT = RouteServerPeer>
    void SetRouteServerPeer(RouteServerPeerT&& value) { m_routeServerPeerHasBeenSet = true; m_routeServerPeer = std::forward<RouteServerPeerT>(value); }
    template<typename RouteServerPeerT = RouteServerPeer>
    DeleteRouteServerPeerResponse& WithRouteServerPeer(RouteServerPeerT&& value) { SetRouteServerPeer(std::forward<RouteServerPeerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteRouteServerPeerResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    RouteServerPeer m_routeServerPeer;
    bool m_routeServerPeerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
