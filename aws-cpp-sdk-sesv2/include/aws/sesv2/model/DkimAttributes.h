﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DkimStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/DkimSigningAttributesOrigin.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains information about the DKIM authentication status for
   * an email identity.</p> <p>Amazon SES determines the authentication status by
   * searching for specific records in the DNS configuration for the domain. If you
   * used <a
   * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
   * DKIM</a> to set up DKIM authentication, Amazon SES tries to find three unique
   * CNAME records in the DNS configuration for your domain. If you provided a public
   * key to perform DKIM authentication, Amazon SES tries to find a TXT record that
   * uses the selector that you specified. The value of the TXT record must be a
   * public key that's paired with the private key that you specified in the process
   * of creating the identity</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DkimAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API DkimAttributes
  {
  public:
    DkimAttributes();
    DkimAttributes(Aws::Utils::Json::JsonView jsonValue);
    DkimAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If the value is <code>true</code>, then the messages that you send from the
     * identity are signed using DKIM. If the value is <code>false</code>, then the
     * messages that you send from the identity aren't DKIM-signed.</p>
     */
    inline bool GetSigningEnabled() const{ return m_signingEnabled; }

    /**
     * <p>If the value is <code>true</code>, then the messages that you send from the
     * identity are signed using DKIM. If the value is <code>false</code>, then the
     * messages that you send from the identity aren't DKIM-signed.</p>
     */
    inline bool SigningEnabledHasBeenSet() const { return m_signingEnabledHasBeenSet; }

    /**
     * <p>If the value is <code>true</code>, then the messages that you send from the
     * identity are signed using DKIM. If the value is <code>false</code>, then the
     * messages that you send from the identity aren't DKIM-signed.</p>
     */
    inline void SetSigningEnabled(bool value) { m_signingEnabledHasBeenSet = true; m_signingEnabled = value; }

    /**
     * <p>If the value is <code>true</code>, then the messages that you send from the
     * identity are signed using DKIM. If the value is <code>false</code>, then the
     * messages that you send from the identity aren't DKIM-signed.</p>
     */
    inline DkimAttributes& WithSigningEnabled(bool value) { SetSigningEnabled(value); return *this;}


    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – The verification process was initiated, but
     * Amazon SES hasn't yet detected the DKIM records in the DNS configuration for the
     * domain.</p> </li> <li> <p> <code>SUCCESS</code> – The verification process
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code> – The
     * verification process failed. This typically occurs when Amazon SES fails to find
     * the DKIM records in the DNS configuration of the domain.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue is preventing Amazon SES from
     * determining the DKIM authentication status of the domain.</p> </li> <li> <p>
     * <code>NOT_STARTED</code> – The DKIM verification process hasn't been initiated
     * for the domain.</p> </li> </ul>
     */
    inline const DkimStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – The verification process was initiated, but
     * Amazon SES hasn't yet detected the DKIM records in the DNS configuration for the
     * domain.</p> </li> <li> <p> <code>SUCCESS</code> – The verification process
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code> – The
     * verification process failed. This typically occurs when Amazon SES fails to find
     * the DKIM records in the DNS configuration of the domain.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue is preventing Amazon SES from
     * determining the DKIM authentication status of the domain.</p> </li> <li> <p>
     * <code>NOT_STARTED</code> – The DKIM verification process hasn't been initiated
     * for the domain.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – The verification process was initiated, but
     * Amazon SES hasn't yet detected the DKIM records in the DNS configuration for the
     * domain.</p> </li> <li> <p> <code>SUCCESS</code> – The verification process
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code> – The
     * verification process failed. This typically occurs when Amazon SES fails to find
     * the DKIM records in the DNS configuration of the domain.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue is preventing Amazon SES from
     * determining the DKIM authentication status of the domain.</p> </li> <li> <p>
     * <code>NOT_STARTED</code> – The DKIM verification process hasn't been initiated
     * for the domain.</p> </li> </ul>
     */
    inline void SetStatus(const DkimStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – The verification process was initiated, but
     * Amazon SES hasn't yet detected the DKIM records in the DNS configuration for the
     * domain.</p> </li> <li> <p> <code>SUCCESS</code> – The verification process
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code> – The
     * verification process failed. This typically occurs when Amazon SES fails to find
     * the DKIM records in the DNS configuration of the domain.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue is preventing Amazon SES from
     * determining the DKIM authentication status of the domain.</p> </li> <li> <p>
     * <code>NOT_STARTED</code> – The DKIM verification process hasn't been initiated
     * for the domain.</p> </li> </ul>
     */
    inline void SetStatus(DkimStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – The verification process was initiated, but
     * Amazon SES hasn't yet detected the DKIM records in the DNS configuration for the
     * domain.</p> </li> <li> <p> <code>SUCCESS</code> – The verification process
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code> – The
     * verification process failed. This typically occurs when Amazon SES fails to find
     * the DKIM records in the DNS configuration of the domain.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue is preventing Amazon SES from
     * determining the DKIM authentication status of the domain.</p> </li> <li> <p>
     * <code>NOT_STARTED</code> – The DKIM verification process hasn't been initiated
     * for the domain.</p> </li> </ul>
     */
    inline DkimAttributes& WithStatus(const DkimStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – The verification process was initiated, but
     * Amazon SES hasn't yet detected the DKIM records in the DNS configuration for the
     * domain.</p> </li> <li> <p> <code>SUCCESS</code> – The verification process
     * completed successfully.</p> </li> <li> <p> <code>FAILED</code> – The
     * verification process failed. This typically occurs when Amazon SES fails to find
     * the DKIM records in the DNS configuration of the domain.</p> </li> <li> <p>
     * <code>TEMPORARY_FAILURE</code> – A temporary issue is preventing Amazon SES from
     * determining the DKIM authentication status of the domain.</p> </li> <li> <p>
     * <code>NOT_STARTED</code> – The DKIM verification process hasn't been initiated
     * for the domain.</p> </li> </ul>
     */
    inline DkimAttributes& WithStatus(DkimStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokens() const{ return m_tokens; }

    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline bool TokensHasBeenSet() const { return m_tokensHasBeenSet; }

    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline void SetTokens(const Aws::Vector<Aws::String>& value) { m_tokensHasBeenSet = true; m_tokens = value; }

    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline void SetTokens(Aws::Vector<Aws::String>&& value) { m_tokensHasBeenSet = true; m_tokens = std::move(value); }

    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline DkimAttributes& WithTokens(const Aws::Vector<Aws::String>& value) { SetTokens(value); return *this;}

    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline DkimAttributes& WithTokens(Aws::Vector<Aws::String>&& value) { SetTokens(std::move(value)); return *this;}

    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline DkimAttributes& AddTokens(const Aws::String& value) { m_tokensHasBeenSet = true; m_tokens.push_back(value); return *this; }

    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline DkimAttributes& AddTokens(Aws::String&& value) { m_tokensHasBeenSet = true; m_tokens.push_back(std::move(value)); return *this; }

    /**
     * <p>If you used <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a> to configure DKIM authentication for the domain, then this object
     * contains a set of unique strings that you use to create a set of CNAME records
     * that you add to the DNS configuration for your domain. When Amazon SES detects
     * these records in the DNS configuration for your domain, the DKIM authentication
     * process is complete.</p> <p>If you configured DKIM authentication for the domain
     * by providing your own public-private key pair, then this object contains the
     * selector for the public key.</p> <p>Regardless of the DKIM authentication method
     * you use, Amazon SES searches for the appropriate records in the DNS
     * configuration of the domain for up to 72 hours.</p>
     */
    inline DkimAttributes& AddTokens(const char* value) { m_tokensHasBeenSet = true; m_tokens.push_back(value); return *this; }


    /**
     * <p>A string that indicates how DKIM was configured for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Indicates that
     * DKIM was configured for the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Indicates that DKIM was
     * configured for the identity by using Bring Your Own DKIM (BYODKIM).</p> </li>
     * </ul>
     */
    inline const DkimSigningAttributesOrigin& GetSigningAttributesOrigin() const{ return m_signingAttributesOrigin; }

    /**
     * <p>A string that indicates how DKIM was configured for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Indicates that
     * DKIM was configured for the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Indicates that DKIM was
     * configured for the identity by using Bring Your Own DKIM (BYODKIM).</p> </li>
     * </ul>
     */
    inline bool SigningAttributesOriginHasBeenSet() const { return m_signingAttributesOriginHasBeenSet; }

    /**
     * <p>A string that indicates how DKIM was configured for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Indicates that
     * DKIM was configured for the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Indicates that DKIM was
     * configured for the identity by using Bring Your Own DKIM (BYODKIM).</p> </li>
     * </ul>
     */
    inline void SetSigningAttributesOrigin(const DkimSigningAttributesOrigin& value) { m_signingAttributesOriginHasBeenSet = true; m_signingAttributesOrigin = value; }

    /**
     * <p>A string that indicates how DKIM was configured for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Indicates that
     * DKIM was configured for the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Indicates that DKIM was
     * configured for the identity by using Bring Your Own DKIM (BYODKIM).</p> </li>
     * </ul>
     */
    inline void SetSigningAttributesOrigin(DkimSigningAttributesOrigin&& value) { m_signingAttributesOriginHasBeenSet = true; m_signingAttributesOrigin = std::move(value); }

    /**
     * <p>A string that indicates how DKIM was configured for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Indicates that
     * DKIM was configured for the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Indicates that DKIM was
     * configured for the identity by using Bring Your Own DKIM (BYODKIM).</p> </li>
     * </ul>
     */
    inline DkimAttributes& WithSigningAttributesOrigin(const DkimSigningAttributesOrigin& value) { SetSigningAttributesOrigin(value); return *this;}

    /**
     * <p>A string that indicates how DKIM was configured for the identity. There are
     * two possible values:</p> <ul> <li> <p> <code>AWS_SES</code> – Indicates that
     * DKIM was configured for the identity by using <a
     * href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/easy-dkim.html">Easy
     * DKIM</a>.</p> </li> <li> <p> <code>EXTERNAL</code> – Indicates that DKIM was
     * configured for the identity by using Bring Your Own DKIM (BYODKIM).</p> </li>
     * </ul>
     */
    inline DkimAttributes& WithSigningAttributesOrigin(DkimSigningAttributesOrigin&& value) { SetSigningAttributesOrigin(std::move(value)); return *this;}

  private:

    bool m_signingEnabled;
    bool m_signingEnabledHasBeenSet;

    DkimStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<Aws::String> m_tokens;
    bool m_tokensHasBeenSet;

    DkimSigningAttributesOrigin m_signingAttributesOrigin;
    bool m_signingAttributesOriginHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
