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
     * <p>The identifier of the symmetric encryption KMS key into which you will import
     * key material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the symmetric encryption KMS key into which you will import
     * key material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The identifier of the symmetric encryption KMS key into which you will import
     * key material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of the symmetric encryption KMS key into which you will import
     * key material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The identifier of the symmetric encryption KMS key into which you will import
     * key material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of the symmetric encryption KMS key into which you will import
     * key material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline GetParametersForImportRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the symmetric encryption KMS key into which you will import
     * key material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline GetParametersForImportRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the symmetric encryption KMS key into which you will import
     * key material. The <code>Origin</code> of the KMS key must be
     * <code>EXTERNAL</code>.</p> <p>Specify the key ID or key ARN of the KMS key.</p>
     * <p>For example:</p> <ul> <li> <p>Key ID:
     * <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li> <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a KMS key, use
     * <a>ListKeys</a> or <a>DescribeKey</a>.</p>
     */
    inline GetParametersForImportRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline const AlgorithmSpec& GetWrappingAlgorithm() const{ return m_wrappingAlgorithm; }

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline bool WrappingAlgorithmHasBeenSet() const { return m_wrappingAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetWrappingAlgorithm(const AlgorithmSpec& value) { m_wrappingAlgorithmHasBeenSet = true; m_wrappingAlgorithm = value; }

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline void SetWrappingAlgorithm(AlgorithmSpec&& value) { m_wrappingAlgorithmHasBeenSet = true; m_wrappingAlgorithm = std::move(value); }

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GetParametersForImportRequest& WithWrappingAlgorithm(const AlgorithmSpec& value) { SetWrappingAlgorithm(value); return *this;}

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>Key Management Service Developer Guide</i>.</p>
     */
    inline GetParametersForImportRequest& WithWrappingAlgorithm(AlgorithmSpec&& value) { SetWrappingAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The type of wrapping key (public key) to return in the response. Only
     * 2048-bit RSA public keys are supported.</p>
     */
    inline const WrappingKeySpec& GetWrappingKeySpec() const{ return m_wrappingKeySpec; }

    /**
     * <p>The type of wrapping key (public key) to return in the response. Only
     * 2048-bit RSA public keys are supported.</p>
     */
    inline bool WrappingKeySpecHasBeenSet() const { return m_wrappingKeySpecHasBeenSet; }

    /**
     * <p>The type of wrapping key (public key) to return in the response. Only
     * 2048-bit RSA public keys are supported.</p>
     */
    inline void SetWrappingKeySpec(const WrappingKeySpec& value) { m_wrappingKeySpecHasBeenSet = true; m_wrappingKeySpec = value; }

    /**
     * <p>The type of wrapping key (public key) to return in the response. Only
     * 2048-bit RSA public keys are supported.</p>
     */
    inline void SetWrappingKeySpec(WrappingKeySpec&& value) { m_wrappingKeySpecHasBeenSet = true; m_wrappingKeySpec = std::move(value); }

    /**
     * <p>The type of wrapping key (public key) to return in the response. Only
     * 2048-bit RSA public keys are supported.</p>
     */
    inline GetParametersForImportRequest& WithWrappingKeySpec(const WrappingKeySpec& value) { SetWrappingKeySpec(value); return *this;}

    /**
     * <p>The type of wrapping key (public key) to return in the response. Only
     * 2048-bit RSA public keys are supported.</p>
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
