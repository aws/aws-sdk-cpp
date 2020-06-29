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
   * <p>The total number of buckets, grouped by server-side encryption type. This
   * object also reports the total number of buckets that aren't
   * encrypted.</p><p><h3>See Also:</h3>   <a
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
     * <p>Reserved for future use.</p>
     */
    inline long long GetKmsManaged() const{ return m_kmsManaged; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool KmsManagedHasBeenSet() const { return m_kmsManagedHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetKmsManaged(long long value) { m_kmsManagedHasBeenSet = true; m_kmsManaged = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline BucketCountByEncryptionType& WithKmsManaged(long long value) { SetKmsManaged(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetS3Managed() const{ return m_s3Managed; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool S3ManagedHasBeenSet() const { return m_s3ManagedHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetS3Managed(long long value) { m_s3ManagedHasBeenSet = true; m_s3Managed = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline BucketCountByEncryptionType& WithS3Managed(long long value) { SetS3Managed(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline long long GetUnencrypted() const{ return m_unencrypted; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool UnencryptedHasBeenSet() const { return m_unencryptedHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetUnencrypted(long long value) { m_unencryptedHasBeenSet = true; m_unencrypted = value; }

    /**
     * <p>Reserved for future use.</p>
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
