/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kms/KMS_EXPORTS.h>
#include <aws/kms/KMSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kms/model/AlgorithmSpec.h>
#include <aws/kms/model/WrappingKeySpec.h>
#include <utility>

namespace Aws
{
namespace KMS
{
namespace Model
{

  /**
   */
  class GetParametersForImportRequest : public KMSRequest
  {
  public:
    AWS_KMS_API GetParametersForImportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParametersForImport"; }

    AWS_KMS_API Aws::String SerializePayload() const override;

    AWS_KMS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the KMS key that will be associated with the imported key
     * material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>All KMS key types are supported, including
     * multi-Region keys. However, you cannot import key material into a KMS key in a
     * custom key store.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the KMS key that will be associated with the imported key
     * material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>All KMS key types are supported, including
     * multi-Region keys. However, you cannot import key material into a KMS key in a
     * custom key store.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The identifier of the KMS key that will be associated with the imported key
     * material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>All KMS key types are supported, including
     * multi-Region keys. However, you cannot import key material into a KMS key in a
     * custom key store.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of the KMS key that will be associated with the imported key
     * material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>All KMS key types are supported, including
     * multi-Region keys. However, you cannot import key material into a KMS key in a
     * custom key store.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The identifier of the KMS key that will be associated with the imported key
     * material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>All KMS key types are supported, including
     * multi-Region keys. However, you cannot import key material into a KMS key in a
     * custom key store.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of the KMS key that will be associated with the imported key
     * material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>All KMS key types are supported, including
     * multi-Region keys. However, you cannot import key material into a KMS key in a
     * custom key store.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline GetParametersForImportRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the KMS key that will be associated with the imported key
     * material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>All KMS key types are supported, including
     * multi-Region keys. However, you cannot import key material into a KMS key in a
     * custom key store.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline GetParametersForImportRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the KMS key that will be associated with the imported key
     * material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>All KMS key types are supported, including
     * multi-Region keys. However, you cannot import key material into a KMS key in a
     * custom key store.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline GetParametersForImportRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The algorithm you will use with the RSA public key (<code>PublicKey</code>)
     * in the response to protect your key material during import. For more
     * information, see <a
     * href="kms/latest/developerguide/importing-keys-get-public-key-and-token.html#select-wrapping-algorithm">Select
     * a wrapping algorithm</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>For RSA_AES wrapping algorithms, you encrypt your key material
     * with an AES key that you generate, then encrypt your AES key with the RSA public
     * key from KMS. For RSAES wrapping algorithms, you encrypt your key material
     * directly with the RSA public key from KMS.</p> <p>The wrapping algorithms that
     * you can use depend on the type of key material that you are importing. To import
     * an RSA private key, you must use an RSA_AES wrapping algorithm.</p> <ul> <li>
     * <p> <b>RSA_AES_KEY_WRAP_SHA_256</b> — Supported for wrapping RSA and ECC key
     * material.</p> </li> <li> <p> <b>RSA_AES_KEY_WRAP_SHA_1</b> — Supported for
     * wrapping RSA and ECC key material.</p> </li> <li> <p> <b>RSAES_OAEP_SHA_256</b>
     * — Supported for all types of key material, except RSA key material (private
     * key).</p> <p>You cannot use the RSAES_OAEP_SHA_256 wrapping algorithm with the
     * RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key material.</p> </li> <li>
     * <p> <b>RSAES_OAEP_SHA_1</b> — Supported for all types of key material, except
     * RSA key material (private key).</p> <p>You cannot use the RSAES_OAEP_SHA_1
     * wrapping algorithm with the RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key
     * material.</p> </li> <li> <p> <b>RSAES_PKCS1_V1_5</b> (Deprecated) — As of
     * October 10, 2023, KMS does not support the RSAES_PKCS1_V1_5 wrapping
     * algorithm.</p> </li> </ul>
     */
    inline const AlgorithmSpec& GetWrappingAlgorithm() const{ return m_wrappingAlgorithm; }

