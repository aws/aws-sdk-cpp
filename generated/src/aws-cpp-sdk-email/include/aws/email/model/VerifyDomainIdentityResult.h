/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/email/model/ResponseMetadata.h>
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
namespace SES
{
namespace Model
{
  /**
   * <p>Returns a TXT record that you must publish to the DNS server of your domain
   * to complete domain verification with Amazon SES.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainIdentityResponse">AWS
   * API Reference</a></p>
   */
  class VerifyDomainIdentityResult
  {
  public:
    AWS_SES_API VerifyDomainIdentityResult() = default;
    AWS_SES_API VerifyDomainIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SES_API VerifyDomainIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A TXT record that you must place in the DNS settings of the domain to
     * complete domain verification with Amazon SES.</p> <p>As Amazon SES searches for
     * the TXT record, the domain's verification status is "Pending". When Amazon SES
     * detects the record, the domain's verification status changes to "Success". If
     * Amazon SES is unable to detect the record within 72 hours, the domain's
     * verification status changes to "Failed." In that case, to verify the domain, you
     * must restart the verification process from the beginning. The domain's
     * verification status also changes to "Success" when it is DKIM verified.</p>
     */
    inline const Aws::String& GetVerificationToken() const { return m_verificationToken; }
    template<typename VerificationTokenT = Aws::String>
    void SetVerificationToken(VerificationTokenT&& value) { m_verificationTokenHasBeenSet = true; m_verificationToken = std::forward<VerificationTokenT>(value); }
    template<typename VerificationTokenT = Aws::String>
    VerifyDomainIdentityResult& WithVerificationToken(VerificationTokenT&& value) { SetVerificationToken(std::forward<VerificationTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    VerifyDomainIdentityResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_verificationToken;
    bool m_verificationTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
