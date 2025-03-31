/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/RouteServerAssociation.h>
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
  class GetRouteServerAssociationsResponse
  {
  public:
    AWS_EC2_API GetRouteServerAssociationsResponse() = default;
    AWS_EC2_API GetRouteServerAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetRouteServerAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the associations for the specified route server.</p>
     */
    inline const Aws::Vector<RouteServerAssociation>& GetRouteServerAssociations() const { return m_routeServerAssociations; }
    template<typename RouteServerAssociationsT = Aws::Vector<RouteServerAssociation>>
    void SetRouteServerAssociations(RouteServerAssociationsT&& value) { m_routeServerAssociationsHasBeenSet = true; m_routeServerAssociations = std::forward<RouteServerAssociationsT>(value); }
    template<typename RouteServerAssociationsT = Aws::Vector<RouteServerAssociation>>
    GetRouteServerAssociationsResponse& WithRouteServerAssociations(RouteServerAssociationsT&& value) { SetRouteServerAssociations(std::forward<RouteServerAssociationsT>(value)); return *this;}
    template<typename RouteServerAssociationsT = RouteServerAssociation>
    GetRouteServerAssociationsResponse& AddRouteServerAssociations(RouteServerAssociationsT&& value) { m_routeServerAssociationsHasBeenSet = true; m_routeServerAssociations.emplace_back(std::forward<RouteServerAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetRouteServerAssociationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<RouteServerAssociation> m_routeServerAssociations;
    bool m_routeServerAssociationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
