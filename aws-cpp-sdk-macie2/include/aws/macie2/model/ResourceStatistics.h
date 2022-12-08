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
   * an S3 bucket that Amazon Macie monitors and analyzes for your account. The
   * statistics capture the results of automated sensitive data discovery activities
   * that Macie has performed for the bucket. The data is available only if automated
   * sensitive data discovery is currently enabled for your account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ResourceStatistics">AWS
   * API Reference</a></p>
   */
  class ResourceStatistics
  {
  public:
    AWS_MACIE2_API ResourceStatistics();
    AWS_MACIE2_API ResourceStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ResourceStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total amount of data, in bytes, that Amazon Macie has analyzed in the
     * bucket.</p>
     */
    inline long long GetTotalBytesClassified() const{ return m_totalBytesClassified; }

    /**
     * <p>The total amount of data, in bytes, that Amazon Macie has analyzed in the
     * bucket.</p>
     */
    inline bool TotalBytesClassifiedHasBeenSet() const { return m_totalBytesClassifiedHasBeenSet; }

    /**
     * <p>The total amount of data, in bytes, that Amazon Macie has analyzed in the
     * bucket.</p>
     */
    inline void SetTotalBytesClassified(long long value) { m_totalBytesClassifiedHasBeenSet = true; m_totalBytesClassified = value; }

    /**
     * <p>The total amount of data, in bytes, that Amazon Macie has analyzed in the
     * bucket.</p>
     */
    inline ResourceStatistics& WithTotalBytesClassified(long long value) { SetTotalBytesClassified(value); return *this;}


    /**
     * <p>The total number of occurrences of sensitive data that Amazon Macie has found
     * in the bucket's objects. This includes occurrences that are currently suppressed
     * by the sensitivity scoring settings for the bucket
     * (totalDetectionsSuppressed).</p>
     */
    inline long long GetTotalDetections() const{ return m_totalDetections; }

    /**
     * <p>The total number of occurrences of sensitive data that Amazon Macie has found
     * in the bucket's objects. This includes occurrences that are currently suppressed
     * by the sensitivity scoring settings for the bucket
     * (totalDetectionsSuppressed).</p>
     */
    inline bool TotalDetectionsHasBeenSet() const { return m_totalDetectionsHasBeenSet; }

    /**
     * <p>The total number of occurrences of sensitive data that Amazon Macie has found
     * in the bucket's objects. This includes occurrences that are currently suppressed
     * by the sensitivity scoring settings for the bucket
     * (totalDetectionsSuppressed).</p>
     */
    inline void SetTotalDetections(long long value) { m_totalDetectionsHasBeenSet = true; m_totalDetections = value; }

    /**
     * <p>The total number of occurrences of sensitive data that Amazon Macie has found
     * in the bucket's objects. This includes occurrences that are currently suppressed
     * by the sensitivity scoring settings for the bucket
     * (totalDetectionsSuppressed).</p>
     */
    inline ResourceStatistics& WithTotalDetections(long long value) { SetTotalDetections(value); return *this;}


    /**
     * <p>The total number of occurrences of sensitive data that are currently
     * suppressed by the sensitivity scoring settings for the bucket. These represent
     * occurrences of sensitive data that Amazon Macie found in the bucket's objects,
     * but the occurrences were manually suppressed. By default, suppressed occurrences
     * are excluded from the bucket's sensitivity score.</p>
     */
    inline long long GetTotalDetectionsSuppressed() const{ return m_totalDetectionsSuppressed; }

    /**
     * <p>The total number of occurrences of sensitive data that are currently
     * suppressed by the sensitivity scoring settings for the bucket. These represent
     * occurrences of sensitive data that Amazon Macie found in the bucket's objects,
     * but the occurrences were manually suppressed. By default, suppressed occurrences
     * are excluded from the bucket's sensitivity score.</p>
     */
    inline bool TotalDetectionsSuppressedHasBeenSet() const { return m_totalDetectionsSuppressedHasBeenSet; }

    /**
     * <p>The total number of occurrences of sensitive data that are currently
     * suppressed by the sensitivity scoring settings for the bucket. These represent
     * occurrences of sensitive data that Amazon Macie found in the bucket's objects,
     * but the occurrences were manually suppressed. By default, suppressed occurrences
     * are excluded from the bucket's sensitivity score.</p>
     */
    inline void SetTotalDetectionsSuppressed(long long value) { m_totalDetectionsSuppressedHasBeenSet = true; m_totalDetectionsSuppressed = value; }

    /**
     * <p>The total number of occurrences of sensitive data that are currently
     * suppressed by the sensitivity scoring settings for the bucket. These represent
     * occurrences of sensitive data that Amazon Macie found in the bucket's objects,
     * but the occurrences were manually suppressed. By default, suppressed occurrences
     * are excluded from the bucket's sensitivity score.</p>
     */
    inline ResourceStatistics& WithTotalDetectionsSuppressed(long long value) { SetTotalDetectionsSuppressed(value); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie has analyzed in the bucket.</p>
     */
    inline long long GetTotalItemsClassified() const{ return m_totalItemsClassified; }

    /**
     * <p>The total number of objects that Amazon Macie has analyzed in the bucket.</p>
     */
    inline bool TotalItemsClassifiedHasBeenSet() const { return m_totalItemsClassifiedHasBeenSet; }

    /**
     * <p>The total number of objects that Amazon Macie has analyzed in the bucket.</p>
     */
    inline void SetTotalItemsClassified(long long value) { m_totalItemsClassifiedHasBeenSet = true; m_totalItemsClassified = value; }

    /**
     * <p>The total number of objects that Amazon Macie has analyzed in the bucket.</p>
     */
    inline ResourceStatistics& WithTotalItemsClassified(long long value) { SetTotalItemsClassified(value); return *this;}


    /**
     * <p>The total number of the bucket's objects that Amazon Macie has found
     * sensitive data in.</p>
     */
    inline long long GetTotalItemsSensitive() const{ return m_totalItemsSensitive; }

    /**
     * <p>The total number of the bucket's objects that Amazon Macie has found
     * sensitive data in.</p>
     */
    inline bool TotalItemsSensitiveHasBeenSet() const { return m_totalItemsSensitiveHasBeenSet; }

    /**
     * <p>The total number of the bucket's objects that Amazon Macie has found
     * sensitive data in.</p>
     */
    inline void SetTotalItemsSensitive(long long value) { m_totalItemsSensitiveHasBeenSet = true; m_totalItemsSensitive = value; }

    /**
     * <p>The total number of the bucket's objects that Amazon Macie has found
     * sensitive data in.</p>
     */
    inline ResourceStatistics& WithTotalItemsSensitive(long long value) { SetTotalItemsSensitive(value); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * due to an error or issue. For example, the object is a malformed file. This
     * value includes objects that Macie hasn't analyzed for reasons reported by other
     * statistics in the ResourceStatistics object.</p> 
     */
    inline long long GetTotalItemsSkipped() const{ return m_totalItemsSkipped; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * due to an error or issue. For example, the object is a malformed file. This
     * value includes objects that Macie hasn't analyzed for reasons reported by other
     * statistics in the ResourceStatistics object.</p> 
     */
    inline bool TotalItemsSkippedHasBeenSet() const { return m_totalItemsSkippedHasBeenSet; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * due to an error or issue. For example, the object is a malformed file. This
     * value includes objects that Macie hasn't analyzed for reasons reported by other
     * statistics in the ResourceStatistics object.</p> 
     */
    inline void SetTotalItemsSkipped(long long value) { m_totalItemsSkippedHasBeenSet = true; m_totalItemsSkipped = value; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * due to an error or issue. For example, the object is a malformed file. This
     * value includes objects that Macie hasn't analyzed for reasons reported by other
     * statistics in the ResourceStatistics object.</p> 
     */
    inline ResourceStatistics& WithTotalItemsSkipped(long long value) { SetTotalItemsSkipped(value); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because the objects are encrypted with a key that Macie isn't allowed to
     * use.</p>
     */
    inline long long GetTotalItemsSkippedInvalidEncryption() const{ return m_totalItemsSkippedInvalidEncryption; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because the objects are encrypted with a key that Macie isn't allowed to
     * use.</p>
     */
    inline bool TotalItemsSkippedInvalidEncryptionHasBeenSet() const { return m_totalItemsSkippedInvalidEncryptionHasBeenSet; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because the objects are encrypted with a key that Macie isn't allowed to
     * use.</p>
     */
    inline void SetTotalItemsSkippedInvalidEncryption(long long value) { m_totalItemsSkippedInvalidEncryptionHasBeenSet = true; m_totalItemsSkippedInvalidEncryption = value; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because the objects are encrypted with a key that Macie isn't allowed to
     * use.</p>
     */
    inline ResourceStatistics& WithTotalItemsSkippedInvalidEncryption(long long value) { SetTotalItemsSkippedInvalidEncryption(value); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because the objects are encrypted with an KMS key that was disabled or
     * deleted.</p>
     */
    inline long long GetTotalItemsSkippedInvalidKms() const{ return m_totalItemsSkippedInvalidKms; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because the objects are encrypted with an KMS key that was disabled or
     * deleted.</p>
     */
    inline bool TotalItemsSkippedInvalidKmsHasBeenSet() const { return m_totalItemsSkippedInvalidKmsHasBeenSet; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because the objects are encrypted with an KMS key that was disabled or
     * deleted.</p>
     */
    inline void SetTotalItemsSkippedInvalidKms(long long value) { m_totalItemsSkippedInvalidKmsHasBeenSet = true; m_totalItemsSkippedInvalidKms = value; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because the objects are encrypted with an KMS key that was disabled or
     * deleted.</p>
     */
    inline ResourceStatistics& WithTotalItemsSkippedInvalidKms(long long value) { SetTotalItemsSkippedInvalidKms(value); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because Macie isn't allowed to access the objects.</p>
     */
    inline long long GetTotalItemsSkippedPermissionDenied() const{ return m_totalItemsSkippedPermissionDenied; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because Macie isn't allowed to access the objects.</p>
     */
    inline bool TotalItemsSkippedPermissionDeniedHasBeenSet() const { return m_totalItemsSkippedPermissionDeniedHasBeenSet; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because Macie isn't allowed to access the objects.</p>
     */
    inline void SetTotalItemsSkippedPermissionDenied(long long value) { m_totalItemsSkippedPermissionDeniedHasBeenSet = true; m_totalItemsSkippedPermissionDenied = value; }

    /**
     * <p>The total number of objects that Amazon Macie hasn't analyzed in the bucket
     * because Macie isn't allowed to access the objects.</p>
     */
    inline ResourceStatistics& WithTotalItemsSkippedPermissionDenied(long long value) { SetTotalItemsSkippedPermissionDenied(value); return *this;}

  private:

    long long m_totalBytesClassified;
    bool m_totalBytesClassifiedHasBeenSet = false;

    long long m_totalDetections;
    bool m_totalDetectionsHasBeenSet = false;

    long long m_totalDetectionsSuppressed;
    bool m_totalDetectionsSuppressedHasBeenSet = false;

    long long m_totalItemsClassified;
    bool m_totalItemsClassifiedHasBeenSet = false;

    long long m_totalItemsSensitive;
    bool m_totalItemsSensitiveHasBeenSet = false;

    long long m_totalItemsSkipped;
    bool m_totalItemsSkippedHasBeenSet = false;

    long long m_totalItemsSkippedInvalidEncryption;
    bool m_totalItemsSkippedInvalidEncryptionHasBeenSet = false;

    long long m_totalItemsSkippedInvalidKms;
    bool m_totalItemsSkippedInvalidKmsHasBeenSet = false;

    long long m_totalItemsSkippedPermissionDenied;
    bool m_totalItemsSkippedPermissionDeniedHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
