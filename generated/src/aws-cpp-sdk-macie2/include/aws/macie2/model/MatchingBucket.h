/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/AutomatedDiscoveryMonitoringStatus.h>
#include <aws/macie2/model/BucketMetadataErrorCode.h>
#include <aws/macie2/model/JobDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/ObjectCountByEncryptionType.h>
#include <aws/macie2/model/ObjectLevelStatistics.h>
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
   * processing information about the bucket or the bucket's objects, the value for
   * many of these properties is null. Key exceptions are accountId and bucketName.
   * To identify the cause, refer to the errorCode and errorMessage
   * values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/MatchingBucket">AWS
   * API Reference</a></p>
   */
  class MatchingBucket
  {
  public:
    AWS_MACIE2_API MatchingBucket() = default;
    AWS_MACIE2_API MatchingBucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API MatchingBucket& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    MatchingBucket& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
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
    inline MatchingBucket& WithAutomatedDiscoveryMonitoringStatus(AutomatedDiscoveryMonitoringStatus value) { SetAutomatedDiscoveryMonitoringStatus(value); return *this;}
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
    MatchingBucket& WithBucketName(BucketNameT&& value) { SetBucketName(std::forward<BucketNameT>(value)); return *this;}
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
    inline MatchingBucket& WithClassifiableObjectCount(long long value) { SetClassifiableObjectCount(value); return *this;}
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
    inline MatchingBucket& WithClassifiableSizeInBytes(long long value) { SetClassifiableSizeInBytes(value); return *this;}
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
    inline MatchingBucket& WithErrorCode(BucketMetadataErrorCode value) { SetErrorCode(value); return *this;}
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
    MatchingBucket& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
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
    MatchingBucket& WithJobDetails(JobDetailsT&& value) { SetJobDetails(std::forward<JobDetailsT>(value)); return *this;}
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
    MatchingBucket& WithLastAutomatedDiscoveryTime(LastAutomatedDiscoveryTimeT&& value) { SetLastAutomatedDiscoveryTime(std::forward<LastAutomatedDiscoveryTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of objects in the bucket.</p>
     */
    inline long long GetObjectCount() const { return m_objectCount; }
    inline bool ObjectCountHasBeenSet() const { return m_objectCountHasBeenSet; }
    inline void SetObjectCount(long long value) { m_objectCountHasBeenSet = true; m_objectCount = value; }
    inline MatchingBucket& WithObjectCount(long long value) { SetObjectCount(value); return *this;}
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
    MatchingBucket& WithObjectCountByEncryptionType(ObjectCountByEncryptionTypeT&& value) { SetObjectCountByEncryptionType(std::forward<ObjectCountByEncryptionTypeT>(value)); return *this;}
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
    inline MatchingBucket& WithSensitivityScore(int value) { SetSensitivityScore(value); return *this;}
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
    inline MatchingBucket& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
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
    inline MatchingBucket& WithSizeInBytesCompressed(long long value) { SetSizeInBytesCompressed(value); return *this;}
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
    MatchingBucket& WithUnclassifiableObjectCount(UnclassifiableObjectCountT&& value) { SetUnclassifiableObjectCount(std::forward<UnclassifiableObjectCountT>(value)); return *this;}
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
    MatchingBucket& WithUnclassifiableObjectSizeInBytes(UnclassifiableObjectSizeInBytesT&& value) { SetUnclassifiableObjectSizeInBytes(std::forward<UnclassifiableObjectSizeInBytesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    AutomatedDiscoveryMonitoringStatus m_automatedDiscoveryMonitoringStatus{AutomatedDiscoveryMonitoringStatus::NOT_SET};
    bool m_automatedDiscoveryMonitoringStatusHasBeenSet = false;

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

    long long m_objectCount{0};
    bool m_objectCountHasBeenSet = false;

    ObjectCountByEncryptionType m_objectCountByEncryptionType;
    bool m_objectCountByEncryptionTypeHasBeenSet = false;

    int m_sensitivityScore{0};
    bool m_sensitivityScoreHasBeenSet = false;

    long long m_sizeInBytes{0};
    bool m_sizeInBytesHasBeenSet = false;

    long long m_sizeInBytesCompressed{0};
    bool m_sizeInBytesCompressedHasBeenSet = false;

    ObjectLevelStatistics m_unclassifiableObjectCount;
    bool m_unclassifiableObjectCountHasBeenSet = false;

    ObjectLevelStatistics m_unclassifiableObjectSizeInBytes;
    bool m_unclassifiableObjectSizeInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
