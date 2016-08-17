/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * to complete domain verification with Amazon SES.</p>
   */
  class AWS_SES_API VerifyDomainIdentityResult
  {
  public:
    VerifyDomainIdentityResult();
    VerifyDomainIdentityResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    VerifyDomainIdentityResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A TXT record that must be placed in the DNS settings for the domain, in order
     * to complete domain verification.</p>
     */
    inline const Aws::String& GetVerificationToken() const{ return m_verificationToken; }

    /**
     * <p>A TXT record that must be placed in the DNS settings for the domain, in order
     * to complete domain verification.</p>
     */
    inline void SetVerificationToken(const Aws::String& value) { m_verificationToken = value; }

    /**
     * <p>A TXT record that must be placed in the DNS settings for the domain, in order
     * to complete domain verification.</p>
     */
    inline void SetVerificationToken(Aws::String&& value) { m_verificationToken = value; }

    /**
     * <p>A TXT record that must be placed in the DNS settings for the domain, in order
     * to complete domain verification.</p>
     */
    inline void SetVerificationToken(const char* value) { m_verificationToken.assign(value); }

    /**
     * <p>A TXT record that must be placed in the DNS settings for the domain, in order
     * to complete domain verification.</p>
     */
    inline VerifyDomainIdentityResult& WithVerificationToken(const Aws::String& value) { SetVerificationToken(value); return *this;}

    /**
     * <p>A TXT record that must be placed in the DNS settings for the domain, in order
     * to complete domain verification.</p>
     */
    inline VerifyDomainIdentityResult& WithVerificationToken(Aws::String&& value) { SetVerificationToken(value); return *this;}

    /**
     * <p>A TXT record that must be placed in the DNS settings for the domain, in order
     * to complete domain verification.</p>
     */
    inline VerifyDomainIdentityResult& WithVerificationToken(const char* value) { SetVerificationToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline VerifyDomainIdentityResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline VerifyDomainIdentityResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_verificationToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws