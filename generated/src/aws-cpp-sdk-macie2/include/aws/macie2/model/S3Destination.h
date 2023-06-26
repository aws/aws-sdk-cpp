/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies an S3 bucket to store data classification results in, and the
   * encryption settings to use when storing results in that bucket.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/S3Destination">AWS
   * API Reference</a></p>
   */
  class S3Destination
  {
  public:
    AWS_MACIE2_API S3Destination();
    AWS_MACIE2_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the bucket.</p>
     */
    inline S3Destination& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline S3Destination& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline S3Destination& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline S3Destination& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline S3Destination& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The path prefix to use in the path to the location in the bucket. This prefix
     * specifies where to store classification results in the bucket.</p>
     */
    inline S3Destination& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to use for
     * encryption of the results. This must be the ARN of an existing, symmetric
     * encryption KMS key that's in the same Amazon Web Services Region as the
     * bucket.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to use for
     * encryption of the results. This must be the ARN of an existing, symmetric
     * encryption KMS key that's in the same Amazon Web Services Region as the
     * bucket.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to use for
     * encryption of the results. This must be the ARN of an existing, symmetric
     * encryption KMS key that's in the same Amazon Web Services Region as the
     * bucket.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to use for
     * encryption of the results. This must be the ARN of an existing, symmetric
     * encryption KMS key that's in the same Amazon Web Services Region as the
     * bucket.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to use for
     * encryption of the results. This must be the ARN of an existing, symmetric
     * encryption KMS key that's in the same Amazon Web Services Region as the
     * bucket.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to use for
     * encryption of the results. This must be the ARN of an existing, symmetric
     * encryption KMS key that's in the same Amazon Web Services Region as the
     * bucket.</p>
     */
    inline S3Destination& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to use for
     * encryption of the results. This must be the ARN of an existing, symmetric
     * encryption KMS key that's in the same Amazon Web Services Region as the
     * bucket.</p>
     */
    inline S3Destination& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to use for
     * encryption of the results. This must be the ARN of an existing, symmetric
     * encryption KMS key that's in the same Amazon Web Services Region as the
     * bucket.</p>
     */
    inline S3Destination& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
