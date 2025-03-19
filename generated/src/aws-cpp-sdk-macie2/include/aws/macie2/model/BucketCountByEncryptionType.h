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
   * <p>Provides information about the number of S3 buckets whose settings do or
   * don't specify default server-side encryption behavior for objects that are added
   * to the buckets. For detailed information about these settings, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/bucket-encryption.html">Setting
   * default server-side encryption behavior for Amazon S3 buckets</a> in the
   * <i>Amazon Simple Storage Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketCountByEncryptionType">AWS
   * API Reference</a></p>
   */
  class BucketCountByEncryptionType
  {
  public:
    AWS_MACIE2_API BucketCountByEncryptionType() = default;
    AWS_MACIE2_API BucketCountByEncryptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketCountByEncryptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total number of buckets whose default encryption settings are configured
     * to encrypt new objects with an KMS key, either an Amazon Web Services managed
     * key or a customer managed key. By default, these buckets encrypt new objects
     * automatically using DSSE-KMS or SSE-KMS encryption.</p>
     */
    inline long long GetKmsManaged() const { return m_kmsManaged; }
    inline bool KmsManagedHasBeenSet() const { return m_kmsManagedHasBeenSet; }
    inline void SetKmsManaged(long long value) { m_kmsManagedHasBeenSet = true; m_kmsManaged = value; }
    inline BucketCountByEncryptionType& WithKmsManaged(long long value) { SetKmsManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets whose default encryption settings are configured
     * to encrypt new objects with an Amazon S3 managed key. By default, these buckets
     * encrypt new objects automatically using SSE-S3 encryption.</p>
     */
    inline long long GetS3Managed() const { return m_s3Managed; }
    inline bool S3ManagedHasBeenSet() const { return m_s3ManagedHasBeenSet; }
    inline void SetS3Managed(long long value) { m_s3ManagedHasBeenSet = true; m_s3Managed = value; }
    inline BucketCountByEncryptionType& WithS3Managed(long long value) { SetS3Managed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that don't specify default server-side encryption
     * behavior for new objects. Default encryption settings aren't configured for
     * these buckets.</p>
     */
    inline long long GetUnencrypted() const { return m_unencrypted; }
    inline bool UnencryptedHasBeenSet() const { return m_unencryptedHasBeenSet; }
    inline void SetUnencrypted(long long value) { m_unencryptedHasBeenSet = true; m_unencrypted = value; }
    inline BucketCountByEncryptionType& WithUnencrypted(long long value) { SetUnencrypted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that Amazon Macie doesn't have current encryption
     * metadata for. For example, the buckets' permissions settings or a quota
     * prevented Macie from retrieving the default encryption settings for the
     * buckets.</p>
     */
    inline long long GetUnknown() const { return m_unknown; }
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }
    inline void SetUnknown(long long value) { m_unknownHasBeenSet = true; m_unknown = value; }
    inline BucketCountByEncryptionType& WithUnknown(long long value) { SetUnknown(value); return *this;}
    ///@}
  private:

    long long m_kmsManaged{0};
    bool m_kmsManagedHasBeenSet = false;

    long long m_s3Managed{0};
    bool m_s3ManagedHasBeenSet = false;

    long long m_unencrypted{0};
    bool m_unencryptedHasBeenSet = false;

    long long m_unknown{0};
    bool m_unknownHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
