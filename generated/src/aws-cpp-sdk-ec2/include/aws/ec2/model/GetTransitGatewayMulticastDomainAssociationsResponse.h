/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/TransitGatewayMulticastDomainAssociation.h>
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
  class GetTransitGatewayMulticastDomainAssociationsResponse
  {
  public:
    AWS_EC2_API GetTransitGatewayMulticastDomainAssociationsResponse() = default;
    AWS_EC2_API GetTransitGatewayMulticastDomainAssociationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetTransitGatewayMulticastDomainAssociationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the multicast domain associations.</p>
     */
    inline const Aws::Vector<TransitGatewayMulticastDomainAssociation>& GetMulticastDomainAssociations() const { return m_multicastDomainAssociations; }
    template<typename MulticastDomainAssociationsT = Aws::Vector<TransitGatewayMulticastDomainAssociation>>
    void SetMulticastDomainAssociations(MulticastDomainAssociationsT&& value) { m_multicastDomainAssociationsHasBeenSet = true; m_multicastDomainAssociations = std::forward<MulticastDomainAssociationsT>(value); }
    template<typename MulticastDomainAssociationsT = Aws::Vector<TransitGatewayMulticastDomainAssociation>>
    GetTransitGatewayMulticastDomainAssociationsResponse& WithMulticastDomainAssociations(MulticastDomainAssociationsT&& value) { SetMulticastDomainAssociations(std::forward<MulticastDomainAssociationsT>(value)); return *this;}
    template<typename MulticastDomainAssociationsT = TransitGatewayMulticastDomainAssociation>
    GetTransitGatewayMulticastDomainAssociationsResponse& AddMulticastDomainAssociations(MulticastDomainAssociationsT&& value) { m_multicastDomainAssociationsHasBeenSet = true; m_multicastDomainAssociations.emplace_back(std::forward<MulticastDomainAssociationsT>(value)); return *this; }
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
    GetTransitGatewayMulticastDomainAssociationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetTransitGatewayMulticastDomainAssociationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TransitGatewayMulticastDomainAssociation> m_multicastDomainAssociations;
    bool m_multicastDomainAssociationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
