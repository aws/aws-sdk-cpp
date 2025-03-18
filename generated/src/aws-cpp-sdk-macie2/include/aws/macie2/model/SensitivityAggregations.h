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
   * <p>Provides aggregated statistical data for sensitive data discovery metrics
   * that apply to S3 buckets. Each field contains aggregated data for all the
   * buckets that have a sensitivity score (sensitivityScore) of a specified value or
   * within a specified range (BucketStatisticsBySensitivity). If automated sensitive
   * data discovery is currently disabled for your account, the value for most fields
   * is 0.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SensitivityAggregations">AWS
   * API Reference</a></p>
   */
  class SensitivityAggregations
  {
  public:
    AWS_MACIE2_API SensitivityAggregations() = default;
    AWS_MACIE2_API SensitivityAggregations(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SensitivityAggregations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The total storage size, in bytes, of all the objects that Amazon Macie can
     * analyze in the buckets. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for any of the buckets, this value is based on the size of the latest
     * version of each applicable object in the buckets. This value doesn't reflect the
     * storage size of all versions of all applicable objects in the buckets.</p>
     */
    inline long long GetClassifiableSizeInBytes() const { return m_classifiableSizeInBytes; }
    inline bool ClassifiableSizeInBytesHasBeenSet() const { return m_classifiableSizeInBytesHasBeenSet; }
    inline void SetClassifiableSizeInBytes(long long value) { m_classifiableSizeInBytesHasBeenSet = true; m_classifiableSizeInBytes = value; }
    inline SensitivityAggregations& WithClassifiableSizeInBytes(long long value) { SetClassifiableSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that are publicly accessible due to a combination
     * of permissions settings for each bucket.</p>
     */
    inline long long GetPubliclyAccessibleCount() const { return m_publiclyAccessibleCount; }
    inline bool PubliclyAccessibleCountHasBeenSet() const { return m_publiclyAccessibleCountHasBeenSet; }
    inline void SetPubliclyAccessibleCount(long long value) { m_publiclyAccessibleCountHasBeenSet = true; m_publiclyAccessibleCount = value; }
    inline SensitivityAggregations& WithPubliclyAccessibleCount(long long value) { SetPubliclyAccessibleCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets.</p>
     */
    inline long long GetTotalCount() const { return m_totalCount; }
    inline bool TotalCountHasBeenSet() const { return m_totalCountHasBeenSet; }
    inline void SetTotalCount(long long value) { m_totalCountHasBeenSet = true; m_totalCount = value; }
    inline SensitivityAggregations& WithTotalCount(long long value) { SetTotalCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the buckets.</p> <p>If versioning is
     * enabled for any of the buckets, this value is based on the size of the latest
     * version of each object in the buckets. This value doesn't reflect the storage
     * size of all versions of the objects in the buckets.</p>
     */
    inline long long GetTotalSizeInBytes() const { return m_totalSizeInBytes; }
    inline bool TotalSizeInBytesHasBeenSet() const { return m_totalSizeInBytesHasBeenSet; }
    inline void SetTotalSizeInBytes(long long value) { m_totalSizeInBytesHasBeenSet = true; m_totalSizeInBytes = value; }
    inline SensitivityAggregations& WithTotalSizeInBytes(long long value) { SetTotalSizeInBytes(value); return *this;}
    ///@}
  private:

    long long m_classifiableSizeInBytes{0};
    bool m_classifiableSizeInBytesHasBeenSet = false;

    long long m_publiclyAccessibleCount{0};
    bool m_publiclyAccessibleCountHasBeenSet = false;

    long long m_totalCount{0};
    bool m_totalCountHasBeenSet = false;

    long long m_totalSizeInBytes{0};
    bool m_totalSizeInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
