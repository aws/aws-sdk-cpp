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
  class DisassociateIpamByoasnResponse
  {
  public:
    AWS_EC2_API DisassociateIpamByoasnResponse();
    AWS_EC2_API DisassociateIpamByoasnResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DisassociateIpamByoasnResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline const AsnAssociation& GetAsnAssociation() const{ return m_asnAssociation; }

    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline void SetAsnAssociation(const AsnAssociation& value) { m_asnAssociation = value; }

    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline void SetAsnAssociation(AsnAssociation&& value) { m_asnAssociation = std::move(value); }

    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline DisassociateIpamByoasnResponse& WithAsnAssociation(const AsnAssociation& value) { SetAsnAssociation(value); return *this;}

    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline DisassociateIpamByoasnResponse& WithAsnAssociation(AsnAssociation&& value) { SetAsnAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DisassociateIpamByoasnResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DisassociateIpamByoasnResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    AsnAssociation m_asnAssociation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
