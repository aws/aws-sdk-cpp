/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * Amazon Macie monitors and analyzes for your account. If an error occurs when
   * Macie attempts to retrieve and process information about the bucket or the
   * bucket's objects, the value for most of these properties is null. Key exceptions
   * are accountId and bucketName. To identify the cause of the error, refer to the
   * errorCode and errorMessage values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/MatchingBucket">AWS
   * API Reference</a></p>
   */
  class MatchingBucket
  {
  public:
    AWS_MACIE2_API MatchingBucket();
    AWS_MACIE2_API MatchingBucket(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API MatchingBucket& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * bucket.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * bucket.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * bucket.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * bucket.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * bucket.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * bucket.</p>
     */
    inline MatchingBucket& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * bucket.</p>
     */
    inline MatchingBucket& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * bucket.</p>
     */
    inline MatchingBucket& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the bucket.</p>
     */
    inline const Aws::String& GetBucketName() const{ return m_bucketName; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline bool BucketNameHasBeenSet() const { return m_bucketNameHasBeenSet; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetBucketName(const Aws::String& value) { m_bucketNameHasBeenSet = true; m_bucketName = value; }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetBucketName(Aws::String&& value) { m_bucketNameHasBeenSet = true; m_bucketName = std::move(value); }

    /**
     * <p>The name of the bucket.</p>
     */
    inline void SetBucketName(const char* value) { m_bucketNameHasBeenSet = true; m_bucketName.assign(value); }

    /**
     * <p>The name of the bucket.</p>
     */
    inline MatchingBucket& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline MatchingBucket& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline MatchingBucket& WithBucketName(const char* value) { SetBucketName(value); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie can analyze in the bucket.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline long long GetClassifiableObjectCount() const{ return m_classifiableObjectCount; }

    /**
     * <p>The total number of objects that Amazon Macie can analyze in the bucket.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline bool ClassifiableObjectCountHasBeenSet() const { return m_classifiableObjectCountHasBeenSet; }

    /**
     * <p>The total number of objects that Amazon Macie can analyze in the bucket.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline void SetClassifiableObjectCount(long long value) { m_classifiableObjectCountHasBeenSet = true; m_classifiableObjectCount = value; }

    /**
     * <p>The total number of objects that Amazon Macie can analyze in the bucket.
     * These objects use a supported storage class and have a file name extension for a
     * supported file or storage format.</p>
     */
    inline MatchingBucket& WithClassifiableObjectCount(long long value) { SetClassifiableObjectCount(value); return *this;}


    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can
     * analyze in the bucket. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for the bucket, Macie calculates this value based on the size of the
     * latest version of each applicable object in the bucket. This value doesn't
     * reflect the storage size of all versions of each applicable object in the
     * bucket.</p>
     */
    inline long long GetClassifiableSizeInBytes() const{ return m_classifiableSizeInBytes; }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can
     * analyze in the bucket. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for the bucket, Macie calculates this value based on the size of the
     * latest version of each applicable object in the bucket. This value doesn't
     * reflect the storage size of all versions of each applicable object in the
     * bucket.</p>
     */
    inline bool ClassifiableSizeInBytesHasBeenSet() const { return m_classifiableSizeInBytesHasBeenSet; }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can
     * analyze in the bucket. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for the bucket, Macie calculates this value based on the size of the
     * latest version of each applicable object in the bucket. This value doesn't
     * reflect the storage size of all versions of each applicable object in the
     * bucket.</p>
     */
    inline void SetClassifiableSizeInBytes(long long value) { m_classifiableSizeInBytesHasBeenSet = true; m_classifiableSizeInBytes = value; }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can
     * analyze in the bucket. These objects use a supported storage class and have a
     * file name extension for a supported file or storage format.</p> <p>If versioning
     * is enabled for the bucket, Macie calculates this value based on the size of the
     * latest version of each applicable object in the bucket. This value doesn't
     * reflect the storage size of all versions of each applicable object in the
     * bucket.</p>
     */
    inline MatchingBucket& WithClassifiableSizeInBytes(long long value) { SetClassifiableSizeInBytes(value); return *this;}


    /**
     * <p>Specifies the error code for an error that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * If this value is ACCESS_DENIED, Macie doesn't have permission to retrieve the
     * information. For example, the bucket has a restrictive bucket policy and Amazon
     * S3 denied the request. If this value is null, Macie was able to retrieve and
     * process the information.</p>
     */
    inline const BucketMetadataErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Specifies the error code for an error that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * If this value is ACCESS_DENIED, Macie doesn't have permission to retrieve the
     * information. For example, the bucket has a restrictive bucket policy and Amazon
     * S3 denied the request. If this value is null, Macie was able to retrieve and
     * process the information.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Specifies the error code for an error that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * If this value is ACCESS_DENIED, Macie doesn't have permission to retrieve the
     * information. For example, the bucket has a restrictive bucket policy and Amazon
     * S3 denied the request. If this value is null, Macie was able to retrieve and
     * process the information.</p>
     */
    inline void SetErrorCode(const BucketMetadataErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Specifies the error code for an error that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * If this value is ACCESS_DENIED, Macie doesn't have permission to retrieve the
     * information. For example, the bucket has a restrictive bucket policy and Amazon
     * S3 denied the request. If this value is null, Macie was able to retrieve and
     * process the information.</p>
     */
    inline void SetErrorCode(BucketMetadataErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Specifies the error code for an error that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * If this value is ACCESS_DENIED, Macie doesn't have permission to retrieve the
     * information. For example, the bucket has a restrictive bucket policy and Amazon
     * S3 denied the request. If this value is null, Macie was able to retrieve and
     * process the information.</p>
     */
    inline MatchingBucket& WithErrorCode(const BucketMetadataErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Specifies the error code for an error that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * If this value is ACCESS_DENIED, Macie doesn't have permission to retrieve the
     * information. For example, the bucket has a restrictive bucket policy and Amazon
     * S3 denied the request. If this value is null, Macie was able to retrieve and
     * process the information.</p>
     */
    inline MatchingBucket& WithErrorCode(BucketMetadataErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>A brief description of the error (errorCode) that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * This value is null if Macie was able to retrieve and process the
     * information.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>A brief description of the error (errorCode) that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * This value is null if Macie was able to retrieve and process the
     * information.</p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p>A brief description of the error (errorCode) that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * This value is null if Macie was able to retrieve and process the
     * information.</p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p>A brief description of the error (errorCode) that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * This value is null if Macie was able to retrieve and process the
     * information.</p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p>A brief description of the error (errorCode) that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * This value is null if Macie was able to retrieve and process the
     * information.</p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p>A brief description of the error (errorCode) that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * This value is null if Macie was able to retrieve and process the
     * information.</p>
     */
    inline MatchingBucket& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>A brief description of the error (errorCode) that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * This value is null if Macie was able to retrieve and process the
     * information.</p>
     */
    inline MatchingBucket& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p>A brief description of the error (errorCode) that prevented Amazon Macie from
     * retrieving and processing information about the bucket and the bucket's objects.
     * This value is null if Macie was able to retrieve and process the
     * information.</p>
     */
    inline MatchingBucket& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}


    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze objects in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline const JobDetails& GetJobDetails() const{ return m_jobDetails; }

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze objects in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze objects in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline void SetJobDetails(const JobDetails& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze objects in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline void SetJobDetails(JobDetails&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze objects in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline MatchingBucket& WithJobDetails(const JobDetails& value) { SetJobDetails(value); return *this;}

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze objects in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline MatchingBucket& WithJobDetails(JobDetails&& value) { SetJobDetails(std::move(value)); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently performed automated sensitive data discovery for the bucket. This
     * value is null if automated sensitive data discovery is currently disabled for
     * your account.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAutomatedDiscoveryTime() const{ return m_lastAutomatedDiscoveryTime; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently performed automated sensitive data discovery for the bucket. This
     * value is null if automated sensitive data discovery is currently disabled for
     * your account.</p>
     */
    inline bool LastAutomatedDiscoveryTimeHasBeenSet() const { return m_lastAutomatedDiscoveryTimeHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently performed automated sensitive data discovery for the bucket. This
     * value is null if automated sensitive data discovery is currently disabled for
     * your account.</p>
     */
    inline void SetLastAutomatedDiscoveryTime(const Aws::Utils::DateTime& value) { m_lastAutomatedDiscoveryTimeHasBeenSet = true; m_lastAutomatedDiscoveryTime = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently performed automated sensitive data discovery for the bucket. This
     * value is null if automated sensitive data discovery is currently disabled for
     * your account.</p>
     */
    inline void SetLastAutomatedDiscoveryTime(Aws::Utils::DateTime&& value) { m_lastAutomatedDiscoveryTimeHasBeenSet = true; m_lastAutomatedDiscoveryTime = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently performed automated sensitive data discovery for the bucket. This
     * value is null if automated sensitive data discovery is currently disabled for
     * your account.</p>
     */
    inline MatchingBucket& WithLastAutomatedDiscoveryTime(const Aws::Utils::DateTime& value) { SetLastAutomatedDiscoveryTime(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently performed automated sensitive data discovery for the bucket. This
     * value is null if automated sensitive data discovery is currently disabled for
     * your account.</p>
     */
    inline MatchingBucket& WithLastAutomatedDiscoveryTime(Aws::Utils::DateTime&& value) { SetLastAutomatedDiscoveryTime(std::move(value)); return *this;}


    /**
     * <p>The total number of objects in the bucket.</p>
     */
    inline long long GetObjectCount() const{ return m_objectCount; }

    /**
     * <p>The total number of objects in the bucket.</p>
     */
    inline bool ObjectCountHasBeenSet() const { return m_objectCountHasBeenSet; }

    /**
     * <p>The total number of objects in the bucket.</p>
     */
    inline void SetObjectCount(long long value) { m_objectCountHasBeenSet = true; m_objectCount = value; }

    /**
     * <p>The total number of objects in the bucket.</p>
     */
    inline MatchingBucket& WithObjectCount(long long value) { SetObjectCount(value); return *this;}


    /**
     * <p>The total number of objects in the bucket, grouped by server-side encryption
     * type. This includes a grouping that reports the total number of objects that
     * aren't encrypted or use client-side encryption.</p>
     */
    inline const ObjectCountByEncryptionType& GetObjectCountByEncryptionType() const{ return m_objectCountByEncryptionType; }

    /**
     * <p>The total number of objects in the bucket, grouped by server-side encryption
     * type. This includes a grouping that reports the total number of objects that
     * aren't encrypted or use client-side encryption.</p>
     */
    inline bool ObjectCountByEncryptionTypeHasBeenSet() const { return m_objectCountByEncryptionTypeHasBeenSet; }

    /**
     * <p>The total number of objects in the bucket, grouped by server-side encryption
     * type. This includes a grouping that reports the total number of objects that
     * aren't encrypted or use client-side encryption.</p>
     */
    inline void SetObjectCountByEncryptionType(const ObjectCountByEncryptionType& value) { m_objectCountByEncryptionTypeHasBeenSet = true; m_objectCountByEncryptionType = value; }

    /**
     * <p>The total number of objects in the bucket, grouped by server-side encryption
     * type. This includes a grouping that reports the total number of objects that
     * aren't encrypted or use client-side encryption.</p>
     */
    inline void SetObjectCountByEncryptionType(ObjectCountByEncryptionType&& value) { m_objectCountByEncryptionTypeHasBeenSet = true; m_objectCountByEncryptionType = std::move(value); }

    /**
     * <p>The total number of objects in the bucket, grouped by server-side encryption
     * type. This includes a grouping that reports the total number of objects that
     * aren't encrypted or use client-side encryption.</p>
     */
    inline MatchingBucket& WithObjectCountByEncryptionType(const ObjectCountByEncryptionType& value) { SetObjectCountByEncryptionType(value); return *this;}

    /**
     * <p>The total number of objects in the bucket, grouped by server-side encryption
     * type. This includes a grouping that reports the total number of objects that
     * aren't encrypted or use client-side encryption.</p>
     */
    inline MatchingBucket& WithObjectCountByEncryptionType(ObjectCountByEncryptionType&& value) { SetObjectCountByEncryptionType(std::move(value)); return *this;}


    /**
     * <p>The current sensitivity score for the bucket, ranging from -1 (no analysis
     * due to an error) to 100 (sensitive). This value is null if automated sensitive
     * data discovery is currently disabled for your account.</p>
     */
    inline int GetSensitivityScore() const{ return m_sensitivityScore; }

    /**
     * <p>The current sensitivity score for the bucket, ranging from -1 (no analysis
     * due to an error) to 100 (sensitive). This value is null if automated sensitive
     * data discovery is currently disabled for your account.</p>
     */
    inline bool SensitivityScoreHasBeenSet() const { return m_sensitivityScoreHasBeenSet; }

    /**
     * <p>The current sensitivity score for the bucket, ranging from -1 (no analysis
     * due to an error) to 100 (sensitive). This value is null if automated sensitive
     * data discovery is currently disabled for your account.</p>
     */
    inline void SetSensitivityScore(int value) { m_sensitivityScoreHasBeenSet = true; m_sensitivityScore = value; }

    /**
     * <p>The current sensitivity score for the bucket, ranging from -1 (no analysis
     * due to an error) to 100 (sensitive). This value is null if automated sensitive
     * data discovery is currently disabled for your account.</p>
     */
    inline MatchingBucket& WithSensitivityScore(int value) { SetSensitivityScore(value); return *this;}


    /**
     * <p>The total storage size, in bytes, of the bucket.</p> <p>If versioning is
     * enabled for the bucket, Amazon Macie calculates this value based on the size of
     * the latest version of each object in the bucket. This value doesn't reflect the
     * storage size of all versions of each object in the bucket.</p>
     */
    inline long long GetSizeInBytes() const{ return m_sizeInBytes; }

    /**
     * <p>The total storage size, in bytes, of the bucket.</p> <p>If versioning is
     * enabled for the bucket, Amazon Macie calculates this value based on the size of
     * the latest version of each object in the bucket. This value doesn't reflect the
     * storage size of all versions of each object in the bucket.</p>
     */
    inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }

    /**
     * <p>The total storage size, in bytes, of the bucket.</p> <p>If versioning is
     * enabled for the bucket, Amazon Macie calculates this value based on the size of
     * the latest version of each object in the bucket. This value doesn't reflect the
     * storage size of all versions of each object in the bucket.</p>
     */
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }

    /**
     * <p>The total storage size, in bytes, of the bucket.</p> <p>If versioning is
     * enabled for the bucket, Amazon Macie calculates this value based on the size of
     * the latest version of each object in the bucket. This value doesn't reflect the
     * storage size of all versions of each object in the bucket.</p>
     */
    inline MatchingBucket& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}


    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the bucket.</p> <p>If versioning is enabled for the
     * bucket, Amazon Macie calculates this value based on the size of the latest
     * version of each applicable object in the bucket. This value doesn't reflect the
     * storage size of all versions of each applicable object in the bucket.</p>
     */
    inline long long GetSizeInBytesCompressed() const{ return m_sizeInBytesCompressed; }

    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the bucket.</p> <p>If versioning is enabled for the
     * bucket, Amazon Macie calculates this value based on the size of the latest
     * version of each applicable object in the bucket. This value doesn't reflect the
     * storage size of all versions of each applicable object in the bucket.</p>
     */
    inline bool SizeInBytesCompressedHasBeenSet() const { return m_sizeInBytesCompressedHasBeenSet; }

    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the bucket.</p> <p>If versioning is enabled for the
     * bucket, Amazon Macie calculates this value based on the size of the latest
     * version of each applicable object in the bucket. This value doesn't reflect the
     * storage size of all versions of each applicable object in the bucket.</p>
     */
    inline void SetSizeInBytesCompressed(long long value) { m_sizeInBytesCompressedHasBeenSet = true; m_sizeInBytesCompressed = value; }

    /**
     * <p>The total storage size, in bytes, of the objects that are compressed (.gz,
     * .gzip, .zip) files in the bucket.</p> <p>If versioning is enabled for the
     * bucket, Amazon Macie calculates this value based on the size of the latest
     * version of each applicable object in the bucket. This value doesn't reflect the
     * storage size of all versions of each applicable object in the bucket.</p>
     */
    inline MatchingBucket& WithSizeInBytesCompressed(long long value) { SetSizeInBytesCompressed(value); return *this;}


    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the bucket.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectCount() const{ return m_unclassifiableObjectCount; }

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the bucket.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline bool UnclassifiableObjectCountHasBeenSet() const { return m_unclassifiableObjectCountHasBeenSet; }

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the bucket.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline void SetUnclassifiableObjectCount(const ObjectLevelStatistics& value) { m_unclassifiableObjectCountHasBeenSet = true; m_unclassifiableObjectCount = value; }

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the bucket.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline void SetUnclassifiableObjectCount(ObjectLevelStatistics&& value) { m_unclassifiableObjectCountHasBeenSet = true; m_unclassifiableObjectCount = std::move(value); }

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the bucket.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline MatchingBucket& WithUnclassifiableObjectCount(const ObjectLevelStatistics& value) { SetUnclassifiableObjectCount(value); return *this;}

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the bucket.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline MatchingBucket& WithUnclassifiableObjectCount(ObjectLevelStatistics&& value) { SetUnclassifiableObjectCount(std::move(value)); return *this;}


    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the bucket. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline const ObjectLevelStatistics& GetUnclassifiableObjectSizeInBytes() const{ return m_unclassifiableObjectSizeInBytes; }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the bucket. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline bool UnclassifiableObjectSizeInBytesHasBeenSet() const { return m_unclassifiableObjectSizeInBytesHasBeenSet; }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the bucket. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline void SetUnclassifiableObjectSizeInBytes(const ObjectLevelStatistics& value) { m_unclassifiableObjectSizeInBytesHasBeenSet = true; m_unclassifiableObjectSizeInBytes = value; }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the bucket. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline void SetUnclassifiableObjectSizeInBytes(ObjectLevelStatistics&& value) { m_unclassifiableObjectSizeInBytesHasBeenSet = true; m_unclassifiableObjectSizeInBytes = std::move(value); }

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the bucket. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline MatchingBucket& WithUnclassifiableObjectSizeInBytes(const ObjectLevelStatistics& value) { SetUnclassifiableObjectSizeInBytes(value); return *this;}

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the bucket. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline MatchingBucket& WithUnclassifiableObjectSizeInBytes(ObjectLevelStatistics&& value) { SetUnclassifiableObjectSizeInBytes(std::move(value)); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet = false;

    long long m_classifiableObjectCount;
    bool m_classifiableObjectCountHasBeenSet = false;

    long long m_classifiableSizeInBytes;
    bool m_classifiableSizeInBytesHasBeenSet = false;

    BucketMetadataErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    JobDetails m_jobDetails;
    bool m_jobDetailsHasBeenSet = false;

    Aws::Utils::DateTime m_lastAutomatedDiscoveryTime;
    bool m_lastAutomatedDiscoveryTimeHasBeenSet = false;

    long long m_objectCount;
    bool m_objectCountHasBeenSet = false;

    ObjectCountByEncryptionType m_objectCountByEncryptionType;
    bool m_objectCountByEncryptionTypeHasBeenSet = false;

    int m_sensitivityScore;
    bool m_sensitivityScoreHasBeenSet = false;

    long long m_sizeInBytes;
    bool m_sizeInBytesHasBeenSet = false;

    long long m_sizeInBytesCompressed;
    bool m_sizeInBytesCompressedHasBeenSet = false;

    ObjectLevelStatistics m_unclassifiableObjectCount;
    bool m_unclassifiableObjectCountHasBeenSet = false;

    ObjectLevelStatistics m_unclassifiableObjectSizeInBytes;
    bool m_unclassifiableObjectSizeInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
