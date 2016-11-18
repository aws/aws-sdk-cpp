﻿/*
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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/VerificationStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace SES
{
namespace Model
{

  /**
   * <p>Represents the DKIM attributes of a verified email address or a domain.</p>
   */
  class AWS_SES_API IdentityDkimAttributes
  {
  public:
    IdentityDkimAttributes();
    IdentityDkimAttributes(const Aws::Utils::Xml::XmlNode& xmlNode);
    IdentityDkimAttributes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>True if DKIM signing is enabled for email sent from the identity; false
     * otherwise. The default value is true.</p>
     */
    inline bool GetDkimEnabled() const{ return m_dkimEnabled; }

    /**
     * <p>True if DKIM signing is enabled for email sent from the identity; false
     * otherwise. The default value is true.</p>
     */
    inline void SetDkimEnabled(bool value) { m_dkimEnabledHasBeenSet = true; m_dkimEnabled = value; }

    /**
     * <p>True if DKIM signing is enabled for email sent from the identity; false
     * otherwise. The default value is true.</p>
     */
    inline IdentityDkimAttributes& WithDkimEnabled(bool value) { SetDkimEnabled(value); return *this;}

    /**
     * <p>Describes whether Amazon SES has successfully verified the DKIM DNS records
     * (tokens) published in the domain name's DNS. (This only applies to domain
     * identities, not email address identities.)</p>
     */
    inline const VerificationStatus& GetDkimVerificationStatus() const{ return m_dkimVerificationStatus; }

    /**
     * <p>Describes whether Amazon SES has successfully verified the DKIM DNS records
     * (tokens) published in the domain name's DNS. (This only applies to domain
     * identities, not email address identities.)</p>
     */
    inline void SetDkimVerificationStatus(const VerificationStatus& value) { m_dkimVerificationStatusHasBeenSet = true; m_dkimVerificationStatus = value; }

    /**
     * <p>Describes whether Amazon SES has successfully verified the DKIM DNS records
     * (tokens) published in the domain name's DNS. (This only applies to domain
     * identities, not email address identities.)</p>
     */
    inline void SetDkimVerificationStatus(VerificationStatus&& value) { m_dkimVerificationStatusHasBeenSet = true; m_dkimVerificationStatus = value; }

    /**
     * <p>Describes whether Amazon SES has successfully verified the DKIM DNS records
     * (tokens) published in the domain name's DNS. (This only applies to domain
     * identities, not email address identities.)</p>
     */
    inline IdentityDkimAttributes& WithDkimVerificationStatus(const VerificationStatus& value) { SetDkimVerificationStatus(value); return *this;}

    /**
     * <p>Describes whether Amazon SES has successfully verified the DKIM DNS records
     * (tokens) published in the domain name's DNS. (This only applies to domain
     * identities, not email address identities.)</p>
     */
    inline IdentityDkimAttributes& WithDkimVerificationStatus(VerificationStatus&& value) { SetDkimVerificationStatus(value); return *this;}

    /**
     * <p>A set of character strings that represent the domain's identity. Using these
     * tokens, you will need to create DNS CNAME records that point to DKIM public keys
     * hosted by Amazon SES. Amazon Web Services will eventually detect that you have
     * updated your DNS records; this detection process may take up to 72 hours. Upon
     * successful detection, Amazon SES will be able to DKIM-sign email originating
     * from that domain. (This only applies to domain identities, not email address
     * identities.)</p> <p>For more information about creating DNS records using DKIM
     * tokens, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDkimTokens() const{ return m_dkimTokens; }

    /**
     * <p>A set of character strings that represent the domain's identity. Using these
     * tokens, you will need to create DNS CNAME records that point to DKIM public keys
     * hosted by Amazon SES. Amazon Web Services will eventually detect that you have
     * updated your DNS records; this detection process may take up to 72 hours. Upon
     * successful detection, Amazon SES will be able to DKIM-sign email originating
     * from that domain. (This only applies to domain identities, not email address
     * identities.)</p> <p>For more information about creating DNS records using DKIM
     * tokens, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetDkimTokens(const Aws::Vector<Aws::String>& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens = value; }

    /**
     * <p>A set of character strings that represent the domain's identity. Using these
     * tokens, you will need to create DNS CNAME records that point to DKIM public keys
     * hosted by Amazon SES. Amazon Web Services will eventually detect that you have
     * updated your DNS records; this detection process may take up to 72 hours. Upon
     * successful detection, Amazon SES will be able to DKIM-sign email originating
     * from that domain. (This only applies to domain identities, not email address
     * identities.)</p> <p>For more information about creating DNS records using DKIM
     * tokens, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline void SetDkimTokens(Aws::Vector<Aws::String>&& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens = value; }

    /**
     * <p>A set of character strings that represent the domain's identity. Using these
     * tokens, you will need to create DNS CNAME records that point to DKIM public keys
     * hosted by Amazon SES. Amazon Web Services will eventually detect that you have
     * updated your DNS records; this detection process may take up to 72 hours. Upon
     * successful detection, Amazon SES will be able to DKIM-sign email originating
     * from that domain. (This only applies to domain identities, not email address
     * identities.)</p> <p>For more information about creating DNS records using DKIM
     * tokens, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline IdentityDkimAttributes& WithDkimTokens(const Aws::Vector<Aws::String>& value) { SetDkimTokens(value); return *this;}

    /**
     * <p>A set of character strings that represent the domain's identity. Using these
     * tokens, you will need to create DNS CNAME records that point to DKIM public keys
     * hosted by Amazon SES. Amazon Web Services will eventually detect that you have
     * updated your DNS records; this detection process may take up to 72 hours. Upon
     * successful detection, Amazon SES will be able to DKIM-sign email originating
     * from that domain. (This only applies to domain identities, not email address
     * identities.)</p> <p>For more information about creating DNS records using DKIM
     * tokens, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline IdentityDkimAttributes& WithDkimTokens(Aws::Vector<Aws::String>&& value) { SetDkimTokens(value); return *this;}

    /**
     * <p>A set of character strings that represent the domain's identity. Using these
     * tokens, you will need to create DNS CNAME records that point to DKIM public keys
     * hosted by Amazon SES. Amazon Web Services will eventually detect that you have
     * updated your DNS records; this detection process may take up to 72 hours. Upon
     * successful detection, Amazon SES will be able to DKIM-sign email originating
     * from that domain. (This only applies to domain identities, not email address
     * identities.)</p> <p>For more information about creating DNS records using DKIM
     * tokens, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline IdentityDkimAttributes& AddDkimTokens(const Aws::String& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens.push_back(value); return *this; }

    /**
     * <p>A set of character strings that represent the domain's identity. Using these
     * tokens, you will need to create DNS CNAME records that point to DKIM public keys
     * hosted by Amazon SES. Amazon Web Services will eventually detect that you have
     * updated your DNS records; this detection process may take up to 72 hours. Upon
     * successful detection, Amazon SES will be able to DKIM-sign email originating
     * from that domain. (This only applies to domain identities, not email address
     * identities.)</p> <p>For more information about creating DNS records using DKIM
     * tokens, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline IdentityDkimAttributes& AddDkimTokens(Aws::String&& value) { m_dkimTokensHasBeenSet = true; m_dkimTokens.push_back(value); return *this; }

    /**
     * <p>A set of character strings that represent the domain's identity. Using these
     * tokens, you will need to create DNS CNAME records that point to DKIM public keys
     * hosted by Amazon SES. Amazon Web Services will eventually detect that you have
     * updated your DNS records; this detection process may take up to 72 hours. Upon
     * successful detection, Amazon SES will be able to DKIM-sign email originating
     * from that domain. (This only applies to domain identities, not email address
     * identities.)</p> <p>For more information about creating DNS records using DKIM
     * tokens, go to the <a
     * href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim-dns-records.html">Amazon
     * SES Developer Guide</a>.</p>
     */
    inline IdentityDkimAttributes& AddDkimTokens(const char* value) { m_dkimTokensHasBeenSet = true; m_dkimTokens.push_back(value); return *this; }

  private:
    bool m_dkimEnabled;
    bool m_dkimEnabledHasBeenSet;
    VerificationStatus m_dkimVerificationStatus;
    bool m_dkimVerificationStatusHasBeenSet;
    Aws::Vector<Aws::String> m_dkimTokens;
    bool m_dkimTokensHasBeenSet;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
