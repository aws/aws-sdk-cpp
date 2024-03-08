/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Byoasn.h>
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
  class ProvisionIpamByoasnResponse
  {
  public:
    AWS_EC2_API ProvisionIpamByoasnResponse();
    AWS_EC2_API ProvisionIpamByoasnResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ProvisionIpamByoasnResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline const Byoasn& GetByoasn() const{ return m_byoasn; }

    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline void SetByoasn(const Byoasn& value) { m_byoasn = value; }

    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline void SetByoasn(Byoasn&& value) { m_byoasn = std::move(value); }

    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline ProvisionIpamByoasnResponse& WithByoasn(const Byoasn& value) { SetByoasn(value); return *this;}

    /**
     * <p>An ASN and BYOIP CIDR association.</p>
     */
    inline ProvisionIpamByoasnResponse& WithByoasn(Byoasn&& value) { SetByoasn(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ProvisionIpamByoasnResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ProvisionIpamByoasnResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Byoasn m_byoasn;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
