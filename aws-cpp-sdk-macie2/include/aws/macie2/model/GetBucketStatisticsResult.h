/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/BucketCountByEffectivePermission.h>
#include <aws/macie2/model/BucketCountByEncryptionType.h>
#include <aws/macie2/model/BucketCountBySharedAccessType.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{
  class AWS_MACIE2_API GetBucketStatisticsResult
  {
  public:
    GetBucketStatisticsResult();
    GetBucketStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBucketStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The total number of buckets.</p>
     */
    inline long long GetBucketCount() const{ return m_bucketCount; }

    /**
     * <p>The total number of buckets.</p>
     */
    inline void SetBucketCount(long long value) { m_bucketCount = value; }

    /**
     * <p>The total number of buckets.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCount(long long value) { SetBucketCount(value); return *this;}


    /**
     * <p>The total number of buckets that are publicly accessible, based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline const BucketCountByEffectivePermission& GetBucketCountByEffectivePermission() const{ return m_bucketCountByEffectivePermission; }

    /**
     * <p>The total number of buckets that are publicly accessible, based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline void SetBucketCountByEffectivePermission(const BucketCountByEffectivePermission& value) { m_bucketCountByEffectivePermission = value; }

    /**
     * <p>The total number of buckets that are publicly accessible, based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline void SetBucketCountByEffectivePermission(BucketCountByEffectivePermission&& value) { m_bucketCountByEffectivePermission = std::move(value); }

    /**
     * <p>The total number of buckets that are publicly accessible, based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByEffectivePermission(const BucketCountByEffectivePermission& value) { SetBucketCountByEffectivePermission(value); return *this;}

    /**
     * <p>The total number of buckets that are publicly accessible, based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByEffectivePermission(BucketCountByEffectivePermission&& value) { SetBucketCountByEffectivePermission(std::move(value)); return *this;}


    /**
     * <p>The total number of buckets, grouped by server-side encryption type. This
     * object also reports the total number of buckets that aren't encrypted.</p>
     */
    inline const BucketCountByEncryptionType& GetBucketCountByEncryptionType() const{ return m_bucketCountByEncryptionType; }

    /**
     * <p>The total number of buckets, grouped by server-side encryption type. This
     * object also reports the total number of buckets that aren't encrypted.</p>
     */
    inline void SetBucketCountByEncryptionType(const BucketCountByEncryptionType& value) { m_bucketCountByEncryptionType = value; }

    /**
     * <p>The total number of buckets, grouped by server-side encryption type. This
     * object also reports the total number of buckets that aren't encrypted.</p>
     */
    inline void SetBucketCountByEncryptionType(BucketCountByEncryptionType&& value) { m_bucketCountByEncryptionType = std::move(value); }

    /**
     * <p>The total number of buckets, grouped by server-side encryption type. This
     * object also reports the total number of buckets that aren't encrypted.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByEncryptionType(const BucketCountByEncryptionType& value) { SetBucketCountByEncryptionType(value); return *this;}

    /**
     * <p>The total number of buckets, grouped by server-side encryption type. This
     * object also reports the total number of buckets that aren't encrypted.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByEncryptionType(BucketCountByEncryptionType&& value) { SetBucketCountByEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The total number of buckets that are shared with another AWS account or
     * configured to support cross-origin resource sharing (CORS).</p>
     */
    inline const BucketCountBySharedAccessType& GetBucketCountBySharedAccessType() const{ return m_bucketCountBySharedAccessType; }

    /**
     * <p>The total number of buckets that are shared with another AWS account or
     * configured to support cross-origin resource sharing (CORS).</p>
     */
    inline void SetBucketCountBySharedAccessType(const BucketCountBySharedAccessType& value) { m_bucketCountBySharedAccessType = value; }

    /**
     * <p>The total number of buckets that are shared with another AWS account or
     * configured to support cross-origin resource sharing (CORS).</p>
     */
    inline void SetBucketCountBySharedAccessType(BucketCountBySharedAccessType&& value) { m_bucketCountBySharedAccessType = std::move(value); }

    /**
     * <p>The total number of buckets that are shared with another AWS account or
     * configured to support cross-origin resource sharing (CORS).</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountBySharedAccessType(const BucketCountBySharedAccessType& value) { SetBucketCountBySharedAccessType(value); return *this;}

    /**
     * <p>The total number of buckets that are shared with another AWS account or
     * configured to support cross-origin resource sharing (CORS).</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountBySharedAccessType(BucketCountBySharedAccessType&& value) { SetBucketCountBySharedAccessType(std::move(value)); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie can monitor and analyze in all
     * the buckets. These objects use a file format, file extension, or content type
     * that Amazon Macie supports.</p>
     */
    inline long long GetClassifiableObjectCount() const{ return m_classifiableObjectCount; }

    /**
     * <p>The total number of objects that Amazon Macie can monitor and analyze in all
     * the buckets. These objects use a file format, file extension, or content type
     * that Amazon Macie supports.</p>
     */
    inline void SetClassifiableObjectCount(long long value) { m_classifiableObjectCount = value; }

    /**
     * <p>The total number of objects that Amazon Macie can monitor and analyze in all
     * the buckets. These objects use a file format, file extension, or content type
     * that Amazon Macie supports.</p>
     */
    inline GetBucketStatisticsResult& WithClassifiableObjectCount(long long value) { SetClassifiableObjectCount(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last analyzed the buckets.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last analyzed the buckets.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdated = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last analyzed the buckets.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdated = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last analyzed the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last analyzed the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The total number of objects in all the buckets.</p>
     */
    inline long long GetObjectCount() const{ return m_objectCount; }

    /**
     * <p>The total number of objects in all the buckets.</p>
     */
    inline void SetObjectCount(long long value) { m_objectCount = value; }

    /**
     * <p>The total number of objects in all the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithObjectCount(long long value) { SetObjectCount(value); return *this;}


    /**
     * <p>The total storage size, in bytes, of all the buckets.</p>
     */
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }

    /**
     * <p>The total storage size, in bytes, of all the buckets.</p>
     */
    inline void SetSizeInBytes(long long value) { m_sizeInBytes = value; }

    /**
     * <p>The total storage size, in bytes, of all the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}


    /**
     * <p>The total compressed storage size, in bytes, of all the buckets.</p>
     */
    inline long long GetSizeInBytesCompressed() const{ return m_sizeInBytesCompressed; }

    /**
     * <p>The total compressed storage size, in bytes, of all the buckets.</p>
     */
    inline void SetSizeInBytesCompressed(long long value) { m_sizeInBytesCompressed = value; }

    /**
     * <p>The total compressed storage size, in bytes, of all the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithSizeInBytesCompressed(long long value) { SetSizeInBytesCompressed(value); return *this;}

  private:

    long long m_bucketCount;

    BucketCountByEffectivePermission m_bucketCountByEffectivePermission;

    BucketCountByEncryptionType m_bucketCountByEncryptionType;

    BucketCountBySharedAccessType m_bucketCountBySharedAccessType;

    long long m_classifiableObjectCount;

    Aws::Utils::DateTime m_lastUpdated;

    long long m_objectCount;

    long long m_sizeInBytes;

    long long m_sizeInBytesCompressed;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
