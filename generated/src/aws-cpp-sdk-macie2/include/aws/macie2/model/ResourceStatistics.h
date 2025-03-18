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
   * <p>Provides statistical data for sensitive data discovery metrics that apply to
   * an S3 bucket that Amazon Macie monitors and analyzes for an account, if
   * automated sensitive data discovery has been enabled for the account. The data
   * captures the results of automated sensitive data discovery activities that Macie
   * has performed for the bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ResourceStatistics">AWS
   * API Reference</a></p>
   */
  class ResourceStatistics
  {
  public:
    AWS_MACIE2_API ResourceStatistics() = default;
    AWS_MACIE2_API ResourceStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ResourceStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total amount of data, in bytes, that Amazon Macie has analyzed in the
     * bucket.</p>
     */
    inline long long GetTotalBytesClassified() const { return m_totalBytesClassified; }
    inline bool TotalBytesClassifiedHasBeenSet() const { return m_totalBytesClassifiedHasBeenSet; }
    inline void SetTotalBytesClassified(long long value) { m_totalBytesClassifiedHasBeenSet = true; m_totalBytesClassified = value; }
    inline ResourceStatistics& WithTotalBytesClassified(long long value) { SetTotalBytesClassified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of occurrences of sensitive data that Amazon Macie has found
     * in the bucket's objects. This includes occurrences that are currently suppressed
     * by the sensitivity scoring settings for the bucket
     * (totalDetectionsSuppressed).</p>
     */
    inline long long GetTotalDetections() const { return m_totalDetections; }
    inline bool TotalDetectionsHasBeenSet() const { return m_totalDetectionsHasBeenSet; }
    inline void SetTotalDetections(long long value) { m_totalDetectionsHasBeenSet = true; m_totalDetections = value; }
    inline ResourceStatistics& WithTotalDetections(long long value) { SetTotalDetections(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of occurrences of sensitive data that are currently
     * suppressed by the sensitivity scoring settings for the bucket. These represent
     * occurrences of sensitive data that Amazon Macie found in the bucket's objects,
     * but the occurrences were manually suppressed. By default, suppressed occurrences
     * are excluded from the bucket's sensitivity score.</p>
     */
    inline long long GetTotalDetectionsSuppressed() const { return m_totalDetectionsSuppressed; }
    inline bool TotalDetectionsSuppressedHasBeenSet() const { return m_totalDetectionsSuppressedHasBeenSet; }
    inline void SetTotalDetectionsSuppressed(long long value) { m_totalDetectionsSuppressedHasBeenSet = true; m_totalDetectionsSuppressed = value; }
    inline ResourceStatistics& WithTotalDetectionsSuppressed(long long value) { SetTotalDetectionsSuppressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie has analyzed in the bucket.</p>
     */
    inline long long GetTotalItemsClassified() const { return m_totalItemsClassified; }
    inline bool TotalItemsClassifiedHasBeenSet() const { return m_totalItemsClassifiedHasBeenSet; }
    inline void SetTotalItemsClassified(long long value) { m_totalItemsClassifiedHasBeenSet = true; m_totalItemsClassified = value; }
    inline ResourceStatistics& WithTotalItemsClassified(long long value) { SetTotalItemsClassified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of the bucket's objects that Amazon Macie has found
     * sensitive data in.</p>
     */
    inline long long GetTotalItemsSensitive() const { return m_totalItemsSensitive; }
    inline bool TotalItemsSensitiveHasBeenSet() const { return m_totalItemsSensitiveHasBeenSet; }
    inline void SetTotalItemsSensitive(long long value) { m_totalItemsSensitiveHasBeenSet = true; m_totalItemsSensitive = value; }
    inline ResourceStatistics& WithTotalItemsSensitive(long long value) { SetTotalItemsSensitive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie wasn't able to analyze in the
     * bucket due to an object-level issue or error. For example, an object is a
     * malformed file. This value includes objects that Macie wasn't able to analyze
     * for reasons reported by other statistics in the ResourceStatistics object.</p>
     */
    inline long long GetTotalItemsSkipped() const { return m_totalItemsSkipped; }
    inline bool TotalItemsSkippedHasBeenSet() const { return m_totalItemsSkippedHasBeenSet; }
    inline void SetTotalItemsSkipped(long long value) { m_totalItemsSkippedHasBeenSet = true; m_totalItemsSkipped = value; }
    inline ResourceStatistics& WithTotalItemsSkipped(long long value) { SetTotalItemsSkipped(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie wasn't able to analyze in the
     * bucket because the objects are encrypted with a key that Macie can't access. The
     * objects use server-side encryption with customer-provided keys (SSE-C).</p>
     */
    inline long long GetTotalItemsSkippedInvalidEncryption() const { return m_totalItemsSkippedInvalidEncryption; }
    inline bool TotalItemsSkippedInvalidEncryptionHasBeenSet() const { return m_totalItemsSkippedInvalidEncryptionHasBeenSet; }
    inline void SetTotalItemsSkippedInvalidEncryption(long long value) { m_totalItemsSkippedInvalidEncryptionHasBeenSet = true; m_totalItemsSkippedInvalidEncryption = value; }
    inline ResourceStatistics& WithTotalItemsSkippedInvalidEncryption(long long value) { SetTotalItemsSkippedInvalidEncryption(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie wasn't able to analyze in the
     * bucket because the objects are encrypted with KMS keys that were disabled, are
     * scheduled for deletion, or were deleted.</p>
     */
    inline long long GetTotalItemsSkippedInvalidKms() const { return m_totalItemsSkippedInvalidKms; }
    inline bool TotalItemsSkippedInvalidKmsHasBeenSet() const { return m_totalItemsSkippedInvalidKmsHasBeenSet; }
    inline void SetTotalItemsSkippedInvalidKms(long long value) { m_totalItemsSkippedInvalidKmsHasBeenSet = true; m_totalItemsSkippedInvalidKms = value; }
    inline ResourceStatistics& WithTotalItemsSkippedInvalidKms(long long value) { SetTotalItemsSkippedInvalidKms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie wasn't able to analyze in the
     * bucket due to the permissions settings for the objects or the permissions
     * settings for the keys that were used to encrypt the objects.</p>
     */
    inline long long GetTotalItemsSkippedPermissionDenied() const { return m_totalItemsSkippedPermissionDenied; }
    inline bool TotalItemsSkippedPermissionDeniedHasBeenSet() const { return m_totalItemsSkippedPermissionDeniedHasBeenSet; }
    inline void SetTotalItemsSkippedPermissionDenied(long long value) { m_totalItemsSkippedPermissionDeniedHasBeenSet = true; m_totalItemsSkippedPermissionDenied = value; }
    inline ResourceStatistics& WithTotalItemsSkippedPermissionDenied(long long value) { SetTotalItemsSkippedPermissionDenied(value); return *this;}
    ///@}
  private:

    long long m_totalBytesClassified{0};
    bool m_totalBytesClassifiedHasBeenSet = false;

    long long m_totalDetections{0};
    bool m_totalDetectionsHasBeenSet = false;

    long long m_totalDetectionsSuppressed{0};
    bool m_totalDetectionsSuppressedHasBeenSet = false;

    long long m_totalItemsClassified{0};
    bool m_totalItemsClassifiedHasBeenSet = false;

    long long m_totalItemsSensitive{0};
    bool m_totalItemsSensitiveHasBeenSet = false;

    long long m_totalItemsSkipped{0};
    bool m_totalItemsSkippedHasBeenSet = false;

    long long m_totalItemsSkippedInvalidEncryption{0};
    bool m_totalItemsSkippedInvalidEncryptionHasBeenSet = false;

    long long m_totalItemsSkippedInvalidKms{0};
    bool m_totalItemsSkippedInvalidKmsHasBeenSet = false;

    long long m_totalItemsSkippedPermissionDenied{0};
    bool m_totalItemsSkippedPermissionDeniedHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
