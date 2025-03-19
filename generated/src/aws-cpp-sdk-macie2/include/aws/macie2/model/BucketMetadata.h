/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AllowsUnencryptedObjectUploads.h>
#include <aws/macie2/model/AutomatedDiscoveryMonitoringStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/BucketMetadataErrorCode.h>
#include <aws/macie2/model/JobDetails.h>
#include <aws/macie2/model/ObjectCountByEncryptionType.h>
#include <aws/macie2/model/BucketPublicAccess.h>
#include <aws/macie2/model/ReplicationDetails.h>
#include <aws/macie2/model/BucketServerSideEncryption.h>
#include <aws/macie2/model/SharedAccess.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/ObjectLevelStatistics.h>
#include <aws/macie2/model/KeyValuePair.h>
#include <utility>

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
   * <p>Provides statistical data and other information about an S3 bucket that
   * Amazon Macie monitors and analyzes for your account. By default, object count
   * and storage size values include data for object parts that are the result of
   * incomplete multipart uploads. For more information, see <a
   * href="https://docs.aws.amazon.com/macie/latest/user/monitoring-s3-how-it-works.html">How
   * Macie monitors Amazon S3 data security</a> in the <i>Amazon Macie User
   * Guide</i>.</p> <p>If an error or issue prevents Macie from retrieving and
   * processing metadata from Amazon S3 for the bucket or the bucket's objects, the
   * value for the versioning property is false and the value for most other
   * properties is null or UNKNOWN. Key exceptions are accountId, bucketArn,
   * bucketCreatedAt, bucketName, lastUpdated, and region. To identify the cause,
   * refer to the errorCode and errorMessage values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketMetadata">AWS
   * API Reference</a></p>
   */
  class BucketMetadata
  {
  public:
    AWS_MACIE2_API BucketMetadata() = default;
    AWS_MACIE2_API BucketMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API BucketMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * bucket.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    BucketMetadata& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the bucket policy for the bucket requires server-side
     * encryption of objects when objects are added to the bucket. Possible values
     * are:</p> <ul><li><p>FALSE - The bucket policy requires server-side encryption of
     * new objects. PutObject requests must include a valid server-side encryption
     * header.</p></li> <li><p>TRUE - The bucket doesn't have a bucket policy or it has
     * a bucket policy that doesn't require server-side encryption of new objects. If a
     * bucket policy exists, it doesn't require PutObject requests to include a valid
     * server-side encryption header.</p></li> <li><p>UNKNOWN - Amazon Macie can't
     * determine whether the bucket policy requires server-side encryption of new
     * objects.</p></li></ul> <p>Valid server-side encryption headers are:
     * x-amz-server-side-encryption with a value of AES256 or aws:kms, and
     * x-amz-server-side-encryption-customer-algorithm with a value of AES256.</p>
     */
    inline AllowsUnencryptedObjectUploads GetAllowsUnencryptedObjectUploads() const { return m_allowsUnencryptedObjectUploads; }
    inline bool AllowsUnencryptedObjectUploadsHasBeenSet() const { return m_allowsUnencryptedObjectUploadsHasBeenSet; }
    inline void SetAllowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads value) { m_allowsUnencryptedObjectUploadsHasBeenSet = true; m_allowsUnencryptedObjectUploads = value; }
    inline BucketMetadata& WithAllowsUnencryptedObjectUploads(AllowsUnencryptedObjectUploads value) { SetAllowsUnencryptedObjectUploads(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether automated sensitive data discovery is currently configured
     * to analyze objects in the bucket. Possible values are: MONITORED, the bucket is
     * included in analyses; and, NOT_MONITORED, the bucket is excluded from analyses.
     * If automated sensitive data discovery is disabled for your account, this value
     * is NOT_MONITORED.</p>
     */
    inline AutomatedDiscoveryMonitoringStatus GetAutomatedDiscoveryMonitoringStatus() const { return m_automatedDiscoveryMonitoringStatus; }
    inline bool AutomatedDiscoveryMonitoringStatusHasBeenSet() const { return m_automatedDiscoveryMonitoringStatusHasBeenSet; }
    inline void SetAutomatedDiscoveryMonitoringStatus(AutomatedDiscoveryMonitoringStatus value) { m_automatedDiscoveryMonitoringStatusHasBeenSet = true; m_automatedDiscoveryMonitoringStatus = value; }
    inline BucketMetadata& WithAutomatedDiscoveryMonitoringStatus(AutomatedDiscoveryMonitoringStatus value) { SetAutomatedDiscoveryMonitoringStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
    template<typename BucketArnT = Aws::String>
    void SetBucketArn(BucketArnT&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::forward<BucketArnT>(value); }
    template<typename BucketArnT = Aws::String>
    BucketMetadata& WithBucketArn(BucketArnT&& value) { SetBucketArn(std::forward<BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created. This value can also indicate when changes such as edits to the bucket's
     * policy were most recently made to the bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetBucketCreatedAt() const { return m_bucketCreatedAt; }
    inline bool BucketCreatedAtHasBeenSet() const { return m_bucketCreatedAtHasBeenSet; }
    template<typename BucketCreatedAtT = Aws::Utils::DateTime>
    void SetBucketCreatedAt(BucketCreatedAtT&& value) { m_bucketCreatedAtHasBeenSet = true; m_bucketCreatedAt = std::forward<BucketCreatedAtT>(value); }
    template<typename BucketCreatedAtT = Aws::Utils::DateTime>
    BucketMetadata& WithBucketCreatedAt(BucketCreatedAtT&& value) { SetBucketCreatedAt(std::forward<BucketCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the bucket.</p>
     */
    inline const Aws::String& GetBucketName() const { return m_bucketName; }
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }
    template<typename BucketNameT = Aws::String>
    void SetBucketName(BucketNameT&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::forward<BucketNameT>(value); }
    template<typename BucketNameT = Aws::String>
    BucketMetadata& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie can analyze in the bucket.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline long long GetClassifiableObjectCount() const { return m_classifiableObjectCount; }
    inline bool ClassifiableObjectCountHasBeenSet() const { return m_classifiableObjectCountHasBeenSet; }
    inline void SetClassifiableObjectCount(long long value) { m_classifiableObjectCountHasBeenSet = true; m_classifiableObjectCount = value; }
    inline BucketMetadata& WithClassifiableObjectCount(long long value) { SetClassifiableObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can
     * analyze in the bucket. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for the bucket, Macie calculates this value based on the size of the
     * latest version of each applicable object in the bucket. This value doesn't
     * reflect the storage size of all versions of each applicable object in the
     * bucket.</p>
     */
    inline long long GetClassifiableSizeInBytes() const { return m_classifiableSizeInBytes; }
    inline bool ClassifiableSizeInBytesHasBeenSet() const { return m_classifiableSizeInBytesHasBeenSet; }
    inline void SetClassifiableSizeInBytes(long long value) { m_classifiableSizeInBytesHasBeenSet = true; m_classifiableSizeInBytes = value; }
    inline BucketMetadata& WithClassifiableSizeInBytes(long long value) { SetClassifiableSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The code for an error or issue that prevented Amazon Macie from retrieving
     * and processing information about the bucket and the bucket's objects. Possible
     * values are:</p> <ul><li><p>ACCESS_DENIED - Macie doesn't have permission to
     * retrieve the information. For example, the bucket has a restrictive bucket
     * policy and Amazon S3 denied the request.</p></li>
     * <li><p>BUCKET_COUNT_EXCEEDS_QUOTA - Retrieving and processing the information
     * would exceed the quota for the number of buckets that Macie monitors for an
     * account (10,000).</p></li></ul> <p>If this value is null, Macie was able to
     * retrieve and process the information.</p>
     */
    inline BucketMetadataErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(BucketMetadataErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline BucketMetadata& WithErrorCode(BucketMetadataErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the error or issue (errorCode) that prevented Amazon
     * Macie from retrieving and processing information about the bucket and the
     * bucket's objects. This value is null if Macie was able to retrieve and process
     * the information.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    BucketMetadata& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze objects in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline const JobDetails& GetJobDetails() const { return m_jobDetails; }
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }
    template<typename JobDetailsT = JobDetails>
    void SetJobDetails(JobDetailsT&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::forward<JobDetailsT>(value); }
    template<typename JobDetailsT = JobDetails>
    BucketMetadata& WithJobDetails(JobDetailsT&& value) { SetJobDetails(std::forward<JobDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently analyzed objects in the bucket while performing automated
     * sensitive data discovery. This value is null if this analysis hasn't
     * occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAutomatedDiscoveryTime() const { return m_lastAutomatedDiscoveryTime; }
    inline bool LastAutomatedDiscoveryTimeHasBeenSet() const { return m_lastAutomatedDiscoveryTimeHasBeenSet; }
    template<typename LastAutomatedDiscoveryTimeT = Aws::Utils::DateTime>
    void SetLastAutomatedDiscoveryTime(LastAutomatedDiscoveryTimeT&& value) { m_lastAutomatedDiscoveryTimeHasBeenSet = true; m_lastAutomatedDiscoveryTime = std::forward<LastAutomatedDiscoveryTimeT>(value); }
    template<typename LastAutomatedDiscoveryTimeT = Aws::Utils::DateTime>
    BucketMetadata& WithLastAutomatedDiscoveryTime(LastAutomatedDiscoveryTimeT&& value) { SetLastAutomatedDiscoveryTime(std::forward<LastAutomatedDiscoveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved bucket or object metadata from Amazon S3 for the
     * bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    void SetLastUpdated(LastUpdatedT&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::forward<LastUpdatedT>(value); }
    template<typename LastUpdatedT = Aws::Utils::DateTime>
    BucketMetadata& WithLastUpdated(LastUpdatedT&& value) { SetLastUpdated(std::forward<LastUpdatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects in the bucket.</p>
     */
    inline long long GetObjectCount() const { return m_objectCount; }
    inline bool ObjectCountHasBeenSet() const { return m_objectCountHasBeenSet; }
    inline void SetObjectCount(long long value) { m_objectCountHasBeenSet = true; m_objectCount = value; }
    inline BucketMetadata& WithObjectCount(long long value) { SetObjectCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects in the bucket, grouped by server-side encryption
     * type. This includes a grouping that reports the total number of objects that
     * aren't encrypted or use client-side encryption.</p>
     */
    inline const ObjectCountByEncryptionType& GetObjectCountByEncryptionType() const { return m_objectCountByEncryptionType; }
    inline bool ObjectCountByEncryptionTypeHasBeenSet() const { return m_objectCountByEncryptionTypeHasBeenSet; }
    template<typename ObjectCountByEncryptionTypeT = ObjectCountByEncryptionType>
    void SetObjectCountByEncryptionType(ObjectCountByEncryptionTypeT&& value) { m_objectCountByEncryptionTypeHasBeenSet = true; m_objectCountByEncryptionType = std::forward<ObjectCountByEncryptionTypeT>(value); }
    template<typename ObjectCountByEncryptionTypeT = ObjectCountByEncryptionType>
    BucketMetadata& WithObjectCountByEncryptionType(ObjectCountByEncryptionTypeT&& value) { SetObjectCountByEncryptionType(std::forward<ObjectCountByEncryptionTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket, and provides information about
     * those settings.</p>
     */
    inline const BucketPublicAccess& GetPublicAccess() const { return m_publicAccess; }
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }
    template<typename PublicAccessT = BucketPublicAccess>
    void SetPublicAccess(PublicAccessT&& value) { m_publicAccessHasBeenSet = true; m_publicAccess = std::forward<PublicAccessT>(value); }
    template<typename PublicAccessT = BucketPublicAccess>
    BucketMetadata& WithPublicAccess(PublicAccessT&& value) { SetPublicAccess(std::forward<PublicAccessT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that hosts the bucket.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    BucketMetadata& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to buckets for other Amazon Web Services accounts and, if so, which
     * accounts.</p>
     */
    inline const ReplicationDetails& GetReplicationDetails() const { return m_replicationDetails; }
    inline bool ReplicationDetailsHasBeenSet() const { return m_replicationDetailsHasBeenSet; }
    template<typename ReplicationDetailsT = ReplicationDetails>
    void SetReplicationDetails(ReplicationDetailsT&& value) { m_replicationDetailsHasBeenSet = true; m_replicationDetails = std::forward<ReplicationDetailsT>(value); }
    template<typename ReplicationDetailsT = ReplicationDetails>
    BucketMetadata& WithReplicationDetails(ReplicationDetailsT&& value) { SetReplicationDetails(std::forward<ReplicationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sensitivity score for the bucket, ranging from -1 (classification error)
     * to 100 (sensitive).</p><p>If automated sensitive data discovery has never been
     * enabled for your account or it's been disabled for your organization or
     * standalone account for more than 30 days, possible values are: 1, the bucket is
     * empty; or, 50, the bucket stores objects but it's been excluded from recent
     * analyses.</p>
     */
    inline int GetSensitivityScore() const { return m_sensitivityScore; }
    inline bool SensitivityScoreHasBeenSet() const { return m_sensitivityScoreHasBeenSet; }
    inline void SetSensitivityScore(int value) { m_sensitivityScoreHasBeenSet = true; m_sensitivityScore = value; }
    inline BucketMetadata& WithSensitivityScore(int value) { SetSensitivityScore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default server-side encryption settings for the bucket.</p>
     */
    inline const BucketServerSideEncryption& GetServerSideEncryption() const { return m_serverSideEncryption; }
    inline bool ServerSideEncryptionHasBeenSet() const { return m_serverSideEncryptionHasBeenSet; }
    template<typename ServerSideEncryptionT = BucketServerSideEncryption>
    void SetServerSideEncryption(ServerSideEncryptionT&& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = std::forward<ServerSideEncryptionT>(value); }
    template<typename ServerSideEncryptionT = BucketServerSideEncryption>
    BucketMetadata& WithServerSideEncryption(ServerSideEncryptionT&& value) { SetServerSideEncryption(std::forward<ServerSideEncryptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the bucket is shared with another Amazon Web Services
     * account, an Amazon CloudFront origin access identity (OAI), or a CloudFront
     * origin access control (OAC). Possible values are:</p> <ul><li><p>EXTERNAL - The
     * bucket is shared with one or more of the following or any combination of the
     * following: a CloudFront OAI, a CloudFront OAC, or an Amazon Web Services account
     * that isn't part of your Amazon Macie organization.</p></li> <li><p>INTERNAL -
     * The bucket is shared with one or more Amazon Web Services accounts that are part
     * of your Amazon Macie organization. It isn't shared with a CloudFront OAI or
     * OAC.</p></li> <li><p>NOT_SHARED - The bucket isn't shared with another Amazon
     * Web Services account, a CloudFront OAI, or a CloudFront OAC.</p></li>
     * <li><p>UNKNOWN - Amazon Macie wasn't able to evaluate the shared access settings
     * for the bucket.</p></li></ul> <p>An <i>Amazon Macie organization</i> is a set of
     * Macie accounts that are centrally managed as a group of related accounts through
     * Organizations or by Macie invitation.</p>
     */
    inline SharedAccess GetSharedAccess() const { return m_sharedAccess; }
    inline bool SharedAccessHasBeenSet() const { return m_sharedAccessHasBeenSet; }
    inline void SetSharedAccess(SharedAccess value) { m_sharedAccessHasBeenSet = true; m_sharedAccess = value; }
    inline BucketMetadata& WithSharedAccess(SharedAccess value) { SetSharedAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the bucket.</p> <p>If versioning is
     * enabled for the bucket, Amazon Macie calculates this value based on the size of
     * the latest version of each object in the bucket. This value doesn't reflect the
     * storage size of all versions of each object in the bucket.</p>
     */
    inline long long GetSizeInBytes() const { return m_sizeInBytes; }
    inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }
    inline BucketMetadata& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the bucket.</p> <p>If versioning is enabled for the
     * bucket, Amazon Macie calculates this value based on the size of the latest
     * version of each applicable object in the bucket. This value doesn't reflect the
     * storage size of all versions of each applicable object in the bucket.</p>
     */
    inline long long GetSizeInBytesCompressed() const { return m_sizeInBytesCompressed; }
    inline bool SizeInBytesCompressedHasBeenSet() const { return m_sizeInBytesCompressedHasBeenSet; }
    inline void SetSizeInBytesCompressed(long long value) { m_sizeInBytesCompressedHasBeenSet = true; m_sizeInBytesCompressed = value; }
    inline BucketMetadata& WithSizeInBytesCompressed(long long value) { SetSizeInBytesCompressed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that specifies the tags (keys and values) that are associated with
     * the bucket.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<KeyValuePair>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<KeyValuePair>>
    BucketMetadata& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = KeyValuePair>
    BucketMetadata& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the bucket.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectCount() const { return m_unclassifiableObjectCount; }
    inline bool UnclassifiableObjectCountHasBeenSet() const { return m_unclassifiableObjectCountHasBeenSet; }
    template<typename UnclassifiableObjectCountT = ObjectLevelStatistics>
    void SetUnclassifiableObjectCount(UnclassifiableObjectCountT&& value) { m_unclassifiableObjectCountHasBeenSet = true; m_unclassifiableObjectCount = std::forward<UnclassifiableObjectCountT>(value); }
    template<typename UnclassifiableObjectCountT = ObjectLevelStatistics>
    BucketMetadata& WithUnclassifiableObjectCount(UnclassifiableObjectCountT&& value) { SetUnclassifiableObjectCount(std::forward<UnclassifiableObjectCountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the bucket. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectSizeInBytes() const { return m_unclassifiableObjectSizeInBytes; }
    inline bool UnclassifiableObjectSizeInBytesHasBeenSet() const { return m_unclassifiableObjectSizeInBytesHasBeenSet; }
    template<typename UnclassifiableObjectSizeInBytesT = ObjectLevelStatistics>
    void SetUnclassifiableObjectSizeInBytes(UnclassifiableObjectSizeInBytesT&& value) { m_unclassifiableObjectSizeInBytesHasBeenSet = true; m_unclassifiableObjectSizeInBytes = std::forward<UnclassifiableObjectSizeInBytesT>(value); }
    template<typename UnclassifiableObjectSizeInBytesT = ObjectLevelStatistics>
    BucketMetadata& WithUnclassifiableObjectSizeInBytes(UnclassifiableObjectSizeInBytesT&& value) { SetUnclassifiableObjectSizeInBytes(std::forward<UnclassifiableObjectSizeInBytesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether versioning is enabled for the bucket.</p>
     */
    inline bool GetVersioning() const { return m_versioning; }
    inline bool VersioningHasBeenSet() const { return m_versioningHasBeenSet; }
    inline void SetVersioning(bool value) { m_versioningHasBeenSet = true; m_versioning = value; }
    inline BucketMetadata& WithVersioning(bool value) { SetVersioning(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AllowsUnencryptedObjectUploads m_allowsUnencryptedObjectUploads{AllowsUnencryptedObjectUploads::NOT_SET};
    bool m_allowsUnencryptedObjectUploadsHasBeenSet = false;

    AutomatedDiscoveryMonitoringStatus m_automatedDiscoveryMonitoringStatus{AutomatedDiscoveryMonitoringStatus::NOT_SET};
    bool m_automatedDiscoveryMonitoringStatusHasBeenSet = false;

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    Aws::Utils::DateTime m_bucketCreatedAt{};
    bool m_bucketCreatedAtHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    long long m_classifiableObjectCount{0};
    bool m_classifiableObjectCountHasBeenSet = false;

    long long m_classifiableSizeInBytes{0};
    bool m_classifiableSizeInBytesHasBeenSet = false;

    BucketMetadataErrorCode m_errorCode{BucketMetadataErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    JobDetails m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastAutomatedDiscoveryTime{};
    bool m_lastAutomatedDiscoveryTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdated{};
    bool m_lastUpdatedHasBeenSet = false;

    long long m_objectCount{0};
    bool m_objectCountHasBeenSet = false;

    ObjectCountByEncryptionType m_objectCountByEncryptionType;
    bool m_objectCountByEncryptionTypeHasBeenSet = false;

    BucketPublicAccess m_publicAccess;
    bool m_publicAccessHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    ReplicationDetails m_replicationDetails;
    bool m_replicationDetailsHasBeenSet = false;

    int m_sensitivityScore{0};
    bool m_sensitivityScoreHasBeenSet = false;

    BucketServerSideEncryption m_serverSideEncryption;
    bool m_serverSideEncryptionHasBeenSet = false;

    SharedAccess m_sharedAccess{SharedAccess::NOT_SET};
    bool m_sharedAccessHasBeenSet = false;

    long long m_sizeInBytes{0};
    bool m_sizeInBytesHasBeenSet = false;

    long long m_sizeInBytesCompressed{0};
    bool m_sizeInBytesCompressedHasBeenSet = false;

    Aws::Vector<KeyValuePair> m_tags;
    bool m_tagsHasBeenSet = false;

    ObjectLevelStatistics m_unclassifiableObjectCount;
    bool m_unclassifiableObjectCountHasBeenSet = false;

    ObjectLevelStatistics m_unclassifiableObjectSizeInBytes;
    bool m_unclassifiableObjectSizeInBytesHasBeenSet = false;

    bool m_versioning{false};
    bool m_versioningHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
