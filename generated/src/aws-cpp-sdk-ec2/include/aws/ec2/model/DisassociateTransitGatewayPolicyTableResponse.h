/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayPolicyTableAssociation.h>
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
  class DisassociateTransitGatewayPolicyTableResponse
  {
  public:
    AWS_EC2_API DisassociateTransitGatewayPolicyTableResponse() = default;
    AWS_EC2_API DisassociateTransitGatewayPolicyTableResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateTransitGatewayPolicyTableResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Returns details about the transit gateway policy table disassociation.</p>
     */
    inline const TransitGatewayPolicyTableAssociation& GetAssociation() const { return m_association; }
    template<typename AssociationT = TransitGatewayPolicyTableAssociation>
    void SetAssociation(AssociationT&& value) { m_associationHasBeenSet = true; m_association = std::forward<AssociationT>(value); }
    template<typename AssociationT = TransitGatewayPolicyTableAssociation>
    DisassociateTransitGatewayPolicyTableResponse& WithAssociation(AssociationT&& value) { SetAssociation(std::forward<AssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisassociateTransitGatewayPolicyTableResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TransitGatewayPolicyTableAssociation m_association;
    bool m_associationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
