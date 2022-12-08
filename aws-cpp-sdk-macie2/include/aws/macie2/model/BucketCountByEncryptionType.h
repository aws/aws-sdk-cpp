/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>

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
   * <p>Provides information about the number of S3 buckets that use certain types of
   * server-side encryption by default or don't encrypt new objects by default. For
   * detailed information about these settings, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucket-encryption.html">Setting
   * default server-side encryption behavior for Amazon S3 buckets</a> in the
   * <i>Amazon Simple Storage Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCountByEncryptionType">AWS
   * API Reference</a></p>
   */
  class BucketCountByEncryptionType
  {
  public:
    AWS_MACIE2_API BucketCountByEncryptionType();
    AWS_MACIE2_API BucketCountByEncryptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketCountByEncryptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of buckets that use an KMS key to encrypt new objects by
     * default, either an Amazon Web Services managed key or a customer managed key.
     * These buckets use KMS encryption (SSE-KMS) by default.</p>
     */
    inline long long GetKmsManaged() const{ return m_kmsManaged; }

    /**
     * <p>The total number of buckets that use an KMS key to encrypt new objects by
     * default, either an Amazon Web Services managed key or a customer managed key.
     * These buckets use KMS encryption (SSE-KMS) by default.</p>
     */
    inline bool KmsManagedHasBeenSet() const { return m_kmsManagedHasBeenSet; }

    /**
     * <p>The total number of buckets that use an KMS key to encrypt new objects by
     * default, either an Amazon Web Services managed key or a customer managed key.
     * These buckets use KMS encryption (SSE-KMS) by default.</p>
     */
    inline void SetKmsManaged(long long value) { m_kmsManagedHasBeenSet = true; m_kmsManaged = value; }

    /**
     * <p>The total number of buckets that use an KMS key to encrypt new objects by
     * default, either an Amazon Web Services managed key or a customer managed key.
     * These buckets use KMS encryption (SSE-KMS) by default.</p>
     */
    inline BucketCountByEncryptionType& WithKmsManaged(long long value) { SetKmsManaged(value); return *this;}


    /**
     * <p>The total number of buckets that use an Amazon S3 managed key to encrypt new
     * objects by default. These buckets use Amazon S3 managed encryption (SSE-S3) by
     * default.</p>
     */
    inline long long GetS3Managed() const{ return m_s3Managed; }

    /**
     * <p>The total number of buckets that use an Amazon S3 managed key to encrypt new
     * objects by default. These buckets use Amazon S3 managed encryption (SSE-S3) by
     * default.</p>
     */
    inline bool S3ManagedHasBeenSet() const { return m_s3ManagedHasBeenSet; }

    /**
     * <p>The total number of buckets that use an Amazon S3 managed key to encrypt new
     * objects by default. These buckets use Amazon S3 managed encryption (SSE-S3) by
     * default.</p>
     */
    inline void SetS3Managed(long long value) { m_s3ManagedHasBeenSet = true; m_s3Managed = value; }

    /**
     * <p>The total number of buckets that use an Amazon S3 managed key to encrypt new
     * objects by default. These buckets use Amazon S3 managed encryption (SSE-S3) by
     * default.</p>
     */
    inline BucketCountByEncryptionType& WithS3Managed(long long value) { SetS3Managed(value); return *this;}


    /**
     * <p>The total number of buckets that don't encrypt new objects by default.
     * Default encryption is disabled for these buckets.</p>
     */
    inline long long GetUnencrypted() const{ return m_unencrypted; }

    /**
     * <p>The total number of buckets that don't encrypt new objects by default.
     * Default encryption is disabled for these buckets.</p>
     */
    inline bool UnencryptedHasBeenSet() const { return m_unencryptedHasBeenSet; }

    /**
     * <p>The total number of buckets that don't encrypt new objects by default.
     * Default encryption is disabled for these buckets.</p>
     */
    inline void SetUnencrypted(long long value) { m_unencryptedHasBeenSet = true; m_unencrypted = value; }

    /**
     * <p>The total number of buckets that don't encrypt new objects by default.
     * Default encryption is disabled for these buckets.</p>
     */
    inline BucketCountByEncryptionType& WithUnencrypted(long long value) { SetUnencrypted(value); return *this;}


    /**
     * <p>The total number of buckets that Amazon Macie doesn't have current encryption
     * metadata for. Macie can't provide current data about the default encryption
     * settings for these buckets.</p>
     */
    inline long long GetUnknown() const{ return m_unknown; }

    /**
     * <p>The total number of buckets that Amazon Macie doesn't have current encryption
     * metadata for. Macie can't provide current data about the default encryption
     * settings for these buckets.</p>
     */
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }

    /**
     * <p>The total number of buckets that Amazon Macie doesn't have current encryption
     * metadata for. Macie can't provide current data about the default encryption
     * settings for these buckets.</p>
     */
    inline void SetUnknown(long long value) { m_unknownHasBeenSet = true; m_unknown = value; }

    /**
     * <p>The total number of buckets that Amazon Macie doesn't have current encryption
     * metadata for. Macie can't provide current data about the default encryption
     * settings for these buckets.</p>
     */
    inline BucketCountByEncryptionType& WithUnknown(long long value) { SetUnknown(value); return *this;}

  private:

    long long m_kmsManaged;
    bool m_kmsManagedHasBeenSet = false;

    long long m_s3Managed;
    bool m_s3ManagedHasBeenSet = false;

    long long m_unencrypted;
    bool m_unencryptedHasBeenSet = false;

    long long m_unknown;
    bool m_unknownHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
