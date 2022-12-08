/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/EncryptionMode.h>
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
namespace Synthetics
{
namespace Model
{

  /**
   * <p>A structure that contains the configuration of encryption-at-rest settings
   * for canary artifacts that the canary uploads to Amazon S3. </p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch_Synthetics_artifact_encryption.html">Encrypting
   * canary artifacts</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/S3EncryptionConfig">AWS
   * API Reference</a></p>
   */
  class S3EncryptionConfig
  {
  public:
    AWS_SYNTHETICS_API S3EncryptionConfig();
    AWS_SYNTHETICS_API S3EncryptionConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API S3EncryptionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The encryption method to use for artifacts created by this canary. Specify
     * <code>SSE_S3</code> to use server-side encryption (SSE) with an Amazon
     * S3-managed key. Specify <code>SSE-KMS</code> to use server-side encryption with
     * a customer-managed KMS key.</p> <p>If you omit this parameter, an Amazon Web
     * Services-managed KMS key is used. </p>
     */
    inline const EncryptionMode& GetEncryptionMode() const{ return m_encryptionMode; }

    /**
     * <p> The encryption method to use for artifacts created by this canary. Specify
     * <code>SSE_S3</code> to use server-side encryption (SSE) with an Amazon
     * S3-managed key. Specify <code>SSE-KMS</code> to use server-side encryption with
     * a customer-managed KMS key.</p> <p>If you omit this parameter, an Amazon Web
     * Services-managed KMS key is used. </p>
     */
    inline bool EncryptionModeHasBeenSet() const { return m_encryptionModeHasBeenSet; }

    /**
     * <p> The encryption method to use for artifacts created by this canary. Specify
     * <code>SSE_S3</code> to use server-side encryption (SSE) with an Amazon
     * S3-managed key. Specify <code>SSE-KMS</code> to use server-side encryption with
     * a customer-managed KMS key.</p> <p>If you omit this parameter, an Amazon Web
     * Services-managed KMS key is used. </p>
     */
    inline void SetEncryptionMode(const EncryptionMode& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = value; }

    /**
     * <p> The encryption method to use for artifacts created by this canary. Specify
     * <code>SSE_S3</code> to use server-side encryption (SSE) with an Amazon
     * S3-managed key. Specify <code>SSE-KMS</code> to use server-side encryption with
     * a customer-managed KMS key.</p> <p>If you omit this parameter, an Amazon Web
     * Services-managed KMS key is used. </p>
     */
    inline void SetEncryptionMode(EncryptionMode&& value) { m_encryptionModeHasBeenSet = true; m_encryptionMode = std::move(value); }

    /**
     * <p> The encryption method to use for artifacts created by this canary. Specify
     * <code>SSE_S3</code> to use server-side encryption (SSE) with an Amazon
     * S3-managed key. Specify <code>SSE-KMS</code> to use server-side encryption with
     * a customer-managed KMS key.</p> <p>If you omit this parameter, an Amazon Web
     * Services-managed KMS key is used. </p>
     */
    inline S3EncryptionConfig& WithEncryptionMode(const EncryptionMode& value) { SetEncryptionMode(value); return *this;}

    /**
     * <p> The encryption method to use for artifacts created by this canary. Specify
     * <code>SSE_S3</code> to use server-side encryption (SSE) with an Amazon
     * S3-managed key. Specify <code>SSE-KMS</code> to use server-side encryption with
     * a customer-managed KMS key.</p> <p>If you omit this parameter, an Amazon Web
     * Services-managed KMS key is used. </p>
     */
    inline S3EncryptionConfig& WithEncryptionMode(EncryptionMode&& value) { SetEncryptionMode(std::move(value)); return *this;}


    /**
     * <p>The ARN of the customer-managed KMS key to use, if you specify
     * <code>SSE-KMS</code> for <code>EncryptionMode</code> </p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the customer-managed KMS key to use, if you specify
     * <code>SSE-KMS</code> for <code>EncryptionMode</code> </p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the customer-managed KMS key to use, if you specify
     * <code>SSE-KMS</code> for <code>EncryptionMode</code> </p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the customer-managed KMS key to use, if you specify
     * <code>SSE-KMS</code> for <code>EncryptionMode</code> </p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the customer-managed KMS key to use, if you specify
     * <code>SSE-KMS</code> for <code>EncryptionMode</code> </p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the customer-managed KMS key to use, if you specify
     * <code>SSE-KMS</code> for <code>EncryptionMode</code> </p>
     */
    inline S3EncryptionConfig& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the customer-managed KMS key to use, if you specify
     * <code>SSE-KMS</code> for <code>EncryptionMode</code> </p>
     */
    inline S3EncryptionConfig& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the customer-managed KMS key to use, if you specify
     * <code>SSE-KMS</code> for <code>EncryptionMode</code> </p>
     */
    inline S3EncryptionConfig& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    EncryptionMode m_encryptionMode;
    bool m_encryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Synthetics
} // namespace Aws
