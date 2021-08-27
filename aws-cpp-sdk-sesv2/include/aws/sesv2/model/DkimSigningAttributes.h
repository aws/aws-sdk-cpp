/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
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
   * <p>An object that contains information about the tokens used for setting up
   * Bring Your Own DKIM (BYODKIM).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DkimSigningAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SESV2_API DkimSigningAttributes
  {
  public:
    DkimSigningAttributes();
    DkimSigningAttributes(Aws::Utils::Json::JsonView jsonValue);
    DkimSigningAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string that's used to identify a public key in the DNS configuration for a
     * domain.</p>
     */
    inline const Aws::String& GetDomainSigningSelector() const{ return m_domainSigningSelector; }

    /**
     * <p>A string that's used to identify a public key in the DNS configuration for a
     * domain.</p>
     */
    inline bool DomainSigningSelectorHasBeenSet() const { return m_domainSigningSelectorHasBeenSet; }

    /**
     * <p>A string that's used to identify a public key in the DNS configuration for a
     * domain.</p>
     */
    inline void SetDomainSigningSelector(const Aws::String& value) { m_domainSigningSelectorHasBeenSet = true; m_domainSigningSelector = value; }

    /**
     * <p>A string that's used to identify a public key in the DNS configuration for a
     * domain.</p>
     */
    inline void SetDomainSigningSelector(Aws::String&& value) { m_domainSigningSelectorHasBeenSet = true; m_domainSigningSelector = std::move(value); }

    /**
     * <p>A string that's used to identify a public key in the DNS configuration for a
     * domain.</p>
     */
    inline void SetDomainSigningSelector(const char* value) { m_domainSigningSelectorHasBeenSet = true; m_domainSigningSelector.assign(value); }

    /**
     * <p>A string that's used to identify a public key in the DNS configuration for a
     * domain.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningSelector(const Aws::String& value) { SetDomainSigningSelector(value); return *this;}

    /**
     * <p>A string that's used to identify a public key in the DNS configuration for a
     * domain.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningSelector(Aws::String&& value) { SetDomainSigningSelector(std::move(value)); return *this;}

    /**
     * <p>A string that's used to identify a public key in the DNS configuration for a
     * domain.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningSelector(const char* value) { SetDomainSigningSelector(value); return *this;}


    /**
     * <p>A private key that's used to generate a DKIM signature.</p> <p>The private
     * key must use 1024-bit RSA encryption, and must be encoded using base64
     * encoding.</p>
     */
    inline const Aws::String& GetDomainSigningPrivateKey() const{ return m_domainSigningPrivateKey; }

    /**
     * <p>A private key that's used to generate a DKIM signature.</p> <p>The private
     * key must use 1024-bit RSA encryption, and must be encoded using base64
     * encoding.</p>
     */
    inline bool DomainSigningPrivateKeyHasBeenSet() const { return m_domainSigningPrivateKeyHasBeenSet; }

    /**
     * <p>A private key that's used to generate a DKIM signature.</p> <p>The private
     * key must use 1024-bit RSA encryption, and must be encoded using base64
     * encoding.</p>
     */
    inline void SetDomainSigningPrivateKey(const Aws::String& value) { m_domainSigningPrivateKeyHasBeenSet = true; m_domainSigningPrivateKey = value; }

    /**
     * <p>A private key that's used to generate a DKIM signature.</p> <p>The private
     * key must use 1024-bit RSA encryption, and must be encoded using base64
     * encoding.</p>
     */
    inline void SetDomainSigningPrivateKey(Aws::String&& value) { m_domainSigningPrivateKeyHasBeenSet = true; m_domainSigningPrivateKey = std::move(value); }

    /**
     * <p>A private key that's used to generate a DKIM signature.</p> <p>The private
     * key must use 1024-bit RSA encryption, and must be encoded using base64
     * encoding.</p>
     */
    inline void SetDomainSigningPrivateKey(const char* value) { m_domainSigningPrivateKeyHasBeenSet = true; m_domainSigningPrivateKey.assign(value); }

    /**
     * <p>A private key that's used to generate a DKIM signature.</p> <p>The private
     * key must use 1024-bit RSA encryption, and must be encoded using base64
     * encoding.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningPrivateKey(const Aws::String& value) { SetDomainSigningPrivateKey(value); return *this;}

    /**
     * <p>A private key that's used to generate a DKIM signature.</p> <p>The private
     * key must use 1024-bit RSA encryption, and must be encoded using base64
     * encoding.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningPrivateKey(Aws::String&& value) { SetDomainSigningPrivateKey(std::move(value)); return *this;}

    /**
     * <p>A private key that's used to generate a DKIM signature.</p> <p>The private
     * key must use 1024-bit RSA encryption, and must be encoded using base64
     * encoding.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningPrivateKey(const char* value) { SetDomainSigningPrivateKey(value); return *this;}

  private:

    Aws::String m_domainSigningSelector;
    bool m_domainSigningSelectorHasBeenSet;

    Aws::String m_domainSigningPrivateKey;
    bool m_domainSigningPrivateKeyHasBeenSet;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
