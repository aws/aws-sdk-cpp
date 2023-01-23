/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/model/DnsRecordCreationStateCode.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the creation state of the canonical name (CNAME) records that are
   * automatically added by Amazon Lightsail to the DNS of a domain to validate
   * domain ownership for an SSL/TLS certificate.</p> <p>When you create an SSL/TLS
   * certificate for a Lightsail resource, you must add a set of CNAME records to the
   * DNS of the domains for the certificate to validate that you own the domains.
   * Lightsail can automatically add the CNAME records to the DNS of the domain if
   * the DNS zone for the domain exists within your Lightsail account. If automatic
   * record addition fails, or if you manage the DNS of your domain using a
   * third-party service, then you must manually add the CNAME records to the DNS of
   * your domain. For more information, see <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/verify-tls-ssl-certificate-using-dns-cname-https">Verify
   * an SSL/TLS certificate in Amazon Lightsail</a> in the <i>Amazon Lightsail
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DnsRecordCreationState">AWS
   * API Reference</a></p>
   */
  class DnsRecordCreationState
  {
  public:
    AWS_LIGHTSAIL_API DnsRecordCreationState();
    AWS_LIGHTSAIL_API DnsRecordCreationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DnsRecordCreationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status code for the automated DNS record creation.</p> <p>Following are
     * the possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The validation
     * records were successfully added to the domain.</p> </li> <li> <p>
     * <code>STARTED</code> - The automatic DNS record creation has started.</p> </li>
     * <li> <p> <code>FAILED</code> - The validation records failed to be added to the
     * domain.</p> </li> </ul>
     */
    inline const DnsRecordCreationStateCode& GetCode() const{ return m_code; }

    /**
     * <p>The status code for the automated DNS record creation.</p> <p>Following are
     * the possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The validation
     * records were successfully added to the domain.</p> </li> <li> <p>
     * <code>STARTED</code> - The automatic DNS record creation has started.</p> </li>
     * <li> <p> <code>FAILED</code> - The validation records failed to be added to the
     * domain.</p> </li> </ul>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>The status code for the automated DNS record creation.</p> <p>Following are
     * the possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The validation
     * records were successfully added to the domain.</p> </li> <li> <p>
     * <code>STARTED</code> - The automatic DNS record creation has started.</p> </li>
     * <li> <p> <code>FAILED</code> - The validation records failed to be added to the
     * domain.</p> </li> </ul>
     */
    inline void SetCode(const DnsRecordCreationStateCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>The status code for the automated DNS record creation.</p> <p>Following are
     * the possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The validation
     * records were successfully added to the domain.</p> </li> <li> <p>
     * <code>STARTED</code> - The automatic DNS record creation has started.</p> </li>
     * <li> <p> <code>FAILED</code> - The validation records failed to be added to the
     * domain.</p> </li> </ul>
     */
    inline void SetCode(DnsRecordCreationStateCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>The status code for the automated DNS record creation.</p> <p>Following are
     * the possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The validation
     * records were successfully added to the domain.</p> </li> <li> <p>
     * <code>STARTED</code> - The automatic DNS record creation has started.</p> </li>
     * <li> <p> <code>FAILED</code> - The validation records failed to be added to the
     * domain.</p> </li> </ul>
     */
    inline DnsRecordCreationState& WithCode(const DnsRecordCreationStateCode& value) { SetCode(value); return *this;}

    /**
     * <p>The status code for the automated DNS record creation.</p> <p>Following are
     * the possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The validation
     * records were successfully added to the domain.</p> </li> <li> <p>
     * <code>STARTED</code> - The automatic DNS record creation has started.</p> </li>
     * <li> <p> <code>FAILED</code> - The validation records failed to be added to the
     * domain.</p> </li> </ul>
     */
    inline DnsRecordCreationState& WithCode(DnsRecordCreationStateCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline DnsRecordCreationState& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline DnsRecordCreationState& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline DnsRecordCreationState& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    DnsRecordCreationStateCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
