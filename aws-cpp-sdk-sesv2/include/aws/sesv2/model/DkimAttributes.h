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
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/DkimStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An object that contains information about the DKIM configuration for an email
   * identity.</p><p><h3>See Also:</h3>   <a
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
     * <ul> <li> <p> <code>PENDING</code> – Amazon SES hasn't yet detected the DKIM
     * records in the DNS configuration for the domain, but will continue to attempt to
     * locate them.</p> </li> <li> <p> <code>SUCCESS</code> – Amazon SES located the
     * DKIM records in the DNS configuration for the domain and determined that they're
     * correct. You can now send DKIM-signed email from the identity.</p> </li> <li>
     * <p> <code>FAILED</code> – Amazon SES wasn't able to locate the DKIM records in
     * the DNS settings for the domain, and won't continue to search for them.</p>
     * </li> <li> <p> <code>TEMPORARY_FAILURE</code> – A temporary issue occurred,
     * which prevented Amazon SES from determining the DKIM status for the domain.</p>
     * </li> <li> <p> <code>NOT_STARTED</code> – Amazon SES hasn't yet started
     * searching for the DKIM records in the DKIM records for the domain.</p> </li>
     * </ul>
     */
    inline const DkimStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – Amazon SES hasn't yet detected the DKIM
     * records in the DNS configuration for the domain, but will continue to attempt to
     * locate them.</p> </li> <li> <p> <code>SUCCESS</code> – Amazon SES located the
     * DKIM records in the DNS configuration for the domain and determined that they're
     * correct. You can now send DKIM-signed email from the identity.</p> </li> <li>
     * <p> <code>FAILED</code> – Amazon SES wasn't able to locate the DKIM records in
     * the DNS settings for the domain, and won't continue to search for them.</p>
     * </li> <li> <p> <code>TEMPORARY_FAILURE</code> – A temporary issue occurred,
     * which prevented Amazon SES from determining the DKIM status for the domain.</p>
     * </li> <li> <p> <code>NOT_STARTED</code> – Amazon SES hasn't yet started
     * searching for the DKIM records in the DKIM records for the domain.</p> </li>
     * </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – Amazon SES hasn't yet detected the DKIM
     * records in the DNS configuration for the domain, but will continue to attempt to
     * locate them.</p> </li> <li> <p> <code>SUCCESS</code> – Amazon SES located the
     * DKIM records in the DNS configuration for the domain and determined that they're
     * correct. You can now send DKIM-signed email from the identity.</p> </li> <li>
     * <p> <code>FAILED</code> – Amazon SES wasn't able to locate the DKIM records in
     * the DNS settings for the domain, and won't continue to search for them.</p>
     * </li> <li> <p> <code>TEMPORARY_FAILURE</code> – A temporary issue occurred,
     * which prevented Amazon SES from determining the DKIM status for the domain.</p>
     * </li> <li> <p> <code>NOT_STARTED</code> – Amazon SES hasn't yet started
     * searching for the DKIM records in the DKIM records for the domain.</p> </li>
     * </ul>
     */
    inline void SetStatus(const DkimStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – Amazon SES hasn't yet detected the DKIM
     * records in the DNS configuration for the domain, but will continue to attempt to
     * locate them.</p> </li> <li> <p> <code>SUCCESS</code> – Amazon SES located the
     * DKIM records in the DNS configuration for the domain and determined that they're
     * correct. You can now send DKIM-signed email from the identity.</p> </li> <li>
     * <p> <code>FAILED</code> – Amazon SES wasn't able to locate the DKIM records in
     * the DNS settings for the domain, and won't continue to search for them.</p>
     * </li> <li> <p> <code>TEMPORARY_FAILURE</code> – A temporary issue occurred,
     * which prevented Amazon SES from determining the DKIM status for the domain.</p>
     * </li> <li> <p> <code>NOT_STARTED</code> – Amazon SES hasn't yet started
     * searching for the DKIM records in the DKIM records for the domain.</p> </li>
     * </ul>
     */
    inline void SetStatus(DkimStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – Amazon SES hasn't yet detected the DKIM
     * records in the DNS configuration for the domain, but will continue to attempt to
     * locate them.</p> </li> <li> <p> <code>SUCCESS</code> – Amazon SES located the
     * DKIM records in the DNS configuration for the domain and determined that they're
     * correct. You can now send DKIM-signed email from the identity.</p> </li> <li>
     * <p> <code>FAILED</code> – Amazon SES wasn't able to locate the DKIM records in
     * the DNS settings for the domain, and won't continue to search for them.</p>
     * </li> <li> <p> <code>TEMPORARY_FAILURE</code> – A temporary issue occurred,
     * which prevented Amazon SES from determining the DKIM status for the domain.</p>
     * </li> <li> <p> <code>NOT_STARTED</code> – Amazon SES hasn't yet started
     * searching for the DKIM records in the DKIM records for the domain.</p> </li>
     * </ul>
     */
    inline DkimAttributes& WithStatus(const DkimStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes whether or not Amazon SES has successfully located the DKIM records
     * in the DNS records for the domain. The status can be one of the following:</p>
     * <ul> <li> <p> <code>PENDING</code> – Amazon SES hasn't yet detected the DKIM
     * records in the DNS configuration for the domain, but will continue to attempt to
     * locate them.</p> </li> <li> <p> <code>SUCCESS</code> – Amazon SES located the
     * DKIM records in the DNS configuration for the domain and determined that they're
     * correct. You can now send DKIM-signed email from the identity.</p> </li> <li>
     * <p> <code>FAILED</code> – Amazon SES wasn't able to locate the DKIM records in
     * the DNS settings for the domain, and won't continue to search for them.</p>
     * </li> <li> <p> <code>TEMPORARY_FAILURE</code> – A temporary issue occurred,
     * which prevented Amazon SES from determining the DKIM status for the domain.</p>
     * </li> <li> <p> <code>NOT_STARTED</code> – Amazon SES hasn't yet started
     * searching for the DKIM records in the DKIM records for the domain.</p> </li>
     * </ul>
     */
    inline DkimAttributes& WithStatus(DkimStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon SES detects these
     * records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon SES usually detects these records within about 72
     * hours of adding them to the DNS configuration for your domain.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokens() const{ return m_tokens; }

    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon SES detects these
     * records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon SES usually detects these records within about 72
     * hours of adding them to the DNS configuration for your domain.</p>
     */
    inline bool TokensHasBeenSet() const { return m_tokensHasBeenSet; }

    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon SES detects these
     * records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon SES usually detects these records within about 72
     * hours of adding them to the DNS configuration for your domain.</p>
     */
    inline void SetTokens(const Aws::Vector<Aws::String>& value) { m_tokensHasBeenSet = true; m_tokens = value; }

    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon SES detects these
     * records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon SES usually detects these records within about 72
     * hours of adding them to the DNS configuration for your domain.</p>
     */
    inline void SetTokens(Aws::Vector<Aws::String>&& value) { m_tokensHasBeenSet = true; m_tokens = std::move(value); }

    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon SES detects these
     * records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon SES usually detects these records within about 72
     * hours of adding them to the DNS configuration for your domain.</p>
     */
    inline DkimAttributes& WithTokens(const Aws::Vector<Aws::String>& value) { SetTokens(value); return *this;}

    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon SES detects these
     * records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon SES usually detects these records within about 72
     * hours of adding them to the DNS configuration for your domain.</p>
     */
    inline DkimAttributes& WithTokens(Aws::Vector<Aws::String>&& value) { SetTokens(std::move(value)); return *this;}

    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon SES detects these
     * records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon SES usually detects these records within about 72
     * hours of adding them to the DNS configuration for your domain.</p>
     */
    inline DkimAttributes& AddTokens(const Aws::String& value) { m_tokensHasBeenSet = true; m_tokens.push_back(value); return *this; }

    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon SES detects these
     * records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon SES usually detects these records within about 72
     * hours of adding them to the DNS configuration for your domain.</p>
     */
    inline DkimAttributes& AddTokens(Aws::String&& value) { m_tokensHasBeenSet = true; m_tokens.push_back(std::move(value)); return *this; }

    /**
     * <p>A set of unique strings that you use to create a set of CNAME records that
     * you add to the DNS configuration for your domain. When Amazon SES detects these
     * records in the DNS configuration for your domain, the DKIM authentication
     * process is complete. Amazon SES usually detects these records within about 72
     * hours of adding them to the DNS configuration for your domain.</p>
     */
    inline DkimAttributes& AddTokens(const char* value) { m_tokensHasBeenSet = true; m_tokens.push_back(value); return *this; }

  private:

    bool m_signingEnabled;
    bool m_signingEnabledHasBeenSet;

    DkimStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<Aws::String> m_tokens;
    bool m_tokensHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
