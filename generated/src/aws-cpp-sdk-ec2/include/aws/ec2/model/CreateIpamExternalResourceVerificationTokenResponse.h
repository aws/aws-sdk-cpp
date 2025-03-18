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
    AWS_EC2_API CreateIpamExternalResourceVerificationTokenResponse() = default;
    AWS_EC2_API CreateIpamExternalResourceVerificationTokenResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateIpamExternalResourceVerificationTokenResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The verification token.</p>
     */
    inline const IpamExternalResourceVerificationToken& GetIpamExternalResourceVerificationToken() const { return m_ipamExternalResourceVerificationToken; }
    template<typename IpamExternalResourceVerificationTokenT = IpamExternalResourceVerificationToken>
    void SetIpamExternalResourceVerificationToken(IpamExternalResourceVerificationTokenT&& value) { m_ipamExternalResourceVerificationTokenHasBeenSet = true; m_ipamExternalResourceVerificationToken = std::forward<IpamExternalResourceVerificationTokenT>(value); }
    template<typename IpamExternalResourceVerificationTokenT = IpamExternalResourceVerificationToken>
    CreateIpamExternalResourceVerificationTokenResponse& WithIpamExternalResourceVerificationToken(IpamExternalResourceVerificationTokenT&& value) { SetIpamExternalResourceVerificationToken(std::forward<IpamExternalResourceVerificationTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateIpamExternalResourceVerificationTokenResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    IpamExternalResourceVerificationToken m_ipamExternalResourceVerificationToken;
    bool m_ipamExternalResourceVerificationTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