    /**
     * <p>The algorithm you will use with the RSA public key (<code>PublicKey</code>)
     * in the response to protect your key material during import. For more
     * information, see <a
     * href="kms/latest/developerguide/importing-keys-get-public-key-and-token.html#select-wrapping-algorithm">Select
     * a wrapping algorithm</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>For RSA_AES wrapping algorithms, you encrypt your key material
     * with an AES key that you generate, then encrypt your AES key with the RSA public
     * key from KMS. For RSAES wrapping algorithms, you encrypt your key material
     * directly with the RSA public key from KMS.</p> <p>The wrapping algorithms that
     * you can use depend on the type of key material that you are importing. To import
     * an RSA private key, you must use an RSA_AES wrapping algorithm.</p> <ul> <li>
     * <p> <b>RSA_AES_KEY_WRAP_SHA_256</b> — Supported for wrapping RSA and ECC key
     * material.</p> </li> <li> <p> <b>RSA_AES_KEY_WRAP_SHA_1</b> — Supported for
     * wrapping RSA and ECC key material.</p> </li> <li> <p> <b>RSAES_OAEP_SHA_256</b>
     * — Supported for all types of key material, except RSA key material (private
     * key).</p> <p>You cannot use the RSAES_OAEP_SHA_256 wrapping algorithm with the
     * RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key material.</p> </li> <li>
     * <p> <b>RSAES_OAEP_SHA_1</b> — Supported for all types of key material, except
     * RSA key material (private key).</p> <p>You cannot use the RSAES_OAEP_SHA_1
     * wrapping algorithm with the RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key
     * material.</p> </li> <li> <p> <b>RSAES_PKCS1_V1_5</b> (Deprecated) — As of
     * October 10, 2023, KMS does not support the RSAES_PKCS1_V1_5 wrapping
     * algorithm.</p> </li> </ul>
     */
    inline bool WrappingAlgorithmHasBeenSet() const { return m_wrappingAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm you will use with the RSA public key (<code>PublicKey</code>)
     * in the response to protect your key material during import. For more
     * information, see <a
     * href="kms/latest/developerguide/importing-keys-get-public-key-and-token.html#select-wrapping-algorithm">Select
     * a wrapping algorithm</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>For RSA_AES wrapping algorithms, you encrypt your key material
     * with an AES key that you generate, then encrypt your AES key with the RSA public
     * key from KMS. For RSAES wrapping algorithms, you encrypt your key material
     * directly with the RSA public key from KMS.</p> <p>The wrapping algorithms that
     * you can use depend on the type of key material that you are importing. To import
     * an RSA private key, you must use an RSA_AES wrapping algorithm.</p> <ul> <li>
     * <p> <b>RSA_AES_KEY_WRAP_SHA_256</b> — Supported for wrapping RSA and ECC key
     * material.</p> </li> <li> <p> <b>RSA_AES_KEY_WRAP_SHA_1</b> — Supported for
     * wrapping RSA and ECC key material.</p> </li> <li> <p> <b>RSAES_OAEP_SHA_256</b>
     * — Supported for all types of key material, except RSA key material (private
     * key).</p> <p>You cannot use the RSAES_OAEP_SHA_256 wrapping algorithm with the
     * RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key material.</p> </li> <li>
     * <p> <b>RSAES_OAEP_SHA_1</b> — Supported for all types of key material, except
     * RSA key material (private key).</p> <p>You cannot use the RSAES_OAEP_SHA_1
     * wrapping algorithm with the RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key
     * material.</p> </li> <li> <p> <b>RSAES_PKCS1_V1_5</b> (Deprecated) — As of
     * October 10, 2023, KMS does not support the RSAES_PKCS1_V1_5 wrapping
     * algorithm.</p> </li> </ul>
     */
    inline void SetWrappingAlgorithm(const AlgorithmSpec& value) { m_wrappingAlgorithmHasBeenSet = true; m_wrappingAlgorithm = value; }

    /**
     * <p>The algorithm you will use with the RSA public key (<code>PublicKey</code>)
     * in the response to protect your key material during import. For more
     * information, see <a
     * href="kms/latest/developerguide/importing-keys-get-public-key-and-token.html#select-wrapping-algorithm">Select
     * a wrapping algorithm</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>For RSA_AES wrapping algorithms, you encrypt your key material
     * with an AES key that you generate, then encrypt your AES key with the RSA public
     * key from KMS. For RSAES wrapping algorithms, you encrypt your key material
     * directly with the RSA public key from KMS.</p> <p>The wrapping algorithms that
     * you can use depend on the type of key material that you are importing. To import
     * an RSA private key, you must use an RSA_AES wrapping algorithm.</p> <ul> <li>
     * <p> <b>RSA_AES_KEY_WRAP_SHA_256</b> — Supported for wrapping RSA and ECC key
     * material.</p> </li> <li> <p> <b>RSA_AES_KEY_WRAP_SHA_1</b> — Supported for
     * wrapping RSA and ECC key material.</p> </li> <li> <p> <b>RSAES_OAEP_SHA_256</b>
     * — Supported for all types of key material, except RSA key material (private
     * key).</p> <p>You cannot use the RSAES_OAEP_SHA_256 wrapping algorithm with the
     * RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key material.</p> </li> <li>
     * <p> <b>RSAES_OAEP_SHA_1</b> — Supported for all types of key material, except
     * RSA key material (private key).</p> <p>You cannot use the RSAES_OAEP_SHA_1
     * wrapping algorithm with the RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key
     * material.</p> </li> <li> <p> <b>RSAES_PKCS1_V1_5</b> (Deprecated) — As of
     * October 10, 2023, KMS does not support the RSAES_PKCS1_V1_5 wrapping
     * algorithm.</p> </li> </ul>
     */
    inline void SetWrappingAlgorithm(AlgorithmSpec&& value) { m_wrappingAlgorithmHasBeenSet = true; m_wrappingAlgorithm = std::move(value); }

    /**
     * <p>The algorithm you will use with the RSA public key (<code>PublicKey</code>)
     * in the response to protect your key material during import. For more
     * information, see <a
     * href="kms/latest/developerguide/importing-keys-get-public-key-and-token.html#select-wrapping-algorithm">Select
     * a wrapping algorithm</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>For RSA_AES wrapping algorithms, you encrypt your key material
     * with an AES key that you generate, then encrypt your AES key with the RSA public
     * key from KMS. For RSAES wrapping algorithms, you encrypt your key material
     * directly with the RSA public key from KMS.</p> <p>The wrapping algorithms that
     * you can use depend on the type of key material that you are importing. To import
     * an RSA private key, you must use an RSA_AES wrapping algorithm.</p> <ul> <li>
     * <p> <b>RSA_AES_KEY_WRAP_SHA_256</b> — Supported for wrapping RSA and ECC key
     * material.</p> </li> <li> <p> <b>RSA_AES_KEY_WRAP_SHA_1</b> — Supported for
     * wrapping RSA and ECC key material.</p> </li> <li> <p> <b>RSAES_OAEP_SHA_256</b>
     * — Supported for all types of key material, except RSA key material (private
     * key).</p> <p>You cannot use the RSAES_OAEP_SHA_256 wrapping algorithm with the
     * RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key material.</p> </li> <li>
     * <p> <b>RSAES_OAEP_SHA_1</b> — Supported for all types of key material, except
     * RSA key material (private key).</p> <p>You cannot use the RSAES_OAEP_SHA_1
     * wrapping algorithm with the RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key
     * material.</p> </li> <li> <p> <b>RSAES_PKCS1_V1_5</b> (Deprecated) — As of
     * October 10, 2023, KMS does not support the RSAES_PKCS1_V1_5 wrapping
     * algorithm.</p> </li> </ul>
     */
    inline GetParametersForImportRequest& WithWrappingAlgorithm(const AlgorithmSpec& value) { SetWrappingAlgorithm(value); return *this;}

    /**
     * <p>The algorithm you will use with the RSA public key (<code>PublicKey</code>)
     * in the response to protect your key material during import. For more
     * information, see <a
     * href="kms/latest/developerguide/importing-keys-get-public-key-and-token.html#select-wrapping-algorithm">Select
     * a wrapping algorithm</a> in the <i>Key Management Service Developer
     * Guide</i>.</p> <p>For RSA_AES wrapping algorithms, you encrypt your key material
     * with an AES key that you generate, then encrypt your AES key with the RSA public
     * key from KMS. For RSAES wrapping algorithms, you encrypt your key material
     * directly with the RSA public key from KMS.</p> <p>The wrapping algorithms that
     * you can use depend on the type of key material that you are importing. To import
     * an RSA private key, you must use an RSA_AES wrapping algorithm.</p> <ul> <li>
     * <p> <b>RSA_AES_KEY_WRAP_SHA_256</b> — Supported for wrapping RSA and ECC key
     * material.</p> </li> <li> <p> <b>RSA_AES_KEY_WRAP_SHA_1</b> — Supported for
     * wrapping RSA and ECC key material.</p> </li> <li> <p> <b>RSAES_OAEP_SHA_256</b>
     * — Supported for all types of key material, except RSA key material (private
     * key).</p> <p>You cannot use the RSAES_OAEP_SHA_256 wrapping algorithm with the
     * RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key material.</p> </li> <li>
     * <p> <b>RSAES_OAEP_SHA_1</b> — Supported for all types of key material, except
     * RSA key material (private key).</p> <p>You cannot use the RSAES_OAEP_SHA_1
     * wrapping algorithm with the RSA_2048 wrapping key spec to wrap ECC_NIST_P521 key
     * material.</p> </li> <li> <p> <b>RSAES_PKCS1_V1_5</b> (Deprecated) — As of
     * October 10, 2023, KMS does not support the RSAES_PKCS1_V1_5 wrapping
     * algorithm.</p> </li> </ul>
     */
    inline GetParametersForImportRequest& WithWrappingAlgorithm(AlgorithmSpec&& value) { SetWrappingAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The type of RSA public key to return in the response. You will use this
     * wrapping key with the specified wrapping algorithm to protect your key material
     * during import. </p> <p>Use the longest RSA wrapping key that is practical. </p>
     * <p>You cannot use an RSA_2048 public key to directly wrap an ECC_NIST_P521
     * private key. Instead, use an RSA_AES wrapping algorithm or choose a longer RSA
     * public key.</p>
     */
    inline const WrappingKeySpec& GetWrappingKeySpec() const{ return m_wrappingKeySpec; }

    /**
     * <p>The type of RSA public key to return in the response. You will use this
     * wrapping key with the specified wrapping algorithm to protect your key material
     * during import. </p> <p>Use the longest RSA wrapping key that is practical. </p>
     * <p>You cannot use an RSA_2048 public key to directly wrap an ECC_NIST_P521
     * private key. Instead, use an RSA_AES wrapping algorithm or choose a longer RSA
     * public key.</p>
     */
    inline bool WrappingKeySpecHasBeenSet() const { return m_wrappingKeySpecHasBeenSet; }

    /**
     * <p>The type of RSA public key to return in the response. You will use this
     * wrapping key with the specified wrapping algorithm to protect your key material
     * during import. </p> <p>Use the longest RSA wrapping key that is practical. </p>
     * <p>You cannot use an RSA_2048 public key to directly wrap an ECC_NIST_P521
     * private key. Instead, use an RSA_AES wrapping algorithm or choose a longer RSA
     * public key.</p>
     */
    inline void SetWrappingKeySpec(const WrappingKeySpec& value) { m_wrappingKeySpecHasBeenSet = true; m_wrappingKeySpec = value; }

    /**
     * <p>The type of RSA public key to return in the response. You will use this
     * wrapping key with the specified wrapping algorithm to protect your key material
     * during import. </p> <p>Use the longest RSA wrapping key that is practical. </p>
     * <p>You cannot use an RSA_2048 public key to directly wrap an ECC_NIST_P521
     * private key. Instead, use an RSA_AES wrapping algorithm or choose a longer RSA
     * public key.</p>
     */
    inline void SetWrappingKeySpec(WrappingKeySpec&& value) { m_wrappingKeySpecHasBeenSet = true; m_wrappingKeySpec = std::move(value); }

    /**
     * <p>The type of RSA public key to return in the response. You will use this
     * wrapping key with the specified wrapping algorithm to protect your key material
     * during import. </p> <p>Use the longest RSA wrapping key that is practical. </p>
     * <p>You cannot use an RSA_2048 public key to directly wrap an ECC_NIST_P521
     * private key. Instead, use an RSA_AES wrapping algorithm or choose a longer RSA
     * public key.</p>
     */
    inline GetParametersForImportRequest& WithWrappingKeySpec(const WrappingKeySpec& value) { SetWrappingKeySpec(value); return *this;}

    /**
     * <p>The type of RSA public key to return in the response. You will use this
     * wrapping key with the specified wrapping algorithm to protect your key material
     * during import. </p> <p>Use the longest RSA wrapping key that is practical. </p>
     * <p>You cannot use an RSA_2048 public key to directly wrap an ECC_NIST_P521
     * private key. Instead, use an RSA_AES wrapping algorithm or choose a longer RSA
     * public key.</p>
     */
    inline GetParametersForImportRequest& WithWrappingKeySpec(WrappingKeySpec&& value) { SetWrappingKeySpec(std::move(value)); return *this;}

  private:

    Aws::String m_keyId;
    bool m_keyIdHasBeenSet = false;

    AlgorithmSpec m_wrappingAlgorithm;
    bool m_wrappingAlgorithmHasBeenSet = false;

    WrappingKeySpec m_wrappingKeySpec;
    bool m_wrappingKeySpecHasBeenSet = false;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
