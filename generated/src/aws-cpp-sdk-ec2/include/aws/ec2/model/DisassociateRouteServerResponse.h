/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/RouteServerAssociation.h>
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
  class DisassociateRouteServerResponse
  {
  public:
    AWS_EC2_API DisassociateRouteServerResponse() = default;
    AWS_EC2_API DisassociateRouteServerResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateRouteServerResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the disassociated route server.</p>
     */
    inline const RouteServerAssociation& GetRouteServerAssociation() const { return m_routeServerAssociation; }
    template<typename RouteServerAssociationT = RouteServerAssociation>
    void SetRouteServerAssociation(RouteServerAssociationT&& value) { m_routeServerAssociationHasBeenSet = true; m_routeServerAssociation = std::forward<RouteServerAssociationT>(value); }
    template<typename RouteServerAssociationT = RouteServerAssociation>
    DisassociateRouteServerResponse& WithRouteServerAssociation(RouteServerAssociationT&& value) { SetRouteServerAssociation(std::forward<RouteServerAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisassociateRouteServerResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    RouteServerAssociation m_routeServerAssociation;
    bool m_routeServerAssociationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
