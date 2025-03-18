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
   * href="https://docs.aws.amazon.com/lightsail/latest/userguide/verify-tls-ssl-certificate-using-dns-cname-https">Verify
   * an SSL/TLS certificate in Amazon Lightsail</a> in the <i>Amazon Lightsail
   * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DnsRecordCreationState">AWS
   * API Reference</a></p>
   */
  class DnsRecordCreationState
  {
  public:
    AWS_LIGHTSAIL_API DnsRecordCreationState() = default;
    AWS_LIGHTSAIL_API DnsRecordCreationState(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DnsRecordCreationState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status code for the automated DNS record creation.</p> <p>Following are
     * the possible values:</p> <ul> <li> <p> <code>SUCCEEDED</code> - The validation
     * records were successfully added to the domain.</p> </li> <li> <p>
     * <code>STARTED</code> - The automatic DNS record creation has started.</p> </li>
     * <li> <p> <code>FAILED</code> - The validation records failed to be added to the
     * domain.</p> </li> </ul>
     */
    inline DnsRecordCreationStateCode GetCode() const { return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(DnsRecordCreationStateCode value) { m_codeHasBeenSet = true; m_code = value; }
    inline DnsRecordCreationState& WithCode(DnsRecordCreationStateCode value) { SetCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message that describes the reason for the status code.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DnsRecordCreationState& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    DnsRecordCreationStateCode m_code{DnsRecordCreationStateCode::NOT_SET};
    bool m_codeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
