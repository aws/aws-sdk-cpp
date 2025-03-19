/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastDomainAssociations.h>
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
  class AcceptTransitGatewayMulticastDomainAssociationsResponse
  {
  public:
    AWS_EC2_API AcceptTransitGatewayMulticastDomainAssociationsResponse() = default;
    AWS_EC2_API AcceptTransitGatewayMulticastDomainAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AcceptTransitGatewayMulticastDomainAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the multicast domain associations.</p>
     */
    inline const TransitGatewayMulticastDomainAssociations& GetAssociations() const { return m_associations; }
    template<typename AssociationsT = TransitGatewayMulticastDomainAssociations>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = TransitGatewayMulticastDomainAssociations>
    AcceptTransitGatewayMulticastDomainAssociationsResponse& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AcceptTransitGatewayMulticastDomainAssociationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayMulticastDomainAssociations m_associations;
    bool m_associationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
