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
  class AWS_KMS_API GetParametersForImportRequest : public KMSRequest
  {
  public:
    GetParametersForImportRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetParametersForImport"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the CMK into which you will import key material. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline const Aws::String& GetKeyId() const{ return m_keyId; }

    /**
     * <p>The identifier of the CMK into which you will import key material. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline bool KeyIdHasBeenSet() const { return m_keyIdHasBeenSet; }

    /**
     * <p>The identifier of the CMK into which you will import key material. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const Aws::String& value) { m_keyIdHasBeenSet = true; m_keyId = value; }

    /**
     * <p>The identifier of the CMK into which you will import key material. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(Aws::String&& value) { m_keyIdHasBeenSet = true; m_keyId = std::move(value); }

    /**
     * <p>The identifier of the CMK into which you will import key material. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline void SetKeyId(const char* value) { m_keyIdHasBeenSet = true; m_keyId.assign(value); }

    /**
     * <p>The identifier of the CMK into which you will import key material. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline GetParametersForImportRequest& WithKeyId(const Aws::String& value) { SetKeyId(value); return *this;}

    /**
     * <p>The identifier of the CMK into which you will import key material. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline GetParametersForImportRequest& WithKeyId(Aws::String&& value) { SetKeyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the CMK into which you will import key material. The CMK's
     * <code>Origin</code> must be <code>EXTERNAL</code>.</p> <p>Specify the key ID or
     * the Amazon Resource Name (ARN) of the CMK.</p> <p>For example:</p> <ul> <li>
     * <p>Key ID: <code>1234abcd-12ab-34cd-56ef-1234567890ab</code> </p> </li> <li>
     * <p>Key ARN:
     * <code>arn:aws:kms:us-east-2:111122223333:key/1234abcd-12ab-34cd-56ef-1234567890ab</code>
     * </p> </li> </ul> <p>To get the key ID and key ARN for a CMK, use <a>ListKeys</a>
     * or <a>DescribeKey</a>.</p>
     */
    inline GetParametersForImportRequest& WithKeyId(const char* value) { SetKeyId(value); return *this;}


    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline const AlgorithmSpec& GetWrappingAlgorithm() const{ return m_wrappingAlgorithm; }

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline bool WrappingAlgorithmHasBeenSet() const { return m_wrappingAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetWrappingAlgorithm(const AlgorithmSpec& value) { m_wrappingAlgorithmHasBeenSet = true; m_wrappingAlgorithm = value; }

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline void SetWrappingAlgorithm(AlgorithmSpec&& value) { m_wrappingAlgorithmHasBeenSet = true; m_wrappingAlgorithm = std::move(value); }

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
     */
    inline GetParametersForImportRequest& WithWrappingAlgorithm(const AlgorithmSpec& value) { SetWrappingAlgorithm(value); return *this;}

    /**
     * <p>The algorithm you will use to encrypt the key material before importing it
     * with <a>ImportKeyMaterial</a>. For more information, see <a
     * href="https://docs.aws.amazon.com/kms/latest/developerguide/importing-keys-encrypt-key-material.html">Encrypt
     * the Key Material</a> in the <i>AWS Key Management Service Developer
     * Guide</i>.</p>
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
    bool m_keyIdHasBeenSet;

    AlgorithmSpec m_wrappingAlgorithm;
    bool m_wrappingAlgorithmHasBeenSet;

    WrappingKeySpec m_wrappingKeySpec;
    bool m_wrappingKeySpecHasBeenSet;
  };

} // namespace Model
} // namespace KMS
} // namespace Aws
