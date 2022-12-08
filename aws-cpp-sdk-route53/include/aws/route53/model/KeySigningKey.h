/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Route53
{
namespace Model
{

  /**
   * <p>A key-signing key (KSK) is a complex type that represents a public/private
   * key pair. The private key is used to generate a digital signature for the zone
   * signing key (ZSK). The public key is stored in the DNS and is used to
   * authenticate the ZSK. A KSK is always associated with a hosted zone; it cannot
   * exist by itself.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/KeySigningKey">AWS
   * API Reference</a></p>
   */
  class KeySigningKey
  {
  public:
    AWS_ROUTE53_API KeySigningKey();
    AWS_ROUTE53_API KeySigningKey(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ROUTE53_API KeySigningKey& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ROUTE53_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline KeySigningKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline KeySigningKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A string used to identify a key-signing key (KSK). <code>Name</code> can
     * include numbers, letters, and underscores (_). <code>Name</code> must be unique
     * for each key-signing key in the same hosted zone.</p>
     */
    inline KeySigningKey& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) used to identify the customer managed key in
     * Key Management Service (KMS). The <code>KmsArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone.</p> <p>You must configure the
     * customer managed key as follows:</p> <dl> <dt>Status</dt> <dd> <p>Enabled</p>
     * </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key usage</dt> <dd>
     * <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key policy must
     * give permission for the following actions:</p> <ul> <li> <p>DescribeKey</p>
     * </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li> </ul> <p>The key
     * policy must also include the Amazon Route 53 service in the principal for your
     * account. Specify the following:</p> <ul> <li> <p> <code>"Service":
     * "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd> </dl> <p>For more
     * information about working with the customer managed key in KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline const Aws::String& GetKmsArn() const{ return m_kmsArn; }

    /**
     * <p>The Amazon resource name (ARN) used to identify the customer managed key in
     * Key Management Service (KMS). The <code>KmsArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone.</p> <p>You must configure the
     * customer managed key as follows:</p> <dl> <dt>Status</dt> <dd> <p>Enabled</p>
     * </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key usage</dt> <dd>
     * <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key policy must
     * give permission for the following actions:</p> <ul> <li> <p>DescribeKey</p>
     * </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li> </ul> <p>The key
     * policy must also include the Amazon Route 53 service in the principal for your
     * account. Specify the following:</p> <ul> <li> <p> <code>"Service":
     * "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd> </dl> <p>For more
     * information about working with the customer managed key in KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline bool KmsArnHasBeenSet() const { return m_kmsArnHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) used to identify the customer managed key in
     * Key Management Service (KMS). The <code>KmsArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone.</p> <p>You must configure the
     * customer managed key as follows:</p> <dl> <dt>Status</dt> <dd> <p>Enabled</p>
     * </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key usage</dt> <dd>
     * <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key policy must
     * give permission for the following actions:</p> <ul> <li> <p>DescribeKey</p>
     * </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li> </ul> <p>The key
     * policy must also include the Amazon Route 53 service in the principal for your
     * account. Specify the following:</p> <ul> <li> <p> <code>"Service":
     * "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd> </dl> <p>For more
     * information about working with the customer managed key in KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline void SetKmsArn(const Aws::String& value) { m_kmsArnHasBeenSet = true; m_kmsArn = value; }

    /**
     * <p>The Amazon resource name (ARN) used to identify the customer managed key in
     * Key Management Service (KMS). The <code>KmsArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone.</p> <p>You must configure the
     * customer managed key as follows:</p> <dl> <dt>Status</dt> <dd> <p>Enabled</p>
     * </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key usage</dt> <dd>
     * <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key policy must
     * give permission for the following actions:</p> <ul> <li> <p>DescribeKey</p>
     * </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li> </ul> <p>The key
     * policy must also include the Amazon Route 53 service in the principal for your
     * account. Specify the following:</p> <ul> <li> <p> <code>"Service":
     * "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd> </dl> <p>For more
     * information about working with the customer managed key in KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline void SetKmsArn(Aws::String&& value) { m_kmsArnHasBeenSet = true; m_kmsArn = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) used to identify the customer managed key in
     * Key Management Service (KMS). The <code>KmsArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone.</p> <p>You must configure the
     * customer managed key as follows:</p> <dl> <dt>Status</dt> <dd> <p>Enabled</p>
     * </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key usage</dt> <dd>
     * <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key policy must
     * give permission for the following actions:</p> <ul> <li> <p>DescribeKey</p>
     * </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li> </ul> <p>The key
     * policy must also include the Amazon Route 53 service in the principal for your
     * account. Specify the following:</p> <ul> <li> <p> <code>"Service":
     * "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd> </dl> <p>For more
     * information about working with the customer managed key in KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline void SetKmsArn(const char* value) { m_kmsArnHasBeenSet = true; m_kmsArn.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) used to identify the customer managed key in
     * Key Management Service (KMS). The <code>KmsArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone.</p> <p>You must configure the
     * customer managed key as follows:</p> <dl> <dt>Status</dt> <dd> <p>Enabled</p>
     * </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key usage</dt> <dd>
     * <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key policy must
     * give permission for the following actions:</p> <ul> <li> <p>DescribeKey</p>
     * </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li> </ul> <p>The key
     * policy must also include the Amazon Route 53 service in the principal for your
     * account. Specify the following:</p> <ul> <li> <p> <code>"Service":
     * "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd> </dl> <p>For more
     * information about working with the customer managed key in KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline KeySigningKey& WithKmsArn(const Aws::String& value) { SetKmsArn(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) used to identify the customer managed key in
     * Key Management Service (KMS). The <code>KmsArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone.</p> <p>You must configure the
     * customer managed key as follows:</p> <dl> <dt>Status</dt> <dd> <p>Enabled</p>
     * </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key usage</dt> <dd>
     * <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key policy must
     * give permission for the following actions:</p> <ul> <li> <p>DescribeKey</p>
     * </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li> </ul> <p>The key
     * policy must also include the Amazon Route 53 service in the principal for your
     * account. Specify the following:</p> <ul> <li> <p> <code>"Service":
     * "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd> </dl> <p>For more
     * information about working with the customer managed key in KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline KeySigningKey& WithKmsArn(Aws::String&& value) { SetKmsArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) used to identify the customer managed key in
     * Key Management Service (KMS). The <code>KmsArn</code> must be unique for each
     * key-signing key (KSK) in a single hosted zone.</p> <p>You must configure the
     * customer managed key as follows:</p> <dl> <dt>Status</dt> <dd> <p>Enabled</p>
     * </dd> <dt>Key spec</dt> <dd> <p>ECC_NIST_P256</p> </dd> <dt>Key usage</dt> <dd>
     * <p>Sign and verify</p> </dd> <dt>Key policy</dt> <dd> <p>The key policy must
     * give permission for the following actions:</p> <ul> <li> <p>DescribeKey</p>
     * </li> <li> <p>GetPublicKey</p> </li> <li> <p>Sign</p> </li> </ul> <p>The key
     * policy must also include the Amazon Route 53 service in the principal for your
     * account. Specify the following:</p> <ul> <li> <p> <code>"Service":
     * "dnssec-route53.amazonaws.com"</code> </p> </li> </ul> </dd> </dl> <p>For more
     * information about working with the customer managed key in KMS, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/concepts.html">Key
     * Management Service concepts</a>.</p>
     */
    inline KeySigningKey& WithKmsArn(const char* value) { SetKmsArn(value); return *this;}


    /**
     * <p>An integer that specifies how the key is used. For key-signing key (KSK),
     * this value is always 257.</p>
     */
    inline int GetFlag() const{ return m_flag; }

    /**
     * <p>An integer that specifies how the key is used. For key-signing key (KSK),
     * this value is always 257.</p>
     */
    inline bool FlagHasBeenSet() const { return m_flagHasBeenSet; }

    /**
     * <p>An integer that specifies how the key is used. For key-signing key (KSK),
     * this value is always 257.</p>
     */
    inline void SetFlag(int value) { m_flagHasBeenSet = true; m_flag = value; }

    /**
     * <p>An integer that specifies how the key is used. For key-signing key (KSK),
     * this value is always 257.</p>
     */
    inline KeySigningKey& WithFlag(int value) { SetFlag(value); return *this;}


    /**
     * <p>A string used to represent the signing algorithm. This value must follow the
     * guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline const Aws::String& GetSigningAlgorithmMnemonic() const{ return m_signingAlgorithmMnemonic; }

    /**
     * <p>A string used to represent the signing algorithm. This value must follow the
     * guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline bool SigningAlgorithmMnemonicHasBeenSet() const { return m_signingAlgorithmMnemonicHasBeenSet; }

    /**
     * <p>A string used to represent the signing algorithm. This value must follow the
     * guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline void SetSigningAlgorithmMnemonic(const Aws::String& value) { m_signingAlgorithmMnemonicHasBeenSet = true; m_signingAlgorithmMnemonic = value; }

    /**
     * <p>A string used to represent the signing algorithm. This value must follow the
     * guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline void SetSigningAlgorithmMnemonic(Aws::String&& value) { m_signingAlgorithmMnemonicHasBeenSet = true; m_signingAlgorithmMnemonic = std::move(value); }

    /**
     * <p>A string used to represent the signing algorithm. This value must follow the
     * guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline void SetSigningAlgorithmMnemonic(const char* value) { m_signingAlgorithmMnemonicHasBeenSet = true; m_signingAlgorithmMnemonic.assign(value); }

    /**
     * <p>A string used to represent the signing algorithm. This value must follow the
     * guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline KeySigningKey& WithSigningAlgorithmMnemonic(const Aws::String& value) { SetSigningAlgorithmMnemonic(value); return *this;}

    /**
     * <p>A string used to represent the signing algorithm. This value must follow the
     * guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline KeySigningKey& WithSigningAlgorithmMnemonic(Aws::String&& value) { SetSigningAlgorithmMnemonic(std::move(value)); return *this;}

    /**
     * <p>A string used to represent the signing algorithm. This value must follow the
     * guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline KeySigningKey& WithSigningAlgorithmMnemonic(const char* value) { SetSigningAlgorithmMnemonic(value); return *this;}


    /**
     * <p>An integer used to represent the signing algorithm. This value must follow
     * the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline int GetSigningAlgorithmType() const{ return m_signingAlgorithmType; }

    /**
     * <p>An integer used to represent the signing algorithm. This value must follow
     * the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline bool SigningAlgorithmTypeHasBeenSet() const { return m_signingAlgorithmTypeHasBeenSet; }

    /**
     * <p>An integer used to represent the signing algorithm. This value must follow
     * the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline void SetSigningAlgorithmType(int value) { m_signingAlgorithmTypeHasBeenSet = true; m_signingAlgorithmType = value; }

    /**
     * <p>An integer used to represent the signing algorithm. This value must follow
     * the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.1">RFC-8624 Section 3.1</a>.
     * </p>
     */
    inline KeySigningKey& WithSigningAlgorithmType(int value) { SetSigningAlgorithmType(value); return *this;}


    /**
     * <p>A string used to represent the delegation signer digest algorithm. This value
     * must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section 3.3</a>.
     * </p>
     */
    inline const Aws::String& GetDigestAlgorithmMnemonic() const{ return m_digestAlgorithmMnemonic; }

    /**
     * <p>A string used to represent the delegation signer digest algorithm. This value
     * must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section 3.3</a>.
     * </p>
     */
    inline bool DigestAlgorithmMnemonicHasBeenSet() const { return m_digestAlgorithmMnemonicHasBeenSet; }

    /**
     * <p>A string used to represent the delegation signer digest algorithm. This value
     * must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section 3.3</a>.
     * </p>
     */
    inline void SetDigestAlgorithmMnemonic(const Aws::String& value) { m_digestAlgorithmMnemonicHasBeenSet = true; m_digestAlgorithmMnemonic = value; }

    /**
     * <p>A string used to represent the delegation signer digest algorithm. This value
     * must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section 3.3</a>.
     * </p>
     */
    inline void SetDigestAlgorithmMnemonic(Aws::String&& value) { m_digestAlgorithmMnemonicHasBeenSet = true; m_digestAlgorithmMnemonic = std::move(value); }

    /**
     * <p>A string used to represent the delegation signer digest algorithm. This value
     * must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section 3.3</a>.
     * </p>
     */
    inline void SetDigestAlgorithmMnemonic(const char* value) { m_digestAlgorithmMnemonicHasBeenSet = true; m_digestAlgorithmMnemonic.assign(value); }

    /**
     * <p>A string used to represent the delegation signer digest algorithm. This value
     * must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section 3.3</a>.
     * </p>
     */
    inline KeySigningKey& WithDigestAlgorithmMnemonic(const Aws::String& value) { SetDigestAlgorithmMnemonic(value); return *this;}

    /**
     * <p>A string used to represent the delegation signer digest algorithm. This value
     * must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section 3.3</a>.
     * </p>
     */
    inline KeySigningKey& WithDigestAlgorithmMnemonic(Aws::String&& value) { SetDigestAlgorithmMnemonic(std::move(value)); return *this;}

    /**
     * <p>A string used to represent the delegation signer digest algorithm. This value
     * must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section 3.3</a>.
     * </p>
     */
    inline KeySigningKey& WithDigestAlgorithmMnemonic(const char* value) { SetDigestAlgorithmMnemonic(value); return *this;}


    /**
     * <p>An integer used to represent the delegation signer digest algorithm. This
     * value must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section
     * 3.3</a>.</p>
     */
    inline int GetDigestAlgorithmType() const{ return m_digestAlgorithmType; }

    /**
     * <p>An integer used to represent the delegation signer digest algorithm. This
     * value must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section
     * 3.3</a>.</p>
     */
    inline bool DigestAlgorithmTypeHasBeenSet() const { return m_digestAlgorithmTypeHasBeenSet; }

    /**
     * <p>An integer used to represent the delegation signer digest algorithm. This
     * value must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section
     * 3.3</a>.</p>
     */
    inline void SetDigestAlgorithmType(int value) { m_digestAlgorithmTypeHasBeenSet = true; m_digestAlgorithmType = value; }

    /**
     * <p>An integer used to represent the delegation signer digest algorithm. This
     * value must follow the guidelines provided by <a
     * href="https://tools.ietf.org/html/rfc8624#section-3.3">RFC-8624 Section
     * 3.3</a>.</p>
     */
    inline KeySigningKey& WithDigestAlgorithmType(int value) { SetDigestAlgorithmType(value); return *this;}


    /**
     * <p>An integer used to identify the DNSSEC record for the domain name. The
     * process used to calculate the value is described in <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt">RFC-4034 Appendix B</a>.</p>
     */
    inline int GetKeyTag() const{ return m_keyTag; }

    /**
     * <p>An integer used to identify the DNSSEC record for the domain name. The
     * process used to calculate the value is described in <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt">RFC-4034 Appendix B</a>.</p>
     */
    inline bool KeyTagHasBeenSet() const { return m_keyTagHasBeenSet; }

    /**
     * <p>An integer used to identify the DNSSEC record for the domain name. The
     * process used to calculate the value is described in <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt">RFC-4034 Appendix B</a>.</p>
     */
    inline void SetKeyTag(int value) { m_keyTagHasBeenSet = true; m_keyTag = value; }

    /**
     * <p>An integer used to identify the DNSSEC record for the domain name. The
     * process used to calculate the value is described in <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt">RFC-4034 Appendix B</a>.</p>
     */
    inline KeySigningKey& WithKeyTag(int value) { SetKeyTag(value); return *this;}


    /**
     * <p>A cryptographic digest of a DNSKEY resource record (RR). DNSKEY records are
     * used to publish the public key that resolvers can use to verify DNSSEC
     * signatures that are used to secure certain kinds of information provided by the
     * DNS system.</p>
     */
    inline const Aws::String& GetDigestValue() const{ return m_digestValue; }

    /**
     * <p>A cryptographic digest of a DNSKEY resource record (RR). DNSKEY records are
     * used to publish the public key that resolvers can use to verify DNSSEC
     * signatures that are used to secure certain kinds of information provided by the
     * DNS system.</p>
     */
    inline bool DigestValueHasBeenSet() const { return m_digestValueHasBeenSet; }

    /**
     * <p>A cryptographic digest of a DNSKEY resource record (RR). DNSKEY records are
     * used to publish the public key that resolvers can use to verify DNSSEC
     * signatures that are used to secure certain kinds of information provided by the
     * DNS system.</p>
     */
    inline void SetDigestValue(const Aws::String& value) { m_digestValueHasBeenSet = true; m_digestValue = value; }

    /**
     * <p>A cryptographic digest of a DNSKEY resource record (RR). DNSKEY records are
     * used to publish the public key that resolvers can use to verify DNSSEC
     * signatures that are used to secure certain kinds of information provided by the
     * DNS system.</p>
     */
    inline void SetDigestValue(Aws::String&& value) { m_digestValueHasBeenSet = true; m_digestValue = std::move(value); }

    /**
     * <p>A cryptographic digest of a DNSKEY resource record (RR). DNSKEY records are
     * used to publish the public key that resolvers can use to verify DNSSEC
     * signatures that are used to secure certain kinds of information provided by the
     * DNS system.</p>
     */
    inline void SetDigestValue(const char* value) { m_digestValueHasBeenSet = true; m_digestValue.assign(value); }

    /**
     * <p>A cryptographic digest of a DNSKEY resource record (RR). DNSKEY records are
     * used to publish the public key that resolvers can use to verify DNSSEC
     * signatures that are used to secure certain kinds of information provided by the
     * DNS system.</p>
     */
    inline KeySigningKey& WithDigestValue(const Aws::String& value) { SetDigestValue(value); return *this;}

    /**
     * <p>A cryptographic digest of a DNSKEY resource record (RR). DNSKEY records are
     * used to publish the public key that resolvers can use to verify DNSSEC
     * signatures that are used to secure certain kinds of information provided by the
     * DNS system.</p>
     */
    inline KeySigningKey& WithDigestValue(Aws::String&& value) { SetDigestValue(std::move(value)); return *this;}

    /**
     * <p>A cryptographic digest of a DNSKEY resource record (RR). DNSKEY records are
     * used to publish the public key that resolvers can use to verify DNSSEC
     * signatures that are used to secure certain kinds of information provided by the
     * DNS system.</p>
     */
    inline KeySigningKey& WithDigestValue(const char* value) { SetDigestValue(value); return *this;}


    /**
     * <p>The public key, represented as a Base64 encoding, as required by <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt"> RFC-4034 Page 5</a>.</p>
     */
    inline const Aws::String& GetPublicKey() const{ return m_publicKey; }

    /**
     * <p>The public key, represented as a Base64 encoding, as required by <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt"> RFC-4034 Page 5</a>.</p>
     */
    inline bool PublicKeyHasBeenSet() const { return m_publicKeyHasBeenSet; }

    /**
     * <p>The public key, represented as a Base64 encoding, as required by <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt"> RFC-4034 Page 5</a>.</p>
     */
    inline void SetPublicKey(const Aws::String& value) { m_publicKeyHasBeenSet = true; m_publicKey = value; }

    /**
     * <p>The public key, represented as a Base64 encoding, as required by <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt"> RFC-4034 Page 5</a>.</p>
     */
    inline void SetPublicKey(Aws::String&& value) { m_publicKeyHasBeenSet = true; m_publicKey = std::move(value); }

    /**
     * <p>The public key, represented as a Base64 encoding, as required by <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt"> RFC-4034 Page 5</a>.</p>
     */
    inline void SetPublicKey(const char* value) { m_publicKeyHasBeenSet = true; m_publicKey.assign(value); }

    /**
     * <p>The public key, represented as a Base64 encoding, as required by <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt"> RFC-4034 Page 5</a>.</p>
     */
    inline KeySigningKey& WithPublicKey(const Aws::String& value) { SetPublicKey(value); return *this;}

    /**
     * <p>The public key, represented as a Base64 encoding, as required by <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt"> RFC-4034 Page 5</a>.</p>
     */
    inline KeySigningKey& WithPublicKey(Aws::String&& value) { SetPublicKey(std::move(value)); return *this;}

    /**
     * <p>The public key, represented as a Base64 encoding, as required by <a
     * href="https://tools.ietf.org/rfc/rfc4034.txt"> RFC-4034 Page 5</a>.</p>
     */
    inline KeySigningKey& WithPublicKey(const char* value) { SetPublicKey(value); return *this;}


    /**
     * <p>A string that represents a delegation signer (DS) record.</p>
     */
    inline const Aws::String& GetDSRecord() const{ return m_dSRecord; }

    /**
     * <p>A string that represents a delegation signer (DS) record.</p>
     */
    inline bool DSRecordHasBeenSet() const { return m_dSRecordHasBeenSet; }

    /**
     * <p>A string that represents a delegation signer (DS) record.</p>
     */
    inline void SetDSRecord(const Aws::String& value) { m_dSRecordHasBeenSet = true; m_dSRecord = value; }

    /**
     * <p>A string that represents a delegation signer (DS) record.</p>
     */
    inline void SetDSRecord(Aws::String&& value) { m_dSRecordHasBeenSet = true; m_dSRecord = std::move(value); }

    /**
     * <p>A string that represents a delegation signer (DS) record.</p>
     */
    inline void SetDSRecord(const char* value) { m_dSRecordHasBeenSet = true; m_dSRecord.assign(value); }

    /**
     * <p>A string that represents a delegation signer (DS) record.</p>
     */
    inline KeySigningKey& WithDSRecord(const Aws::String& value) { SetDSRecord(value); return *this;}

    /**
     * <p>A string that represents a delegation signer (DS) record.</p>
     */
    inline KeySigningKey& WithDSRecord(Aws::String&& value) { SetDSRecord(std::move(value)); return *this;}

    /**
     * <p>A string that represents a delegation signer (DS) record.</p>
     */
    inline KeySigningKey& WithDSRecord(const char* value) { SetDSRecord(value); return *this;}


    /**
     * <p>A string that represents a DNSKEY record.</p>
     */
    inline const Aws::String& GetDNSKEYRecord() const{ return m_dNSKEYRecord; }

    /**
     * <p>A string that represents a DNSKEY record.</p>
     */
    inline bool DNSKEYRecordHasBeenSet() const { return m_dNSKEYRecordHasBeenSet; }

    /**
     * <p>A string that represents a DNSKEY record.</p>
     */
    inline void SetDNSKEYRecord(const Aws::String& value) { m_dNSKEYRecordHasBeenSet = true; m_dNSKEYRecord = value; }

    /**
     * <p>A string that represents a DNSKEY record.</p>
     */
    inline void SetDNSKEYRecord(Aws::String&& value) { m_dNSKEYRecordHasBeenSet = true; m_dNSKEYRecord = std::move(value); }

    /**
     * <p>A string that represents a DNSKEY record.</p>
     */
    inline void SetDNSKEYRecord(const char* value) { m_dNSKEYRecordHasBeenSet = true; m_dNSKEYRecord.assign(value); }

    /**
     * <p>A string that represents a DNSKEY record.</p>
     */
    inline KeySigningKey& WithDNSKEYRecord(const Aws::String& value) { SetDNSKEYRecord(value); return *this;}

    /**
     * <p>A string that represents a DNSKEY record.</p>
     */
    inline KeySigningKey& WithDNSKEYRecord(Aws::String&& value) { SetDNSKEYRecord(std::move(value)); return *this;}

    /**
     * <p>A string that represents a DNSKEY record.</p>
     */
    inline KeySigningKey& WithDNSKEYRecord(const char* value) { SetDNSKEYRecord(value); return *this;}


    /**
     * <p>A string that represents the current key-signing key (KSK) status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd>
     * <p>The KSK is being used for signing.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * KSK is not being used for signing.</p> </dd> <dt>DELETING</dt> <dd> <p>The KSK
     * is in the process of being deleted.</p> </dd> <dt>ACTION_NEEDED</dt> <dd>
     * <p>There is a problem with the KSK that requires you to take action to resolve.
     * For example, the customer managed key might have been deleted, or the
     * permissions for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including actions that involve
     * this KSK, you must correct the problem. For example, you may need to activate or
     * deactivate the KSK.</p> </dd> </dl>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>A string that represents the current key-signing key (KSK) status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd>
     * <p>The KSK is being used for signing.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * KSK is not being used for signing.</p> </dd> <dt>DELETING</dt> <dd> <p>The KSK
     * is in the process of being deleted.</p> </dd> <dt>ACTION_NEEDED</dt> <dd>
     * <p>There is a problem with the KSK that requires you to take action to resolve.
     * For example, the customer managed key might have been deleted, or the
     * permissions for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including actions that involve
     * this KSK, you must correct the problem. For example, you may need to activate or
     * deactivate the KSK.</p> </dd> </dl>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A string that represents the current key-signing key (KSK) status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd>
     * <p>The KSK is being used for signing.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * KSK is not being used for signing.</p> </dd> <dt>DELETING</dt> <dd> <p>The KSK
     * is in the process of being deleted.</p> </dd> <dt>ACTION_NEEDED</dt> <dd>
     * <p>There is a problem with the KSK that requires you to take action to resolve.
     * For example, the customer managed key might have been deleted, or the
     * permissions for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including actions that involve
     * this KSK, you must correct the problem. For example, you may need to activate or
     * deactivate the KSK.</p> </dd> </dl>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A string that represents the current key-signing key (KSK) status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd>
     * <p>The KSK is being used for signing.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * KSK is not being used for signing.</p> </dd> <dt>DELETING</dt> <dd> <p>The KSK
     * is in the process of being deleted.</p> </dd> <dt>ACTION_NEEDED</dt> <dd>
     * <p>There is a problem with the KSK that requires you to take action to resolve.
     * For example, the customer managed key might have been deleted, or the
     * permissions for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including actions that involve
     * this KSK, you must correct the problem. For example, you may need to activate or
     * deactivate the KSK.</p> </dd> </dl>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A string that represents the current key-signing key (KSK) status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd>
     * <p>The KSK is being used for signing.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * KSK is not being used for signing.</p> </dd> <dt>DELETING</dt> <dd> <p>The KSK
     * is in the process of being deleted.</p> </dd> <dt>ACTION_NEEDED</dt> <dd>
     * <p>There is a problem with the KSK that requires you to take action to resolve.
     * For example, the customer managed key might have been deleted, or the
     * permissions for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including actions that involve
     * this KSK, you must correct the problem. For example, you may need to activate or
     * deactivate the KSK.</p> </dd> </dl>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>A string that represents the current key-signing key (KSK) status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd>
     * <p>The KSK is being used for signing.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * KSK is not being used for signing.</p> </dd> <dt>DELETING</dt> <dd> <p>The KSK
     * is in the process of being deleted.</p> </dd> <dt>ACTION_NEEDED</dt> <dd>
     * <p>There is a problem with the KSK that requires you to take action to resolve.
     * For example, the customer managed key might have been deleted, or the
     * permissions for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including actions that involve
     * this KSK, you must correct the problem. For example, you may need to activate or
     * deactivate the KSK.</p> </dd> </dl>
     */
    inline KeySigningKey& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>A string that represents the current key-signing key (KSK) status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd>
     * <p>The KSK is being used for signing.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * KSK is not being used for signing.</p> </dd> <dt>DELETING</dt> <dd> <p>The KSK
     * is in the process of being deleted.</p> </dd> <dt>ACTION_NEEDED</dt> <dd>
     * <p>There is a problem with the KSK that requires you to take action to resolve.
     * For example, the customer managed key might have been deleted, or the
     * permissions for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including actions that involve
     * this KSK, you must correct the problem. For example, you may need to activate or
     * deactivate the KSK.</p> </dd> </dl>
     */
    inline KeySigningKey& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>A string that represents the current key-signing key (KSK) status.</p>
     * <p>Status can have one of the following values:</p> <dl> <dt>ACTIVE</dt> <dd>
     * <p>The KSK is being used for signing.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The
     * KSK is not being used for signing.</p> </dd> <dt>DELETING</dt> <dd> <p>The KSK
     * is in the process of being deleted.</p> </dd> <dt>ACTION_NEEDED</dt> <dd>
     * <p>There is a problem with the KSK that requires you to take action to resolve.
     * For example, the customer managed key might have been deleted, or the
     * permissions for the customer managed key might have been changed.</p> </dd>
     * <dt>INTERNAL_FAILURE</dt> <dd> <p>There was an error during a request. Before
     * you can continue to work with DNSSEC signing, including actions that involve
     * this KSK, you must correct the problem. For example, you may need to activate or
     * deactivate the KSK.</p> </dd> </dl>
     */
    inline KeySigningKey& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The status message provided for the following key-signing key (KSK) statuses:
     * <code>ACTION_NEEDED</code> or <code>INTERNAL_FAILURE</code>. The status message
     * includes information about what the problem might be and steps that you can take
     * to correct the issue.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The status message provided for the following key-signing key (KSK) statuses:
     * <code>ACTION_NEEDED</code> or <code>INTERNAL_FAILURE</code>. The status message
     * includes information about what the problem might be and steps that you can take
     * to correct the issue.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The status message provided for the following key-signing key (KSK) statuses:
     * <code>ACTION_NEEDED</code> or <code>INTERNAL_FAILURE</code>. The status message
     * includes information about what the problem might be and steps that you can take
     * to correct the issue.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The status message provided for the following key-signing key (KSK) statuses:
     * <code>ACTION_NEEDED</code> or <code>INTERNAL_FAILURE</code>. The status message
     * includes information about what the problem might be and steps that you can take
     * to correct the issue.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The status message provided for the following key-signing key (KSK) statuses:
     * <code>ACTION_NEEDED</code> or <code>INTERNAL_FAILURE</code>. The status message
     * includes information about what the problem might be and steps that you can take
     * to correct the issue.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The status message provided for the following key-signing key (KSK) statuses:
     * <code>ACTION_NEEDED</code> or <code>INTERNAL_FAILURE</code>. The status message
     * includes information about what the problem might be and steps that you can take
     * to correct the issue.</p>
     */
    inline KeySigningKey& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The status message provided for the following key-signing key (KSK) statuses:
     * <code>ACTION_NEEDED</code> or <code>INTERNAL_FAILURE</code>. The status message
     * includes information about what the problem might be and steps that you can take
     * to correct the issue.</p>
     */
    inline KeySigningKey& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The status message provided for the following key-signing key (KSK) statuses:
     * <code>ACTION_NEEDED</code> or <code>INTERNAL_FAILURE</code>. The status message
     * includes information about what the problem might be and steps that you can take
     * to correct the issue.</p>
     */
    inline KeySigningKey& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The date when the key-signing key (KSK) was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when the key-signing key (KSK) was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date when the key-signing key (KSK) was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date when the key-signing key (KSK) was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date when the key-signing key (KSK) was created.</p>
     */
    inline KeySigningKey& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the key-signing key (KSK) was created.</p>
     */
    inline KeySigningKey& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The last time that the key-signing key (KSK) was changed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedDate() const{ return m_lastModifiedDate; }

    /**
     * <p>The last time that the key-signing key (KSK) was changed.</p>
     */
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }

    /**
     * <p>The last time that the key-signing key (KSK) was changed.</p>
     */
    inline void SetLastModifiedDate(const Aws::Utils::DateTime& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }

    /**
     * <p>The last time that the key-signing key (KSK) was changed.</p>
     */
    inline void SetLastModifiedDate(Aws::Utils::DateTime&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }

    /**
     * <p>The last time that the key-signing key (KSK) was changed.</p>
     */
    inline KeySigningKey& WithLastModifiedDate(const Aws::Utils::DateTime& value) { SetLastModifiedDate(value); return *this;}

    /**
     * <p>The last time that the key-signing key (KSK) was changed.</p>
     */
    inline KeySigningKey& WithLastModifiedDate(Aws::Utils::DateTime&& value) { SetLastModifiedDate(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_kmsArn;
    bool m_kmsArnHasBeenSet = false;

    int m_flag;
    bool m_flagHasBeenSet = false;

    Aws::String m_signingAlgorithmMnemonic;
    bool m_signingAlgorithmMnemonicHasBeenSet = false;

    int m_signingAlgorithmType;
    bool m_signingAlgorithmTypeHasBeenSet = false;

    Aws::String m_digestAlgorithmMnemonic;
    bool m_digestAlgorithmMnemonicHasBeenSet = false;

    int m_digestAlgorithmType;
    bool m_digestAlgorithmTypeHasBeenSet = false;

    int m_keyTag;
    bool m_keyTagHasBeenSet = false;

    Aws::String m_digestValue;
    bool m_digestValueHasBeenSet = false;

    Aws::String m_publicKey;
    bool m_publicKeyHasBeenSet = false;

    Aws::String m_dSRecord;
    bool m_dSRecordHasBeenSet = false;

    Aws::String m_dNSKEYRecord;
    bool m_dNSKEYRecordHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53
} // namespace Aws
