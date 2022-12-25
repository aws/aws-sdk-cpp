/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/BucketCountByEffectivePermission.h>
#include <aws/macie2/model/BucketCountByEncryptionType.h>
#include <aws/macie2/model/BucketCountPolicyAllowsUnencryptedObjectUploads.h>
#include <aws/macie2/model/BucketCountBySharedAccessType.h>
#include <aws/macie2/model/BucketStatisticsBySensitivity.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/ObjectLevelStatistics.h>
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
  class GetBucketStatisticsResult
  {
  public:
    AWS_MACIE2_API GetBucketStatisticsResult();
    AWS_MACIE2_API GetBucketStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetBucketStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
     * <p>The total number of buckets that are publicly accessible based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline const BucketCountByEffectivePermission& GetBucketCountByEffectivePermission() const{ return m_bucketCountByEffectivePermission; }

    /**
     * <p>The total number of buckets that are publicly accessible based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline void SetBucketCountByEffectivePermission(const BucketCountByEffectivePermission& value) { m_bucketCountByEffectivePermission = value; }

    /**
     * <p>The total number of buckets that are publicly accessible based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline void SetBucketCountByEffectivePermission(BucketCountByEffectivePermission&& value) { m_bucketCountByEffectivePermission = std::move(value); }

    /**
     * <p>The total number of buckets that are publicly accessible based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByEffectivePermission(const BucketCountByEffectivePermission& value) { SetBucketCountByEffectivePermission(value); return *this;}

    /**
     * <p>The total number of buckets that are publicly accessible based on a
     * combination of permissions settings for each bucket.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByEffectivePermission(BucketCountByEffectivePermission&& value) { SetBucketCountByEffectivePermission(std::move(value)); return *this;}


    /**
     * <p>The total number of buckets that use certain types of server-side encryption
     * to encrypt new objects by default. This object also reports the total number of
     * buckets that don't encrypt new objects by default.</p>
     */
    inline const BucketCountByEncryptionType& GetBucketCountByEncryptionType() const{ return m_bucketCountByEncryptionType; }

    /**
     * <p>The total number of buckets that use certain types of server-side encryption
     * to encrypt new objects by default. This object also reports the total number of
     * buckets that don't encrypt new objects by default.</p>
     */
    inline void SetBucketCountByEncryptionType(const BucketCountByEncryptionType& value) { m_bucketCountByEncryptionType = value; }

    /**
     * <p>The total number of buckets that use certain types of server-side encryption
     * to encrypt new objects by default. This object also reports the total number of
     * buckets that don't encrypt new objects by default.</p>
     */
    inline void SetBucketCountByEncryptionType(BucketCountByEncryptionType&& value) { m_bucketCountByEncryptionType = std::move(value); }

    /**
     * <p>The total number of buckets that use certain types of server-side encryption
     * to encrypt new objects by default. This object also reports the total number of
     * buckets that don't encrypt new objects by default.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByEncryptionType(const BucketCountByEncryptionType& value) { SetBucketCountByEncryptionType(value); return *this;}

    /**
     * <p>The total number of buckets that use certain types of server-side encryption
     * to encrypt new objects by default. This object also reports the total number of
     * buckets that don't encrypt new objects by default.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByEncryptionType(BucketCountByEncryptionType&& value) { SetBucketCountByEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The total number of buckets whose bucket policies do or don't require
     * server-side encryption of objects when objects are uploaded to the buckets.</p>
     */
    inline const BucketCountPolicyAllowsUnencryptedObjectUploads& GetBucketCountByObjectEncryptionRequirement() const{ return m_bucketCountByObjectEncryptionRequirement; }

    /**
     * <p>The total number of buckets whose bucket policies do or don't require
     * server-side encryption of objects when objects are uploaded to the buckets.</p>
     */
    inline void SetBucketCountByObjectEncryptionRequirement(const BucketCountPolicyAllowsUnencryptedObjectUploads& value) { m_bucketCountByObjectEncryptionRequirement = value; }

    /**
     * <p>The total number of buckets whose bucket policies do or don't require
     * server-side encryption of objects when objects are uploaded to the buckets.</p>
     */
    inline void SetBucketCountByObjectEncryptionRequirement(BucketCountPolicyAllowsUnencryptedObjectUploads&& value) { m_bucketCountByObjectEncryptionRequirement = std::move(value); }

    /**
     * <p>The total number of buckets whose bucket policies do or don't require
     * server-side encryption of objects when objects are uploaded to the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByObjectEncryptionRequirement(const BucketCountPolicyAllowsUnencryptedObjectUploads& value) { SetBucketCountByObjectEncryptionRequirement(value); return *this;}

    /**
     * <p>The total number of buckets whose bucket policies do or don't require
     * server-side encryption of objects when objects are uploaded to the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountByObjectEncryptionRequirement(BucketCountPolicyAllowsUnencryptedObjectUploads&& value) { SetBucketCountByObjectEncryptionRequirement(std::move(value)); return *this;}


    /**
     * <p>The total number of buckets that are or aren't shared with another Amazon Web
     * Services account.</p>
     */
    inline const BucketCountBySharedAccessType& GetBucketCountBySharedAccessType() const{ return m_bucketCountBySharedAccessType; }

    /**
     * <p>The total number of buckets that are or aren't shared with another Amazon Web
     * Services account.</p>
     */
    inline void SetBucketCountBySharedAccessType(const BucketCountBySharedAccessType& value) { m_bucketCountBySharedAccessType = value; }

    /**
     * <p>The total number of buckets that are or aren't shared with another Amazon Web
     * Services account.</p>
     */
    inline void SetBucketCountBySharedAccessType(BucketCountBySharedAccessType&& value) { m_bucketCountBySharedAccessType = std::move(value); }

    /**
     * <p>The total number of buckets that are or aren't shared with another Amazon Web
     * Services account.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountBySharedAccessType(const BucketCountBySharedAccessType& value) { SetBucketCountBySharedAccessType(value); return *this;}

    /**
     * <p>The total number of buckets that are or aren't shared with another Amazon Web
     * Services account.</p>
     */
    inline GetBucketStatisticsResult& WithBucketCountBySharedAccessType(BucketCountBySharedAccessType&& value) { SetBucketCountBySharedAccessType(std::move(value)); return *this;}


    /**
     * <p>The aggregated sensitive data discovery statistics for the buckets. If
     * automated sensitive data discovery is currently disabled for your account, the
     * value for each statistic is 0.</p>
     */
    inline const BucketStatisticsBySensitivity& GetBucketStatisticsBySensitivity() const{ return m_bucketStatisticsBySensitivity; }

    /**
     * <p>The aggregated sensitive data discovery statistics for the buckets. If
     * automated sensitive data discovery is currently disabled for your account, the
     * value for each statistic is 0.</p>
     */
    inline void SetBucketStatisticsBySensitivity(const BucketStatisticsBySensitivity& value) { m_bucketStatisticsBySensitivity = value; }

    /**
     * <p>The aggregated sensitive data discovery statistics for the buckets. If
     * automated sensitive data discovery is currently disabled for your account, the
     * value for each statistic is 0.</p>
     */
    inline void SetBucketStatisticsBySensitivity(BucketStatisticsBySensitivity&& value) { m_bucketStatisticsBySensitivity = std::move(value); }

    /**
     * <p>The aggregated sensitive data discovery statistics for the buckets. If
     * automated sensitive data discovery is currently disabled for your account, the
     * value for each statistic is 0.</p>
     */
    inline GetBucketStatisticsResult& WithBucketStatisticsBySensitivity(const BucketStatisticsBySensitivity& value) { SetBucketStatisticsBySensitivity(value); return *this;}

    /**
     * <p>The aggregated sensitive data discovery statistics for the buckets. If
     * automated sensitive data discovery is currently disabled for your account, the
     * value for each statistic is 0.</p>
     */
    inline GetBucketStatisticsResult& WithBucketStatisticsBySensitivity(BucketStatisticsBySensitivity&& value) { SetBucketStatisticsBySensitivity(std::move(value)); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie can analyze in the buckets.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline long long GetClassifiableObjectCount() const{ return m_classifiableObjectCount; }

    /**
     * <p>The total number of objects that Amazon Macie can analyze in the buckets.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline void SetClassifiableObjectCount(long long value) { m_classifiableObjectCount = value; }

    /**
     * <p>The total number of objects that Amazon Macie can analyze in the buckets.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline GetBucketStatisticsResult& WithClassifiableObjectCount(long long value) { SetClassifiableObjectCount(value); return *this;}


    /**
     * <p>The total storage size, in bytes, of all the objects that Amazon Macie can
     * analyze in the buckets. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for any of the buckets, this value is based on the size of the latest
     * version of each applicable object in the buckets. This value doesn't reflect the
     * storage size of all versions of all applicable objects in the buckets.</p>
     */
    inline long long GetClassifiableSizeInBytes() const{ return m_classifiableSizeInBytes; }

    /**
     * <p>The total storage size, in bytes, of all the objects that Amazon Macie can
     * analyze in the buckets. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for any of the buckets, this value is based on the size of the latest
     * version of each applicable object in the buckets. This value doesn't reflect the
     * storage size of all versions of all applicable objects in the buckets.</p>
     */
    inline void SetClassifiableSizeInBytes(long long value) { m_classifiableSizeInBytes = value; }

    /**
     * <p>The total storage size, in bytes, of all the objects that Amazon Macie can
     * analyze in the buckets. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for any of the buckets, this value is based on the size of the latest
     * version of each applicable object in the buckets. This value doesn't reflect the
     * storage size of all versions of all applicable objects in the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithClassifiableSizeInBytes(long long value) { SetClassifiableSizeInBytes(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * buckets.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * buckets.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdated = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * buckets.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdated = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * buckets.</p>
     */
    inline GetBucketStatisticsResult& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * buckets.</p>
     */
    inline GetBucketStatisticsResult& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


    /**
     * <p>The total number of objects in the buckets.</p>
     */
    inline long long GetObjectCount() const{ return m_objectCount; }

    /**
     * <p>The total number of objects in the buckets.</p>
     */
    inline void SetObjectCount(long long value) { m_objectCount = value; }

    /**
     * <p>The total number of objects in the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithObjectCount(long long value) { SetObjectCount(value); return *this;}


    /**
     * <p>The total storage size, in bytes, of the buckets.</p> <p>If versioning is
     * enabled for any of the buckets, this value is based on the size of the latest
     * version of each object in the buckets. This value doesn't reflect the storage
     * size of all versions of the objects in the buckets.</p>
     */
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }

    /**
     * <p>The total storage size, in bytes, of the buckets.</p> <p>If versioning is
     * enabled for any of the buckets, this value is based on the size of the latest
     * version of each object in the buckets. This value doesn't reflect the storage
     * size of all versions of the objects in the buckets.</p>
     */
    inline void SetSizeInBytes(long long value) { m_sizeInBytes = value; }

    /**
     * <p>The total storage size, in bytes, of the buckets.</p> <p>If versioning is
     * enabled for any of the buckets, this value is based on the size of the latest
     * version of each object in the buckets. This value doesn't reflect the storage
     * size of all versions of the objects in the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}


    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the buckets.</p> <p>If versioning is enabled for any of
     * the buckets, this value is based on the size of the latest version of each
     * applicable object in the buckets. This value doesn't reflect the storage size of
     * all versions of the applicable objects in the buckets.</p>
     */
    inline long long GetSizeInBytesCompressed() const{ return m_sizeInBytesCompressed; }

    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the buckets.</p> <p>If versioning is enabled for any of
     * the buckets, this value is based on the size of the latest version of each
     * applicable object in the buckets. This value doesn't reflect the storage size of
     * all versions of the applicable objects in the buckets.</p>
     */
    inline void SetSizeInBytesCompressed(long long value) { m_sizeInBytesCompressed = value; }

    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the buckets.</p> <p>If versioning is enabled for any of
     * the buckets, this value is based on the size of the latest version of each
     * applicable object in the buckets. This value doesn't reflect the storage size of
     * all versions of the applicable objects in the buckets.</p>
     */
    inline GetBucketStatisticsResult& WithSizeInBytesCompressed(long long value) { SetSizeInBytesCompressed(value); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the buckets.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectCount() const{ return m_unclassifiableObjectCount; }

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the buckets.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline void SetUnclassifiableObjectCount(const ObjectLevelStatistics& value) { m_unclassifiableObjectCount = value; }

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the buckets.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline void SetUnclassifiableObjectCount(ObjectLevelStatistics&& value) { m_unclassifiableObjectCount = std::move(value); }

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the buckets.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline GetBucketStatisticsResult& WithUnclassifiableObjectCount(const ObjectLevelStatistics& value) { SetUnclassifiableObjectCount(value); return *this;}

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the buckets.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline GetBucketStatisticsResult& WithUnclassifiableObjectCount(ObjectLevelStatistics&& value) { SetUnclassifiableObjectCount(std::move(value)); return *this;}


    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the buckets. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectSizeInBytes() const{ return m_unclassifiableObjectSizeInBytes; }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the buckets. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline void SetUnclassifiableObjectSizeInBytes(const ObjectLevelStatistics& value) { m_unclassifiableObjectSizeInBytes = value; }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the buckets. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline void SetUnclassifiableObjectSizeInBytes(ObjectLevelStatistics&& value) { m_unclassifiableObjectSizeInBytes = std::move(value); }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the buckets. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline GetBucketStatisticsResult& WithUnclassifiableObjectSizeInBytes(const ObjectLevelStatistics& value) { SetUnclassifiableObjectSizeInBytes(value); return *this;}

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the buckets. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline GetBucketStatisticsResult& WithUnclassifiableObjectSizeInBytes(ObjectLevelStatistics&& value) { SetUnclassifiableObjectSizeInBytes(std::move(value)); return *this;}

  private:

    long long m_bucketCount;

    BucketCountByEffectivePermission m_bucketCountByEffectivePermission;

    BucketCountByEncryptionType m_bucketCountByEncryptionType;

    BucketCountPolicyAllowsUnencryptedObjectUploads m_bucketCountByObjectEncryptionRequirement;

    BucketCountBySharedAccessType m_bucketCountBySharedAccessType;

    BucketStatisticsBySensitivity m_bucketStatisticsBySensitivity;

    long long m_classifiableObjectCount;

    long long m_classifiableSizeInBytes;

    Aws::Utils::DateTime m_lastUpdated;

    long long m_objectCount;

    long long m_sizeInBytes;

    long long m_sizeInBytesCompressed;

    ObjectLevelStatistics m_unclassifiableObjectCount;

    ObjectLevelStatistics m_unclassifiableObjectSizeInBytes;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
