/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SES_API VerifyDomainIdentityResult
  {
  public:
    VerifyDomainIdentityResult();
    VerifyDomainIdentityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    VerifyDomainIdentityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A TXT record that you must place in the DNS settings of the domain to
     * complete domain verification with Amazon SES.</p> <p>As Amazon SES searches for
     * the TXT record, the domain's verification status is "Pending". When Amazon SES
     * detects the record, the domain's verification status changes to "Success". If
     * Amazon SES is unable to detect the record within 72 hours, the domain's
     * verification status changes to "Failed." In that case, if you still want to
     * verify the domain, you must restart the verification process from the
     * beginning.</p>
     */
    inline const Aws::String& GetVerificationToken() const{ return m_verificationToken; }

    /**
     * <p>A TXT record that you must place in the DNS settings of the domain to
     * complete domain verification with Amazon SES.</p> <p>As Amazon SES searches for
     * the TXT record, the domain's verification status is "Pending". When Amazon SES
     * detects the record, the domain's verification status changes to "Success". If
     * Amazon SES is unable to detect the record within 72 hours, the domain's
     * verification status changes to "Failed." In that case, if you still want to
     * verify the domain, you must restart the verification process from the
     * beginning.</p>
     */
    inline void SetVerificationToken(const Aws::String& value) { m_verificationToken = value; }

    /**
     * <p>A TXT record that you must place in the DNS settings of the domain to
     * complete domain verification with Amazon SES.</p> <p>As Amazon SES searches for
     * the TXT record, the domain's verification status is "Pending". When Amazon SES
     * detects the record, the domain's verification status changes to "Success". If
     * Amazon SES is unable to detect the record within 72 hours, the domain's
     * verification status changes to "Failed." In that case, if you still want to
     * verify the domain, you must restart the verification process from the
     * beginning.</p>
     */
    inline void SetVerificationToken(Aws::String&& value) { m_verificationToken = std::move(value); }

    /**
     * <p>A TXT record that you must place in the DNS settings of the domain to
     * complete domain verification with Amazon SES.</p> <p>As Amazon SES searches for
     * the TXT record, the domain's verification status is "Pending". When Amazon SES
     * detects the record, the domain's verification status changes to "Success". If
     * Amazon SES is unable to detect the record within 72 hours, the domain's
     * verification status changes to "Failed." In that case, if you still want to
     * verify the domain, you must restart the verification process from the
     * beginning.</p>
     */
    inline void SetVerificationToken(const char* value) { m_verificationToken.assign(value); }

    /**
     * <p>A TXT record that you must place in the DNS settings of the domain to
     * complete domain verification with Amazon SES.</p> <p>As Amazon SES searches for
     * the TXT record, the domain's verification status is "Pending". When Amazon SES
     * detects the record, the domain's verification status changes to "Success". If
     * Amazon SES is unable to detect the record within 72 hours, the domain's
     * verification status changes to "Failed." In that case, if you still want to
     * verify the domain, you must restart the verification process from the
     * beginning.</p>
     */
    inline VerifyDomainIdentityResult& WithVerificationToken(const Aws::String& value) { SetVerificationToken(value); return *this;}

    /**
     * <p>A TXT record that you must place in the DNS settings of the domain to
     * complete domain verification with Amazon SES.</p> <p>As Amazon SES searches for
     * the TXT record, the domain's verification status is "Pending". When Amazon SES
     * detects the record, the domain's verification status changes to "Success". If
     * Amazon SES is unable to detect the record within 72 hours, the domain's
     * verification status changes to "Failed." In that case, if you still want to
     * verify the domain, you must restart the verification process from the
     * beginning.</p>
     */
    inline VerifyDomainIdentityResult& WithVerificationToken(Aws::String&& value) { SetVerificationToken(std::move(value)); return *this;}

    /**
     * <p>A TXT record that you must place in the DNS settings of the domain to
     * complete domain verification with Amazon SES.</p> <p>As Amazon SES searches for
     * the TXT record, the domain's verification status is "Pending". When Amazon SES
     * detects the record, the domain's verification status changes to "Success". If
     * Amazon SES is unable to detect the record within 72 hours, the domain's
     * verification status changes to "Failed." In that case, if you still want to
     * verify the domain, you must restart the verification process from the
     * beginning.</p>
     */
    inline VerifyDomainIdentityResult& WithVerificationToken(const char* value) { SetVerificationToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline VerifyDomainIdentityResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline VerifyDomainIdentityResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_verificationToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
