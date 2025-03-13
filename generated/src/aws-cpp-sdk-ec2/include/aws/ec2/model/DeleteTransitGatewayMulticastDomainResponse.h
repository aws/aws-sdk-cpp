/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastDomain.h>
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
  class DeleteTransitGatewayMulticastDomainResponse
  {
  public:
    AWS_EC2_API DeleteTransitGatewayMulticastDomainResponse() = default;
    AWS_EC2_API DeleteTransitGatewayMulticastDomainResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTransitGatewayMulticastDomainResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the deleted transit gateway multicast domain.</p>
     */
    inline const TransitGatewayMulticastDomain& GetTransitGatewayMulticastDomain() const { return m_transitGatewayMulticastDomain; }
    template<typename TransitGatewayMulticastDomainT = TransitGatewayMulticastDomain>
    void SetTransitGatewayMulticastDomain(TransitGatewayMulticastDomainT&& value) { m_transitGatewayMulticastDomainHasBeenSet = true; m_transitGatewayMulticastDomain = std::forward<TransitGatewayMulticastDomainT>(value); }
    template<typename TransitGatewayMulticastDomainT = TransitGatewayMulticastDomain>
    DeleteTransitGatewayMulticastDomainResponse& WithTransitGatewayMulticastDomain(TransitGatewayMulticastDomainT&& value) { SetTransitGatewayMulticastDomain(std::forward<TransitGatewayMulticastDomainT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteTransitGatewayMulticastDomainResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayMulticastDomain m_transitGatewayMulticastDomain;
    bool m_transitGatewayMulticastDomainHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
