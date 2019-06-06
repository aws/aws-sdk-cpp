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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/email/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Returns CNAME records that you must publish to the DNS server of your domain
   * to set up Easy DKIM with Amazon SES.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/VerifyDomainDkimResponse">AWS
   * API Reference</a></p>
   */
  class AWS_SES_API VerifyDomainDkimResult
  {
  public:
    VerifyDomainDkimResult();
    VerifyDomainDkimResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    VerifyDomainDkimResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A set of character strings that represent the domain's identity. If the
     * identity is an email address, the tokens represent the domain of that
     * address.</p> <p>Using these tokens, you need to create DNS CNAME records that
     * point to DKIM public keys that are hosted by Amazon SES. Amazon Web Services
     * eventually detects that you've updated your DNS records. This detection process
     * might take up to 72 hours. After successful detection, Amazon SES is able to
     * DKIM-sign email originating from that domain. (This only applies to domain
     * identities, not email address identities.)</p> <p>For more information about
     * creating DNS records using DKIM tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDkimTokens() const{ return m_dkimTokens; }

    /**
     * <p>A set of character strings that represent the domain's identity. If the
     * identity is an email address, the tokens represent the domain of that
     * address.</p> <p>Using these tokens, you need to create DNS CNAME records that
     * point to DKIM public keys that are hosted by Amazon SES. Amazon Web Services
     * eventually detects that you've updated your DNS records. This detection process
     * might take up to 72 hours. After successful detection, Amazon SES is able to
     * DKIM-sign email originating from that domain. (This only applies to domain
     * identities, not email address identities.)</p> <p>For more information about
     * creating DNS records using DKIM tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetDkimTokens(const Aws::Vector<Aws::String>& value) { m_dkimTokens = value; }

    /**
     * <p>A set of character strings that represent the domain's identity. If the
     * identity is an email address, the tokens represent the domain of that
     * address.</p> <p>Using these tokens, you need to create DNS CNAME records that
     * point to DKIM public keys that are hosted by Amazon SES. Amazon Web Services
     * eventually detects that you've updated your DNS records. This detection process
     * might take up to 72 hours. After successful detection, Amazon SES is able to
     * DKIM-sign email originating from that domain. (This only applies to domain
     * identities, not email address identities.)</p> <p>For more information about
     * creating DNS records using DKIM tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetDkimTokens(Aws::Vector<Aws::String>&& value) { m_dkimTokens = std::move(value); }

    /**
     * <p>A set of character strings that represent the domain's identity. If the
     * identity is an email address, the tokens represent the domain of that
     * address.</p> <p>Using these tokens, you need to create DNS CNAME records that
     * point to DKIM public keys that are hosted by Amazon SES. Amazon Web Services
     * eventually detects that you've updated your DNS records. This detection process
     * might take up to 72 hours. After successful detection, Amazon SES is able to
     * DKIM-sign email originating from that domain. (This only applies to domain
     * identities, not email address identities.)</p> <p>For more information about
     * creating DNS records using DKIM tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline VerifyDomainDkimResult& WithDkimTokens(const Aws::Vector<Aws::String>& value) { SetDkimTokens(value); return *this;}

    /**
     * <p>A set of character strings that represent the domain's identity. If the
     * identity is an email address, the tokens represent the domain of that
     * address.</p> <p>Using these tokens, you need to create DNS CNAME records that
     * point to DKIM public keys that are hosted by Amazon SES. Amazon Web Services
     * eventually detects that you've updated your DNS records. This detection process
     * might take up to 72 hours. After successful detection, Amazon SES is able to
     * DKIM-sign email originating from that domain. (This only applies to domain
     * identities, not email address identities.)</p> <p>For more information about
     * creating DNS records using DKIM tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline VerifyDomainDkimResult& WithDkimTokens(Aws::Vector<Aws::String>&& value) { SetDkimTokens(std::move(value)); return *this;}

    /**
     * <p>A set of character strings that represent the domain's identity. If the
     * identity is an email address, the tokens represent the domain of that
     * address.</p> <p>Using these tokens, you need to create DNS CNAME records that
     * point to DKIM public keys that are hosted by Amazon SES. Amazon Web Services
     * eventually detects that you've updated your DNS records. This detection process
     * might take up to 72 hours. After successful detection, Amazon SES is able to
     * DKIM-sign email originating from that domain. (This only applies to domain
     * identities, not email address identities.)</p> <p>For more information about
     * creating DNS records using DKIM tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline VerifyDomainDkimResult& AddDkimTokens(const Aws::String& value) { m_dkimTokens.push_back(value); return *this; }

    /**
     * <p>A set of character strings that represent the domain's identity. If the
     * identity is an email address, the tokens represent the domain of that
     * address.</p> <p>Using these tokens, you need to create DNS CNAME records that
     * point to DKIM public keys that are hosted by Amazon SES. Amazon Web Services
     * eventually detects that you've updated your DNS records. This detection process
     * might take up to 72 hours. After successful detection, Amazon SES is able to
     * DKIM-sign email originating from that domain. (This only applies to domain
     * identities, not email address identities.)</p> <p>For more information about
     * creating DNS records using DKIM tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline VerifyDomainDkimResult& AddDkimTokens(Aws::String&& value) { m_dkimTokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A set of character strings that represent the domain's identity. If the
     * identity is an email address, the tokens represent the domain of that
     * address.</p> <p>Using these tokens, you need to create DNS CNAME records that
     * point to DKIM public keys that are hosted by Amazon SES. Amazon Web Services
     * eventually detects that you've updated your DNS records. This detection process
     * might take up to 72 hours. After successful detection, Amazon SES is able to
     * DKIM-sign email originating from that domain. (This only applies to domain
     * identities, not email address identities.)</p> <p>For more information about
     * creating DNS records using DKIM tokens, see the <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline VerifyDomainDkimResult& AddDkimTokens(const char* value) { m_dkimTokens.push_back(value); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline VerifyDomainDkimResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline VerifyDomainDkimResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Aws::String> m_dkimTokens;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
