/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/RouteServerPropagation.h>
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
  class GetRouteServerPropagationsResponse
  {
  public:
    AWS_EC2_API GetRouteServerPropagationsResponse() = default;
    AWS_EC2_API GetRouteServerPropagationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetRouteServerPropagationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the route propagations for the specified route server.</p>
     */
    inline const Aws::Vector<RouteServerPropagation>& GetRouteServerPropagations() const { return m_routeServerPropagations; }
    template<typename RouteServerPropagationsT = Aws::Vector<RouteServerPropagation>>
    void SetRouteServerPropagations(RouteServerPropagationsT&& value) { m_routeServerPropagationsHasBeenSet = true; m_routeServerPropagations = std::forward<RouteServerPropagationsT>(value); }
    template<typename RouteServerPropagationsT = Aws::Vector<RouteServerPropagation>>
    GetRouteServerPropagationsResponse& WithRouteServerPropagations(RouteServerPropagationsT&& value) { SetRouteServerPropagations(std::forward<RouteServerPropagationsT>(value)); return *this;}
    template<typename RouteServerPropagationsT = RouteServerPropagation>
    GetRouteServerPropagationsResponse& AddRouteServerPropagations(RouteServerPropagationsT&& value) { m_routeServerPropagationsHasBeenSet = true; m_routeServerPropagations.emplace_back(std::forward<RouteServerPropagationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetRouteServerPropagationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RouteServerPropagation> m_routeServerPropagations;
    bool m_routeServerPropagationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
