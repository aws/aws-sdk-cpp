/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamExternalResourceVerificationToken.h>
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
  class CreateIpamExternalResourceVerificationTokenResponse
  {
  public:
    AWS_EC2_API CreateIpamExternalResourceVerificationTokenResponse();
    AWS_EC2_API CreateIpamExternalResourceVerificationTokenResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateIpamExternalResourceVerificationTokenResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The verification token.</p>
     */
    inline const IpamExternalResourceVerificationToken& GetIpamExternalResourceVerificationToken() const{ return m_ipamExternalResourceVerificationToken; }
    inline void SetIpamExternalResourceVerificationToken(const IpamExternalResourceVerificationToken& value) { m_ipamExternalResourceVerificationToken = value; }
    inline void SetIpamExternalResourceVerificationToken(IpamExternalResourceVerificationToken&& value) { m_ipamExternalResourceVerificationToken = std::move(value); }
    inline CreateIpamExternalResourceVerificationTokenResponse& WithIpamExternalResourceVerificationToken(const IpamExternalResourceVerificationToken& value) { SetIpamExternalResourceVerificationToken(value); return *this;}
    inline CreateIpamExternalResourceVerificationTokenResponse& WithIpamExternalResourceVerificationToken(IpamExternalResourceVerificationToken&& value) { SetIpamExternalResourceVerificationToken(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateIpamExternalResourceVerificationTokenResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateIpamExternalResourceVerificationTokenResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    IpamExternalResourceVerificationToken m_ipamExternalResourceVerificationToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
