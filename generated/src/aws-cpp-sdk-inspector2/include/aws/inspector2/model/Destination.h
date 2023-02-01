/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>Contains details of the Amazon S3 bucket and KMS key used to export
   * findings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/Destination">AWS
   * API Reference</a></p>
   */
  class Destination
  {
  public:
    AWS_INSPECTOR2_API Destination();
    AWS_INSPECTOR2_API Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket to export findings to.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the Amazon S3 bucket to export findings to.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket to export findings to.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the Amazon S3 bucket to export findings to.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket to export findings to.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket to export findings to.</p>
     */
    inline Destination& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to export findings to.</p>
     */
    inline Destination& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket to export findings to.</p>
     */
    inline Destination& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The prefix of the KMS key used to export findings.</p>
     */
    inline const Aws::String& GetKeyPrefix() const{ return m_keyPrefix; }

    /**
     * <p>The prefix of the KMS key used to export findings.</p>
     */
    inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }

    /**
     * <p>The prefix of the KMS key used to export findings.</p>
     */
    inline void SetKeyPrefix(const Aws::String& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = value; }

    /**
     * <p>The prefix of the KMS key used to export findings.</p>
     */
    inline void SetKeyPrefix(Aws::String&& value) { m_keyPrefixHasBeenSet = true; m_keyPrefix = std::move(value); }

    /**
     * <p>The prefix of the KMS key used to export findings.</p>
     */
    inline void SetKeyPrefix(const char* value) { m_keyPrefixHasBeenSet = true; m_keyPrefix.assign(value); }

    /**
     * <p>The prefix of the KMS key used to export findings.</p>
     */
    inline Destination& WithKeyPrefix(const Aws::String& value) { SetKeyPrefix(value); return *this;}

    /**
     * <p>The prefix of the KMS key used to export findings.</p>
     */
    inline Destination& WithKeyPrefix(Aws::String&& value) { SetKeyPrefix(std::move(value)); return *this;}

    /**
     * <p>The prefix of the KMS key used to export findings.</p>
     */
    inline Destination& WithKeyPrefix(const char* value) { SetKeyPrefix(value); return *this;}


    /**
     * <p>The ARN of the KMS key used to encrypt data when exporting findings.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The ARN of the KMS key used to encrypt data when exporting findings.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The ARN of the KMS key used to encrypt data when exporting findings.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The ARN of the KMS key used to encrypt data when exporting findings.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The ARN of the KMS key used to encrypt data when exporting findings.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The ARN of the KMS key used to encrypt data when exporting findings.</p>
     */
    inline Destination& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The ARN of the KMS key used to encrypt data when exporting findings.</p>
     */
    inline Destination& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the KMS key used to encrypt data when exporting findings.</p>
     */
    inline Destination& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}

  private:

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    Aws::String m_keyPrefix;
    bool m_keyPrefixHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
