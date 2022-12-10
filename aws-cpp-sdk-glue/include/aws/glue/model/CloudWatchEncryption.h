/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/CloudWatchEncryptionMode.h>
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
   * <p>Specifies how Amazon CloudWatch data should be encrypted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CloudWatchEncryption">AWS
   * API Reference</a></p>
   */
  class CloudWatchEncryption
  {
  public:
    AWS_GLUE_API CloudWatchEncryption();
    AWS_GLUE_API CloudWatchEncryption(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CloudWatchEncryption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline const CloudWatchEncryptionMode& GetCloudWatchEncryptionMode() const{ return m_cloudWatchEncryptionMode; }

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline bool CloudWatchEncryptionModeHasBeenSet() const { return m_cloudWatchEncryptionModeHasBeenSet; }

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline void SetCloudWatchEncryptionMode(const CloudWatchEncryptionMode& value) { m_cloudWatchEncryptionModeHasBeenSet = true; m_cloudWatchEncryptionMode = value; }

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline void SetCloudWatchEncryptionMode(CloudWatchEncryptionMode&& value) { m_cloudWatchEncryptionModeHasBeenSet = true; m_cloudWatchEncryptionMode = std::move(value); }

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline CloudWatchEncryption& WithCloudWatchEncryptionMode(const CloudWatchEncryptionMode& value) { SetCloudWatchEncryptionMode(value); return *this;}

    /**
     * <p>The encryption mode to use for CloudWatch data.</p>
     */
    inline CloudWatchEncryption& WithCloudWatchEncryptionMode(CloudWatchEncryptionMode&& value) { SetCloudWatchEncryptionMode(std::move(value)); return *this;}


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
    inline CloudWatchEncryption& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline CloudWatchEncryption& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key to be used to encrypt the
     * data.</p>
     */
    inline CloudWatchEncryption& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    CloudWatchEncryptionMode m_cloudWatchEncryptionMode;
    bool m_cloudWatchEncryptionModeHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
