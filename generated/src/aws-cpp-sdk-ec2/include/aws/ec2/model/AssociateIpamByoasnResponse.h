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
    AWS_EC2_API AssociateIpamByoasnResponse();
    AWS_EC2_API AssociateIpamByoasnResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API AssociateIpamByoasnResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ASN and BYOIP CIDR association.</p>
     */
    inline const AsnAssociation& GetAsnAssociation() const{ return m_asnAssociation; }

    /**
     * <p>The ASN and BYOIP CIDR association.</p>
     */
    inline void SetAsnAssociation(const AsnAssociation& value) { m_asnAssociation = value; }

    /**
     * <p>The ASN and BYOIP CIDR association.</p>
     */
    inline void SetAsnAssociation(AsnAssociation&& value) { m_asnAssociation = std::move(value); }

    /**
     * <p>The ASN and BYOIP CIDR association.</p>
     */
    inline AssociateIpamByoasnResponse& WithAsnAssociation(const AsnAssociation& value) { SetAsnAssociation(value); return *this;}

    /**
     * <p>The ASN and BYOIP CIDR association.</p>
     */
    inline AssociateIpamByoasnResponse& WithAsnAssociation(AsnAssociation&& value) { SetAsnAssociation(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateIpamByoasnResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateIpamByoasnResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    AsnAssociation m_asnAssociation;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
