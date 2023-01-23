/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/S3EncryptionMode.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies how Amazon Simple Storage Service (Amazon S3) data should be
   * encrypted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/S3Encryption">AWS
   * API Reference</a></p>
   */
  class S3Encryption
  {
  public:
    AWS_GLUE_API S3Encryption();
    AWS_GLUE_API S3Encryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API S3Encryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption mode to use for Amazon S3 data.</p>
     */
    inline const S3EncryptionMode& GetS3EncryptionMode() const{ return m_s3EncryptionMode; }

    /**
     * <p>The encryption mode to use for Amazon S3 data.</p>
     */
    inline bool S3EncryptionModeHasBeenSet() const { return m_s3EncryptionModeHasBeenSet; }

    /**
     * <p>The encryption mode to use for Amazon S3 data.</p>
     */
    inline void SetS3EncryptionMode(const S3EncryptionMode& value) { m_s3EncryptionModeHasBeenSet = true; m_s3EncryptionMode = value; }

    /**
     * <p>The encryption mode to use for Amazon S3 data.</p>
     */
    inline void SetS3EncryptionMode(S3EncryptionMode&& value) { m_s3EncryptionModeHasBeenSet = true; m_s3EncryptionMode = std::move(value); }

    /**
     * <p>The encryption mode to use for Amazon S3 data.</p>
     */
    inline S3Encryption& WithS3EncryptionMode(const S3EncryptionMode& value) { SetS3EncryptionMode(value); return *this;}

    /**
     * <p>The encryption mode to use for Amazon S3 data.</p>
     */
    inline S3Encryption& WithS3EncryptionMode(S3EncryptionMode&& value) { SetS3EncryptionMode(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline S3Encryption& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline S3Encryption& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline S3Encryption& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    S3EncryptionMode m_s3EncryptionMode;
    bool m_s3EncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
