/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DkimSigningKeyLength.h>
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
   * <p>An object that contains configuration for Bring Your Own DKIM (BYODKIM), or,
   * for Easy DKIM</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/DkimSigningAttributes">AWS
   * API Reference</a></p>
   */
  class DkimSigningAttributes
  {
  public:
    AWS_SESV2_API DkimSigningAttributes();
    AWS_SESV2_API DkimSigningAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API DkimSigningAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>[Bring Your Own DKIM] A string that's used to identify a public key in the
     * DNS configuration for a domain.</p>
     */
    inline const Aws::String& GetDomainSigningSelector() const{ return m_domainSigningSelector; }

    /**
     * <p>[Bring Your Own DKIM] A string that's used to identify a public key in the
     * DNS configuration for a domain.</p>
     */
    inline bool DomainSigningSelectorHasBeenSet() const { return m_domainSigningSelectorHasBeenSet; }

    /**
     * <p>[Bring Your Own DKIM] A string that's used to identify a public key in the
     * DNS configuration for a domain.</p>
     */
    inline void SetDomainSigningSelector(const Aws::String& value) { m_domainSigningSelectorHasBeenSet = true; m_domainSigningSelector = value; }

    /**
     * <p>[Bring Your Own DKIM] A string that's used to identify a public key in the
     * DNS configuration for a domain.</p>
     */
    inline void SetDomainSigningSelector(Aws::String&& value) { m_domainSigningSelectorHasBeenSet = true; m_domainSigningSelector = std::move(value); }

    /**
     * <p>[Bring Your Own DKIM] A string that's used to identify a public key in the
     * DNS configuration for a domain.</p>
     */
    inline void SetDomainSigningSelector(const char* value) { m_domainSigningSelectorHasBeenSet = true; m_domainSigningSelector.assign(value); }

    /**
     * <p>[Bring Your Own DKIM] A string that's used to identify a public key in the
     * DNS configuration for a domain.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningSelector(const Aws::String& value) { SetDomainSigningSelector(value); return *this;}

    /**
     * <p>[Bring Your Own DKIM] A string that's used to identify a public key in the
     * DNS configuration for a domain.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningSelector(Aws::String&& value) { SetDomainSigningSelector(std::move(value)); return *this;}

    /**
     * <p>[Bring Your Own DKIM] A string that's used to identify a public key in the
     * DNS configuration for a domain.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningSelector(const char* value) { SetDomainSigningSelector(value); return *this;}


    /**
     * <p>[Bring Your Own DKIM] A private key that's used to generate a DKIM
     * signature.</p> <p>The private key must use 1024 or 2048-bit RSA encryption, and
     * must be encoded using base64 encoding.</p>
     */
    inline const Aws::String& GetDomainSigningPrivateKey() const{ return m_domainSigningPrivateKey; }

    /**
     * <p>[Bring Your Own DKIM] A private key that's used to generate a DKIM
     * signature.</p> <p>The private key must use 1024 or 2048-bit RSA encryption, and
     * must be encoded using base64 encoding.</p>
     */
    inline bool DomainSigningPrivateKeyHasBeenSet() const { return m_domainSigningPrivateKeyHasBeenSet; }

    /**
     * <p>[Bring Your Own DKIM] A private key that's used to generate a DKIM
     * signature.</p> <p>The private key must use 1024 or 2048-bit RSA encryption, and
     * must be encoded using base64 encoding.</p>
     */
    inline void SetDomainSigningPrivateKey(const Aws::String& value) { m_domainSigningPrivateKeyHasBeenSet = true; m_domainSigningPrivateKey = value; }

    /**
     * <p>[Bring Your Own DKIM] A private key that's used to generate a DKIM
     * signature.</p> <p>The private key must use 1024 or 2048-bit RSA encryption, and
     * must be encoded using base64 encoding.</p>
     */
    inline void SetDomainSigningPrivateKey(Aws::String&& value) { m_domainSigningPrivateKeyHasBeenSet = true; m_domainSigningPrivateKey = std::move(value); }

    /**
     * <p>[Bring Your Own DKIM] A private key that's used to generate a DKIM
     * signature.</p> <p>The private key must use 1024 or 2048-bit RSA encryption, and
     * must be encoded using base64 encoding.</p>
     */
    inline void SetDomainSigningPrivateKey(const char* value) { m_domainSigningPrivateKeyHasBeenSet = true; m_domainSigningPrivateKey.assign(value); }

    /**
     * <p>[Bring Your Own DKIM] A private key that's used to generate a DKIM
     * signature.</p> <p>The private key must use 1024 or 2048-bit RSA encryption, and
     * must be encoded using base64 encoding.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningPrivateKey(const Aws::String& value) { SetDomainSigningPrivateKey(value); return *this;}

    /**
     * <p>[Bring Your Own DKIM] A private key that's used to generate a DKIM
     * signature.</p> <p>The private key must use 1024 or 2048-bit RSA encryption, and
     * must be encoded using base64 encoding.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningPrivateKey(Aws::String&& value) { SetDomainSigningPrivateKey(std::move(value)); return *this;}

    /**
     * <p>[Bring Your Own DKIM] A private key that's used to generate a DKIM
     * signature.</p> <p>The private key must use 1024 or 2048-bit RSA encryption, and
     * must be encoded using base64 encoding.</p>
     */
    inline DkimSigningAttributes& WithDomainSigningPrivateKey(const char* value) { SetDomainSigningPrivateKey(value); return *this;}


    /**
     * <p>[Easy DKIM] The key length of the future DKIM key pair to be generated. This
     * can be changed at most once per day.</p>
     */
    inline const DkimSigningKeyLength& GetNextSigningKeyLength() const{ return m_nextSigningKeyLength; }

    /**
     * <p>[Easy DKIM] The key length of the future DKIM key pair to be generated. This
     * can be changed at most once per day.</p>
     */
    inline bool NextSigningKeyLengthHasBeenSet() const { return m_nextSigningKeyLengthHasBeenSet; }

    /**
     * <p>[Easy DKIM] The key length of the future DKIM key pair to be generated. This
     * can be changed at most once per day.</p>
     */
    inline void SetNextSigningKeyLength(const DkimSigningKeyLength& value) { m_nextSigningKeyLengthHasBeenSet = true; m_nextSigningKeyLength = value; }

    /**
     * <p>[Easy DKIM] The key length of the future DKIM key pair to be generated. This
     * can be changed at most once per day.</p>
     */
    inline void SetNextSigningKeyLength(DkimSigningKeyLength&& value) { m_nextSigningKeyLengthHasBeenSet = true; m_nextSigningKeyLength = std::move(value); }

    /**
     * <p>[Easy DKIM] The key length of the future DKIM key pair to be generated. This
     * can be changed at most once per day.</p>
     */
    inline DkimSigningAttributes& WithNextSigningKeyLength(const DkimSigningKeyLength& value) { SetNextSigningKeyLength(value); return *this;}

    /**
     * <p>[Easy DKIM] The key length of the future DKIM key pair to be generated. This
     * can be changed at most once per day.</p>
     */
    inline DkimSigningAttributes& WithNextSigningKeyLength(DkimSigningKeyLength&& value) { SetNextSigningKeyLength(std::move(value)); return *this;}

  private:

    Aws::String m_domainSigningSelector;
    bool m_domainSigningSelectorHasBeenSet = false;

    Aws::String m_domainSigningPrivateKey;
    bool m_domainSigningPrivateKeyHasBeenSet = false;

    DkimSigningKeyLength m_nextSigningKeyLength;
    bool m_nextSigningKeyLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
