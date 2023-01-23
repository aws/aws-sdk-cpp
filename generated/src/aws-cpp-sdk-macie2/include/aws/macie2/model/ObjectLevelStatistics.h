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
   * <p>Provides information about the total storage size (in bytes) or number of
   * objects that Amazon Macie can't analyze in one or more S3 buckets. In a
   * BucketMetadata or MatchingBucket object, this data is for a specific bucket. In
   * a GetBucketStatisticsResponse object, this data is aggregated for all the
   * buckets in the query results. If versioning is enabled for a bucket, storage
   * size values are based on the size of the latest version of each applicable
   * object in the bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/ObjectLevelStatistics">AWS
   * API Reference</a></p>
   */
  class ObjectLevelStatistics
  {
  public:
    AWS_MACIE2_API ObjectLevelStatistics();
    AWS_MACIE2_API ObjectLevelStatistics(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API ObjectLevelStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects don't have a file name extension for a
     * supported file or storage format.</p>
     */
    inline long long GetFileType() const{ return m_fileType; }

    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects don't have a file name extension for a
     * supported file or storage format.</p>
     */
    inline bool FileTypeHasBeenSet() const { return m_fileTypeHasBeenSet; }

    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects don't have a file name extension for a
     * supported file or storage format.</p>
     */
    inline void SetFileType(long long value) { m_fileTypeHasBeenSet = true; m_fileType = value; }

    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects don't have a file name extension for a
     * supported file or storage format.</p>
     */
    inline ObjectLevelStatistics& WithFileType(long long value) { SetFileType(value); return *this;}


    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects use an unsupported storage class.</p>
     */
    inline long long GetStorageClass() const{ return m_storageClass; }

    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects use an unsupported storage class.</p>
     */
    inline bool StorageClassHasBeenSet() const { return m_storageClassHasBeenSet; }

    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects use an unsupported storage class.</p>
     */
    inline void SetStorageClass(long long value) { m_storageClassHasBeenSet = true; m_storageClass = value; }

    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects use an unsupported storage class.</p>
     */
    inline ObjectLevelStatistics& WithStorageClass(long long value) { SetStorageClass(value); return *this;}


    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects use an unsupported storage class or don't have
     * a file name extension for a supported file or storage format.</p>
     */
    inline long long GetTotal() const{ return m_total; }

    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects use an unsupported storage class or don't have
     * a file name extension for a supported file or storage format.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects use an unsupported storage class or don't have
     * a file name extension for a supported file or storage format.</p>
     */
    inline void SetTotal(long long value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The total storage size (in bytes) or number of objects that Amazon Macie
     * can't analyze because the objects use an unsupported storage class or don't have
     * a file name extension for a supported file or storage format.</p>
     */
    inline ObjectLevelStatistics& WithTotal(long long value) { SetTotal(value); return *this;}

  private:

    long long m_fileType;
    bool m_fileTypeHasBeenSet = false;

    long long m_storageClass;
    bool m_storageClassHasBeenSet = false;

    long long m_total;
    bool m_totalHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
