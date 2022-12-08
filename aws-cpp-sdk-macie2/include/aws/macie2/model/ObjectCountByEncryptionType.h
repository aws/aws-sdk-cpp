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
   * <p>Provides information about the number of objects that are in an S3 bucket and
   * use certain types of server-side encryption, use client-side encryption, or
   * aren't encrypted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ObjectCountByEncryptionType">AWS
   * API Reference</a></p>
   */
  class ObjectCountByEncryptionType
  {
  public:
    AWS_MACIE2_API ObjectCountByEncryptionType();
    AWS_MACIE2_API ObjectCountByEncryptionType(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ObjectCountByEncryptionType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total number of objects that are encrypted with a customer-provided key.
     * The objects use customer-provided server-side encryption (SSE-C).</p>
     */
    inline long long GetCustomerManaged() const{ return m_customerManaged; }

    /**
     * <p>The total number of objects that are encrypted with a customer-provided key.
     * The objects use customer-provided server-side encryption (SSE-C).</p>
     */
    inline bool CustomerManagedHasBeenSet() const { return m_customerManagedHasBeenSet; }

    /**
     * <p>The total number of objects that are encrypted with a customer-provided key.
     * The objects use customer-provided server-side encryption (SSE-C).</p>
     */
    inline void SetCustomerManaged(long long value) { m_customerManagedHasBeenSet = true; m_customerManaged = value; }

    /**
     * <p>The total number of objects that are encrypted with a customer-provided key.
     * The objects use customer-provided server-side encryption (SSE-C).</p>
     */
    inline ObjectCountByEncryptionType& WithCustomerManaged(long long value) { SetCustomerManaged(value); return *this;}


    /**
     * <p>The total number of objects that are encrypted with an KMS key, either an
     * Amazon Web Services managed key or a customer managed key. The objects use KMS
     * encryption (SSE-KMS).</p>
     */
    inline long long GetKmsManaged() const{ return m_kmsManaged; }

    /**
     * <p>The total number of objects that are encrypted with an KMS key, either an
     * Amazon Web Services managed key or a customer managed key. The objects use KMS
     * encryption (SSE-KMS).</p>
     */
    inline bool KmsManagedHasBeenSet() const { return m_kmsManagedHasBeenSet; }

    /**
     * <p>The total number of objects that are encrypted with an KMS key, either an
     * Amazon Web Services managed key or a customer managed key. The objects use KMS
     * encryption (SSE-KMS).</p>
     */
    inline void SetKmsManaged(long long value) { m_kmsManagedHasBeenSet = true; m_kmsManaged = value; }

    /**
     * <p>The total number of objects that are encrypted with an KMS key, either an
     * Amazon Web Services managed key or a customer managed key. The objects use KMS
     * encryption (SSE-KMS).</p>
     */
    inline ObjectCountByEncryptionType& WithKmsManaged(long long value) { SetKmsManaged(value); return *this;}


    /**
     * <p>The total number of objects that are encrypted with an Amazon S3 managed key.
     * The objects use Amazon S3 managed encryption (SSE-S3).</p>
     */
    inline long long GetS3Managed() const{ return m_s3Managed; }

    /**
     * <p>The total number of objects that are encrypted with an Amazon S3 managed key.
     * The objects use Amazon S3 managed encryption (SSE-S3).</p>
     */
    inline bool S3ManagedHasBeenSet() const { return m_s3ManagedHasBeenSet; }

    /**
     * <p>The total number of objects that are encrypted with an Amazon S3 managed key.
     * The objects use Amazon S3 managed encryption (SSE-S3).</p>
     */
    inline void SetS3Managed(long long value) { m_s3ManagedHasBeenSet = true; m_s3Managed = value; }

    /**
     * <p>The total number of objects that are encrypted with an Amazon S3 managed key.
     * The objects use Amazon S3 managed encryption (SSE-S3).</p>
     */
    inline ObjectCountByEncryptionType& WithS3Managed(long long value) { SetS3Managed(value); return *this;}


    /**
     * <p>The total number of objects that aren't encrypted or use client-side
     * encryption.</p>
     */
    inline long long GetUnencrypted() const{ return m_unencrypted; }

    /**
     * <p>The total number of objects that aren't encrypted or use client-side
     * encryption.</p>
     */
    inline bool UnencryptedHasBeenSet() const { return m_unencryptedHasBeenSet; }

    /**
     * <p>The total number of objects that aren't encrypted or use client-side
     * encryption.</p>
     */
    inline void SetUnencrypted(long long value) { m_unencryptedHasBeenSet = true; m_unencrypted = value; }

    /**
     * <p>The total number of objects that aren't encrypted or use client-side
     * encryption.</p>
     */
    inline ObjectCountByEncryptionType& WithUnencrypted(long long value) { SetUnencrypted(value); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie doesn't have current encryption
     * metadata for. Macie can't provide current data about the encryption settings for
     * these objects.</p>
     */
    inline long long GetUnknown() const{ return m_unknown; }

    /**
     * <p>The total number of objects that Amazon Macie doesn't have current encryption
     * metadata for. Macie can't provide current data about the encryption settings for
     * these objects.</p>
     */
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }

    /**
     * <p>The total number of objects that Amazon Macie doesn't have current encryption
     * metadata for. Macie can't provide current data about the encryption settings for
     * these objects.</p>
     */
    inline void SetUnknown(long long value) { m_unknownHasBeenSet = true; m_unknown = value; }

    /**
     * <p>The total number of objects that Amazon Macie doesn't have current encryption
     * metadata for. Macie can't provide current data about the encryption settings for
     * these objects.</p>
     */
    inline ObjectCountByEncryptionType& WithUnknown(long long value) { SetUnknown(value); return *this;}

  private:

    long long m_customerManaged;
    bool m_customerManagedHasBeenSet = false;

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
