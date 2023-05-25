/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/email/SES_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/email/model/TlsPolicy.h>
#include <utility>

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
   * <p>Specifies whether messages that use the configuration set are required to use
   * Transport Layer Security (TLS).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/email-2010-12-01/DeliveryOptions">AWS
   * API Reference</a></p>
   */
  class DeliveryOptions
  {
  public:
    AWS_SES_API DeliveryOptions();
    AWS_SES_API DeliveryOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_SES_API DeliveryOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_SES_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_SES_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline const TlsPolicy& GetTlsPolicy() const{ return m_tlsPolicy; }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline bool TlsPolicyHasBeenSet() const { return m_tlsPolicyHasBeenSet; }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline void SetTlsPolicy(const TlsPolicy& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = value; }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline void SetTlsPolicy(TlsPolicy&& value) { m_tlsPolicyHasBeenSet = true; m_tlsPolicy = std::move(value); }

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline DeliveryOptions& WithTlsPolicy(const TlsPolicy& value) { SetTlsPolicy(value); return *this;}

    /**
     * <p>Specifies whether messages that use the configuration set are required to use
     * Transport Layer Security (TLS). If the value is <code>Require</code>, messages
     * are only delivered if a TLS connection can be established. If the value is
     * <code>Optional</code>, messages can be delivered in plain text if a TLS
     * connection can't be established.</p>
     */
    inline DeliveryOptions& WithTlsPolicy(TlsPolicy&& value) { SetTlsPolicy(std::move(value)); return *this;}

  private:

    TlsPolicy m_tlsPolicy;
    bool m_tlsPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SES
} // namespace Aws
