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
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_MACIE2_API GetBucketStatisticsResult() = default;
    AWS_MACIE2_API GetBucketStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API GetBucketStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The total number of buckets.</p>
     */
    inline long long GetBucketCount() const { return m_bucketCount; }
    inline void SetBucketCount(long long value) { m_bucketCountHasBeenSet = true; m_bucketCount = value; }
    inline GetBucketStatisticsResult& WithBucketCount(long long value) { SetBucketCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that are publicly accessible due to a combination
     * of permissions settings for each bucket.</p>
     */
    inline const BucketCountByEffectivePermission& GetBucketCountByEffectivePermission() const { return m_bucketCountByEffectivePermission; }
    template<typename BucketCountByEffectivePermissionT = BucketCountByEffectivePermission>
    void SetBucketCountByEffectivePermission(BucketCountByEffectivePermissionT&& value) { m_bucketCountByEffectivePermissionHasBeenSet = true; m_bucketCountByEffectivePermission = std::forward<BucketCountByEffectivePermissionT>(value); }
    template<typename BucketCountByEffectivePermissionT = BucketCountByEffectivePermission>
    GetBucketStatisticsResult& WithBucketCountByEffectivePermission(BucketCountByEffectivePermissionT&& value) { SetBucketCountByEffectivePermission(std::forward<BucketCountByEffectivePermissionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets whose settings do or don't specify default
     * server-side encryption behavior for objects that are added to the buckets.</p>
     */
    inline const BucketCountByEncryptionType& GetBucketCountByEncryptionType() const { return m_bucketCountByEncryptionType; }
    template<typename BucketCountByEncryptionTypeT = BucketCountByEncryptionType>
    void SetBucketCountByEncryptionType(BucketCountByEncryptionTypeT&& value) { m_bucketCountByEncryptionTypeHasBeenSet = true; m_bucketCountByEncryptionType = std::forward<BucketCountByEncryptionTypeT>(value); }
    template<typename BucketCountByEncryptionTypeT = BucketCountByEncryptionType>
    GetBucketStatisticsResult& WithBucketCountByEncryptionType(BucketCountByEncryptionTypeT&& value) { SetBucketCountByEncryptionType(std::forward<BucketCountByEncryptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets whose bucket policies do or don't require
     * server-side encryption of objects when objects are added to the buckets.</p>
     */
    inline const BucketCountPolicyAllowsUnencryptedObjectUploads& GetBucketCountByObjectEncryptionRequirement() const { return m_bucketCountByObjectEncryptionRequirement; }
    template<typename BucketCountByObjectEncryptionRequirementT = BucketCountPolicyAllowsUnencryptedObjectUploads>
    void SetBucketCountByObjectEncryptionRequirement(BucketCountByObjectEncryptionRequirementT&& value) { m_bucketCountByObjectEncryptionRequirementHasBeenSet = true; m_bucketCountByObjectEncryptionRequirement = std::forward<BucketCountByObjectEncryptionRequirementT>(value); }
    template<typename BucketCountByObjectEncryptionRequirementT = BucketCountPolicyAllowsUnencryptedObjectUploads>
    GetBucketStatisticsResult& WithBucketCountByObjectEncryptionRequirement(BucketCountByObjectEncryptionRequirementT&& value) { SetBucketCountByObjectEncryptionRequirement(std::forward<BucketCountByObjectEncryptionRequirementT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of buckets that are or aren't shared with other Amazon Web
     * Services accounts, Amazon CloudFront origin access identities (OAIs), or
     * CloudFront origin access controls (OACs).</p>
     */
    inline const BucketCountBySharedAccessType& GetBucketCountBySharedAccessType() const { return m_bucketCountBySharedAccessType; }
    template<typename BucketCountBySharedAccessTypeT = BucketCountBySharedAccessType>
    void SetBucketCountBySharedAccessType(BucketCountBySharedAccessTypeT&& value) { m_bucketCountBySharedAccessTypeHasBeenSet = true; m_bucketCountBySharedAccessType = std::forward<BucketCountBySharedAccessTypeT>(value); }
    template<typename BucketCountBySharedAccessTypeT = BucketCountBySharedAccessType>
    GetBucketStatisticsResult& WithBucketCountBySharedAccessType(BucketCountBySharedAccessTypeT&& value) { SetBucketCountBySharedAccessType(std::forward<BucketCountBySharedAccessTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregated sensitive data discovery statistics for the buckets. If
     * automated sensitive data discovery is currently disabled for your account, the
     * value for most statistics is 0.</p>
     */
    inline const BucketStatisticsBySensitivity& GetBucketStatisticsBySensitivity() const { return m_bucketStatisticsBySensitivity; }
    template<typename BucketStatisticsBySensitivityT = BucketStatisticsBySensitivity>
    void SetBucketStatisticsBySensitivity(BucketStatisticsBySensitivityT&& value) { m_bucketStatisticsBySensitivityHasBeenSet = true; m_bucketStatisticsBySensitivity = std::forward<BucketStatisticsBySensitivityT>(value); }
    template<typename BucketStatisticsBySensitivityT = BucketStatisticsBySensitivity>
    GetBucketStatisticsResult& WithBucketStatisticsBySensitivity(BucketStatisticsBySensitivityT&& value) { SetBucketStatisticsBySensitivity(std::forward<BucketStatisticsBySensitivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie can analyze in the buckets.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline long long GetClassifiableObjectCount() const { return m_classifiableObjectCount; }
    inline void SetClassifiableObjectCount(long long value) { m_classifiableObjectCountHasBeenSet = true; m_classifiableObjectCount = value; }
    inline GetBucketStatisticsResult& WithClassifiableObjectCount(long long value) { SetClassifiableObjectCount(value); return *this;}
    ///@}

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
    inline void SetClassifiableSizeInBytes(long long value) { m_classifiableSizeInBytesHasBeenSet = true; m_classifiableSizeInBytes = value; }
    inline GetBucketStatisticsResult& WithClassifiableSizeInBytes(long long value) { SetClassifiableSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved bucket or object metadata from Amazon S3 for the
     * buckets.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    GetBucketStatisticsResult& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects in the buckets.</p>
     */
    inline long long GetObjectCount() const { return m_objectCount; }
    inline void SetObjectCount(long long value) { m_objectCountHasBeenSet = true; m_objectCount = value; }
    inline GetBucketStatisticsResult& WithObjectCount(long long value) { SetObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the buckets.</p> <p>If versioning is
     * enabled for any of the buckets, this value is based on the size of the latest
     * version of each object in the buckets. This value doesn't reflect the storage
     * size of all versions of the objects in the buckets.</p>
     */
    inline long long GetSizeInBytes() const { return m_sizeInBytes; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }
    inline GetBucketStatisticsResult& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the buckets.</p> <p>If versioning is enabled for any of
     * the buckets, this value is based on the size of the latest version of each
     * applicable object in the buckets. This value doesn't reflect the storage size of
     * all versions of the applicable objects in the buckets.</p>
     */
    inline long long GetSizeInBytesCompressed() const { return m_sizeInBytesCompressed; }
    inline void SetSizeInBytesCompressed(long long value) { m_sizeInBytesCompressedHasBeenSet = true; m_sizeInBytesCompressed = value; }
    inline GetBucketStatisticsResult& WithSizeInBytesCompressed(long long value) { SetSizeInBytesCompressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the buckets.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectCount() const { return m_unclassifiableObjectCount; }
    template<typename UnclassifiableObjectCountT = ObjectLevelStatistics>
    void SetUnclassifiableObjectCount(UnclassifiableObjectCountT&& value) { m_unclassifiableObjectCountHasBeenSet = true; m_unclassifiableObjectCount = std::forward<UnclassifiableObjectCountT>(value); }
    template<typename UnclassifiableObjectCountT = ObjectLevelStatistics>
    GetBucketStatisticsResult& WithUnclassifiableObjectCount(UnclassifiableObjectCountT&& value) { SetUnclassifiableObjectCount(std::forward<UnclassifiableObjectCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the buckets. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectSizeInBytes() const { return m_unclassifiableObjectSizeInBytes; }
    template<typename UnclassifiableObjectSizeInBytesT = ObjectLevelStatistics>
    void SetUnclassifiableObjectSizeInBytes(UnclassifiableObjectSizeInBytesT&& value) { m_unclassifiableObjectSizeInBytesHasBeenSet = true; m_unclassifiableObjectSizeInBytes = std::forward<UnclassifiableObjectSizeInBytesT>(value); }
    template<typename UnclassifiableObjectSizeInBytesT = ObjectLevelStatistics>
    GetBucketStatisticsResult& WithUnclassifiableObjectSizeInBytes(UnclassifiableObjectSizeInBytesT&& value) { SetUnclassifiableObjectSizeInBytes(std::forward<UnclassifiableObjectSizeInBytesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBucketStatisticsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    long long m_bucketCount{0};
    bool m_bucketCountHasBeenSet = false;

    BucketCountByEffectivePermission m_bucketCountByEffectivePermission;
    bool m_bucketCountByEffectivePermissionHasBeenSet = false;

    BucketCountByEncryptionType m_bucketCountByEncryptionType;
    bool m_bucketCountByEncryptionTypeHasBeenSet = false;

    BucketCountPolicyAllowsUnencryptedObjectUploads m_bucketCountByObjectEncryptionRequirement;
    bool m_bucketCountByObjectEncryptionRequirementHasBeenSet = false;

    BucketCountBySharedAccessType m_bucketCountBySharedAccessType;
    bool m_bucketCountBySharedAccessTypeHasBeenSet = false;

    BucketStatisticsBySensitivity m_bucketStatisticsBySensitivity;
    bool m_bucketStatisticsBySensitivityHasBeenSet = false;

    long long m_classifiableObjectCount{0};
    bool m_classifiableObjectCountHasBeenSet = false;

    long long m_classifiableSizeInBytes{0};
    bool m_classifiableSizeInBytesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    long long m_objectCount{0};
    bool m_objectCountHasBeenSet = false;

    long long m_sizeInBytes{0};
    bool m_sizeInBytesHasBeenSet = false;

    long long m_sizeInBytesCompressed{0};
    bool m_sizeInBytesCompressedHasBeenSet = false;

    ObjectLevelStatistics m_unclassifiableObjectCount;
    bool m_unclassifiableObjectCountHasBeenSet = false;

    ObjectLevelStatistics m_unclassifiableObjectSizeInBytes;
    bool m_unclassifiableObjectSizeInBytesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
