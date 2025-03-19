/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/AsnAssociation.h>
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
  class AssociateIpamByoasnResponse
  {
  public:
    AWS_EC2_API AssociateIpamByoasnResponse() = default;
    AWS_EC2_API AssociateIpamByoasnResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateIpamByoasnResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ASN and BYOIP CIDR association.</p>
     */
    inline const AsnAssociation& GetAsnAssociation() const { return m_asnAssociation; }
    template<typename AsnAssociationT = AsnAssociation>
    void SetAsnAssociation(AsnAssociationT&& value) { m_asnAssociationHasBeenSet = true; m_asnAssociation = std::forward<AsnAssociationT>(value); }
    template<typename AsnAssociationT = AsnAssociation>
    AssociateIpamByoasnResponse& WithAsnAssociation(AsnAssociationT&& value) { SetAsnAssociation(std::forward<AsnAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    AssociateIpamByoasnResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    AsnAssociation m_asnAssociation;
    bool m_asnAssociationHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
