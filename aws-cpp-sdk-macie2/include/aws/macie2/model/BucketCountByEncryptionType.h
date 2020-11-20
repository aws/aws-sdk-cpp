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
   * server-side encryption or don't encrypt objects by default.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCountByEncryptionType">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API BucketCountByEncryptionType
  {
  public:
    BucketCountByEncryptionType();
    BucketCountByEncryptionType(Aws::Utils::Json::JsonView jsonValue);
    BucketCountByEncryptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of buckets that use an AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to encrypt objects. These buckets use AWS managed AWS
     * KMS (AWS-KMS) encryption or customer managed AWS KMS (SSE-KMS) encryption.</p>
     */
    inline long long GetKmsManaged() const{ return m_kmsManaged; }

    /**
     * <p>The total number of buckets that use an AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to encrypt objects. These buckets use AWS managed AWS
     * KMS (AWS-KMS) encryption or customer managed AWS KMS (SSE-KMS) encryption.</p>
     */
    inline bool KmsManagedHasBeenSet() const { return m_kmsManagedHasBeenSet; }

    /**
     * <p>The total number of buckets that use an AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to encrypt objects. These buckets use AWS managed AWS
     * KMS (AWS-KMS) encryption or customer managed AWS KMS (SSE-KMS) encryption.</p>
     */
    inline void SetKmsManaged(long long value) { m_kmsManagedHasBeenSet = true; m_kmsManaged = value; }

    /**
     * <p>The total number of buckets that use an AWS Key Management Service (AWS KMS)
     * customer master key (CMK) to encrypt objects. These buckets use AWS managed AWS
     * KMS (AWS-KMS) encryption or customer managed AWS KMS (SSE-KMS) encryption.</p>
     */
    inline BucketCountByEncryptionType& WithKmsManaged(long long value) { SetKmsManaged(value); return *this;}


    /**
     * <p>The total number of buckets that use an Amazon S3 managed key to encrypt
     * objects. These buckets use Amazon S3 managed (SSE-S3) encryption.</p>
     */
    inline long long GetS3Managed() const{ return m_s3Managed; }

    /**
     * <p>The total number of buckets that use an Amazon S3 managed key to encrypt
     * objects. These buckets use Amazon S3 managed (SSE-S3) encryption.</p>
     */
    inline bool S3ManagedHasBeenSet() const { return m_s3ManagedHasBeenSet; }

    /**
     * <p>The total number of buckets that use an Amazon S3 managed key to encrypt
     * objects. These buckets use Amazon S3 managed (SSE-S3) encryption.</p>
     */
    inline void SetS3Managed(long long value) { m_s3ManagedHasBeenSet = true; m_s3Managed = value; }

    /**
     * <p>The total number of buckets that use an Amazon S3 managed key to encrypt
     * objects. These buckets use Amazon S3 managed (SSE-S3) encryption.</p>
     */
    inline BucketCountByEncryptionType& WithS3Managed(long long value) { SetS3Managed(value); return *this;}


    /**
     * <p>The total number of buckets that don't encrypt objects by default. Default
     * encryption is disabled for these buckets.</p>
     */
    inline long long GetUnencrypted() const{ return m_unencrypted; }

    /**
     * <p>The total number of buckets that don't encrypt objects by default. Default
     * encryption is disabled for these buckets.</p>
     */
    inline bool UnencryptedHasBeenSet() const { return m_unencryptedHasBeenSet; }

    /**
     * <p>The total number of buckets that don't encrypt objects by default. Default
     * encryption is disabled for these buckets.</p>
     */
    inline void SetUnencrypted(long long value) { m_unencryptedHasBeenSet = true; m_unencrypted = value; }

    /**
     * <p>The total number of buckets that don't encrypt objects by default. Default
     * encryption is disabled for these buckets.</p>
     */
    inline BucketCountByEncryptionType& WithUnencrypted(long long value) { SetUnencrypted(value); return *this;}

  private:

    long long m_kmsManaged;
    bool m_kmsManagedHasBeenSet;

    long long m_s3Managed;
    bool m_s3ManagedHasBeenSet;

    long long m_unencrypted;
    bool m_unencryptedHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
