/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Provides information about an S3 bucket that Amazon Macie monitors and
   * analyzes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/BucketMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API BucketMetadata
  {
  public:
    BucketMetadata();
    BucketMetadata(Aws::Utils::Json::JsonView jsonValue);
    BucketMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the AWS account that owns the bucket.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the AWS account that owns the bucket.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the AWS account that owns the bucket.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the AWS account that owns the bucket.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the AWS account that owns the bucket.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the AWS account that owns the bucket.</p>
     */
    inline BucketMetadata& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the AWS account that owns the bucket.</p>
     */
    inline BucketMetadata& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the AWS account that owns the bucket.</p>
     */
    inline BucketMetadata& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline BucketMetadata& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline BucketMetadata& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the bucket.</p>
     */
    inline BucketMetadata& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetBucketCreatedAt() const{ return m_bucketCreatedAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline bool BucketCreatedAtHasBeenSet() const { return m_bucketCreatedAtHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline void SetBucketCreatedAt(const Aws::Utils::DateTime& value) { m_bucketCreatedAtHasBeenSet = true; m_bucketCreatedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline void SetBucketCreatedAt(Aws::Utils::DateTime&& value) { m_bucketCreatedAtHasBeenSet = true; m_bucketCreatedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline BucketMetadata& WithBucketCreatedAt(const Aws::Utils::DateTime& value) { SetBucketCreatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when the bucket was
     * created.</p>
     */
    inline BucketMetadata& WithBucketCreatedAt(Aws::Utils::DateTime&& value) { SetBucketCreatedAt(std::move(value)); return *this;}


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
    inline BucketMetadata& WithBucketName(const Aws::String& value) { SetBucketName(value); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline BucketMetadata& WithBucketName(Aws::String&& value) { SetBucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the bucket.</p>
     */
    inline BucketMetadata& WithBucketName(const char* value) { SetBucketName(value); return *this;}


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
    inline BucketMetadata& WithClassifiableObjectCount(long long value) { SetClassifiableObjectCount(value); return *this;}


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
    inline BucketMetadata& WithClassifiableSizeInBytes(long long value) { SetClassifiableSizeInBytes(value); return *this;}


    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze data in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline const JobDetails& GetJobDetails() const{ return m_jobDetails; }

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze data in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline bool JobDetailsHasBeenSet() const { return m_jobDetailsHasBeenSet; }

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze data in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline void SetJobDetails(const JobDetails& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = value; }

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze data in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline void SetJobDetails(JobDetails&& value) { m_jobDetailsHasBeenSet = true; m_jobDetails = std::move(value); }

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze data in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline BucketMetadata& WithJobDetails(const JobDetails& value) { SetJobDetails(value); return *this;}

    /**
     * <p>Specifies whether any one-time or recurring classification jobs are
     * configured to analyze data in the bucket, and, if so, the details of the job
     * that ran most recently.</p>
     */
    inline BucketMetadata& WithJobDetails(JobDetails&& value) { SetJobDetails(std::move(value)); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * bucket.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdated() const{ return m_lastUpdated; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * bucket.</p>
     */
    inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * bucket.</p>
     */
    inline void SetLastUpdated(const Aws::Utils::DateTime& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * bucket.</p>
     */
    inline void SetLastUpdated(Aws::Utils::DateTime&& value) { m_lastUpdatedHasBeenSet = true; m_lastUpdated = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * bucket.</p>
     */
    inline BucketMetadata& WithLastUpdated(const Aws::Utils::DateTime& value) { SetLastUpdated(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * most recently retrieved both bucket and object metadata from Amazon S3 for the
     * bucket.</p>
     */
    inline BucketMetadata& WithLastUpdated(Aws::Utils::DateTime&& value) { SetLastUpdated(std::move(value)); return *this;}


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
    inline BucketMetadata& WithObjectCount(long long value) { SetObjectCount(value); return *this;}


    /**
     * <p>The total number of objects that are in the bucket, grouped by server-side
     * encryption type. This includes a grouping that reports the total number of
     * objects that aren't encrypted or use client-side encryption.</p>
     */
    inline const ObjectCountByEncryptionType& GetObjectCountByEncryptionType() const{ return m_objectCountByEncryptionType; }

    /**
     * <p>The total number of objects that are in the bucket, grouped by server-side
     * encryption type. This includes a grouping that reports the total number of
     * objects that aren't encrypted or use client-side encryption.</p>
     */
    inline bool ObjectCountByEncryptionTypeHasBeenSet() const { return m_objectCountByEncryptionTypeHasBeenSet; }

    /**
     * <p>The total number of objects that are in the bucket, grouped by server-side
     * encryption type. This includes a grouping that reports the total number of
     * objects that aren't encrypted or use client-side encryption.</p>
     */
    inline void SetObjectCountByEncryptionType(const ObjectCountByEncryptionType& value) { m_objectCountByEncryptionTypeHasBeenSet = true; m_objectCountByEncryptionType = value; }

    /**
     * <p>The total number of objects that are in the bucket, grouped by server-side
     * encryption type. This includes a grouping that reports the total number of
     * objects that aren't encrypted or use client-side encryption.</p>
     */
    inline void SetObjectCountByEncryptionType(ObjectCountByEncryptionType&& value) { m_objectCountByEncryptionTypeHasBeenSet = true; m_objectCountByEncryptionType = std::move(value); }

    /**
     * <p>The total number of objects that are in the bucket, grouped by server-side
     * encryption type. This includes a grouping that reports the total number of
     * objects that aren't encrypted or use client-side encryption.</p>
     */
    inline BucketMetadata& WithObjectCountByEncryptionType(const ObjectCountByEncryptionType& value) { SetObjectCountByEncryptionType(value); return *this;}

    /**
     * <p>The total number of objects that are in the bucket, grouped by server-side
     * encryption type. This includes a grouping that reports the total number of
     * objects that aren't encrypted or use client-side encryption.</p>
     */
    inline BucketMetadata& WithObjectCountByEncryptionType(ObjectCountByEncryptionType&& value) { SetObjectCountByEncryptionType(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket, and provides information about
     * those settings.</p>
     */
    inline const BucketPublicAccess& GetPublicAccess() const{ return m_publicAccess; }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket, and provides information about
     * those settings.</p>
     */
    inline bool PublicAccessHasBeenSet() const { return m_publicAccessHasBeenSet; }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket, and provides information about
     * those settings.</p>
     */
    inline void SetPublicAccess(const BucketPublicAccess& value) { m_publicAccessHasBeenSet = true; m_publicAccess = value; }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket, and provides information about
     * those settings.</p>
     */
    inline void SetPublicAccess(BucketPublicAccess&& value) { m_publicAccessHasBeenSet = true; m_publicAccess = std::move(value); }

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket, and provides information about
     * those settings.</p>
     */
    inline BucketMetadata& WithPublicAccess(const BucketPublicAccess& value) { SetPublicAccess(value); return *this;}

    /**
     * <p>Specifies whether the bucket is publicly accessible due to the combination of
     * permissions settings that apply to the bucket, and provides information about
     * those settings.</p>
     */
    inline BucketMetadata& WithPublicAccess(BucketPublicAccess&& value) { SetPublicAccess(std::move(value)); return *this;}


    /**
     * <p>The AWS Region that hosts the bucket.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The AWS Region that hosts the bucket.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The AWS Region that hosts the bucket.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The AWS Region that hosts the bucket.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The AWS Region that hosts the bucket.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The AWS Region that hosts the bucket.</p>
     */
    inline BucketMetadata& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The AWS Region that hosts the bucket.</p>
     */
    inline BucketMetadata& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The AWS Region that hosts the bucket.</p>
     */
    inline BucketMetadata& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to buckets for other AWS accounts and, if so, which accounts.</p>
     */
    inline const ReplicationDetails& GetReplicationDetails() const{ return m_replicationDetails; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to buckets for other AWS accounts and, if so, which accounts.</p>
     */
    inline bool ReplicationDetailsHasBeenSet() const { return m_replicationDetailsHasBeenSet; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to buckets for other AWS accounts and, if so, which accounts.</p>
     */
    inline void SetReplicationDetails(const ReplicationDetails& value) { m_replicationDetailsHasBeenSet = true; m_replicationDetails = value; }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to buckets for other AWS accounts and, if so, which accounts.</p>
     */
    inline void SetReplicationDetails(ReplicationDetails&& value) { m_replicationDetailsHasBeenSet = true; m_replicationDetails = std::move(value); }

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to buckets for other AWS accounts and, if so, which accounts.</p>
     */
    inline BucketMetadata& WithReplicationDetails(const ReplicationDetails& value) { SetReplicationDetails(value); return *this;}

    /**
     * <p>Specifies whether the bucket is configured to replicate one or more objects
     * to buckets for other AWS accounts and, if so, which accounts.</p>
     */
    inline BucketMetadata& WithReplicationDetails(ReplicationDetails&& value) { SetReplicationDetails(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the bucket encrypts new objects by default and, if so, the
     * type of server-side encryption that's used.</p>
     */
    inline const BucketServerSideEncryption& GetServerSideEncryption() const{ return m_serverSideEncryption; }

    /**
     * <p>Specifies whether the bucket encrypts new objects by default and, if so, the
     * type of server-side encryption that's used.</p>
     */
    inline bool ServerSideEncryptionHasBeenSet() const { return m_serverSideEncryptionHasBeenSet; }

    /**
     * <p>Specifies whether the bucket encrypts new objects by default and, if so, the
     * type of server-side encryption that's used.</p>
     */
    inline void SetServerSideEncryption(const BucketServerSideEncryption& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = value; }

    /**
     * <p>Specifies whether the bucket encrypts new objects by default and, if so, the
     * type of server-side encryption that's used.</p>
     */
    inline void SetServerSideEncryption(BucketServerSideEncryption&& value) { m_serverSideEncryptionHasBeenSet = true; m_serverSideEncryption = std::move(value); }

    /**
     * <p>Specifies whether the bucket encrypts new objects by default and, if so, the
     * type of server-side encryption that's used.</p>
     */
    inline BucketMetadata& WithServerSideEncryption(const BucketServerSideEncryption& value) { SetServerSideEncryption(value); return *this;}

    /**
     * <p>Specifies whether the bucket encrypts new objects by default and, if so, the
     * type of server-side encryption that's used.</p>
     */
    inline BucketMetadata& WithServerSideEncryption(BucketServerSideEncryption&& value) { SetServerSideEncryption(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the bucket is shared with another AWS account. Possible
     * values are:</p> <ul><li><p>EXTERNAL - The bucket is shared with an AWS account
     * that isn't part of the same Amazon Macie organization.</p></li> <li><p>INTERNAL
     * - The bucket is shared with an AWS account that's part of the same Amazon Macie
     * organization.</p></li> <li><p>NOT_SHARED - The bucket isn't shared with other
     * AWS accounts.</p></li> <li><p>UNKNOWN - Amazon Macie wasn't able to evaluate the
     * shared access settings for the bucket.</p></li></ul>
     */
    inline const SharedAccess& GetSharedAccess() const{ return m_sharedAccess; }

    /**
     * <p>Specifies whether the bucket is shared with another AWS account. Possible
     * values are:</p> <ul><li><p>EXTERNAL - The bucket is shared with an AWS account
     * that isn't part of the same Amazon Macie organization.</p></li> <li><p>INTERNAL
     * - The bucket is shared with an AWS account that's part of the same Amazon Macie
     * organization.</p></li> <li><p>NOT_SHARED - The bucket isn't shared with other
     * AWS accounts.</p></li> <li><p>UNKNOWN - Amazon Macie wasn't able to evaluate the
     * shared access settings for the bucket.</p></li></ul>
     */
    inline bool SharedAccessHasBeenSet() const { return m_sharedAccessHasBeenSet; }

    /**
     * <p>Specifies whether the bucket is shared with another AWS account. Possible
     * values are:</p> <ul><li><p>EXTERNAL - The bucket is shared with an AWS account
     * that isn't part of the same Amazon Macie organization.</p></li> <li><p>INTERNAL
     * - The bucket is shared with an AWS account that's part of the same Amazon Macie
     * organization.</p></li> <li><p>NOT_SHARED - The bucket isn't shared with other
     * AWS accounts.</p></li> <li><p>UNKNOWN - Amazon Macie wasn't able to evaluate the
     * shared access settings for the bucket.</p></li></ul>
     */
    inline void SetSharedAccess(const SharedAccess& value) { m_sharedAccessHasBeenSet = true; m_sharedAccess = value; }

    /**
     * <p>Specifies whether the bucket is shared with another AWS account. Possible
     * values are:</p> <ul><li><p>EXTERNAL - The bucket is shared with an AWS account
     * that isn't part of the same Amazon Macie organization.</p></li> <li><p>INTERNAL
     * - The bucket is shared with an AWS account that's part of the same Amazon Macie
     * organization.</p></li> <li><p>NOT_SHARED - The bucket isn't shared with other
     * AWS accounts.</p></li> <li><p>UNKNOWN - Amazon Macie wasn't able to evaluate the
     * shared access settings for the bucket.</p></li></ul>
     */
    inline void SetSharedAccess(SharedAccess&& value) { m_sharedAccessHasBeenSet = true; m_sharedAccess = std::move(value); }

    /**
     * <p>Specifies whether the bucket is shared with another AWS account. Possible
     * values are:</p> <ul><li><p>EXTERNAL - The bucket is shared with an AWS account
     * that isn't part of the same Amazon Macie organization.</p></li> <li><p>INTERNAL
     * - The bucket is shared with an AWS account that's part of the same Amazon Macie
     * organization.</p></li> <li><p>NOT_SHARED - The bucket isn't shared with other
     * AWS accounts.</p></li> <li><p>UNKNOWN - Amazon Macie wasn't able to evaluate the
     * shared access settings for the bucket.</p></li></ul>
     */
    inline BucketMetadata& WithSharedAccess(const SharedAccess& value) { SetSharedAccess(value); return *this;}

    /**
     * <p>Specifies whether the bucket is shared with another AWS account. Possible
     * values are:</p> <ul><li><p>EXTERNAL - The bucket is shared with an AWS account
     * that isn't part of the same Amazon Macie organization.</p></li> <li><p>INTERNAL
     * - The bucket is shared with an AWS account that's part of the same Amazon Macie
     * organization.</p></li> <li><p>NOT_SHARED - The bucket isn't shared with other
     * AWS accounts.</p></li> <li><p>UNKNOWN - Amazon Macie wasn't able to evaluate the
     * shared access settings for the bucket.</p></li></ul>
     */
    inline BucketMetadata& WithSharedAccess(SharedAccess&& value) { SetSharedAccess(std::move(value)); return *this;}


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
    inline BucketMetadata& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}


    /**
     * <p>The total compressed storage size, in bytes, of the bucket.</p> <p>If
     * versioning is enabled for the bucket, Macie calculates this value based on the
     * size of the latest version of each object in the bucket. This value doesn't
     * reflect the storage size of all versions of each object in the bucket.</p>
     */
    inline long long GetSizeInBytesCompressed() const{ return m_sizeInBytesCompressed; }

    /**
     * <p>The total compressed storage size, in bytes, of the bucket.</p> <p>If
     * versioning is enabled for the bucket, Macie calculates this value based on the
     * size of the latest version of each object in the bucket. This value doesn't
     * reflect the storage size of all versions of each object in the bucket.</p>
     */
    inline bool SizeInBytesCompressedHasBeenSet() const { return m_sizeInBytesCompressedHasBeenSet; }

    /**
     * <p>The total compressed storage size, in bytes, of the bucket.</p> <p>If
     * versioning is enabled for the bucket, Macie calculates this value based on the
     * size of the latest version of each object in the bucket. This value doesn't
     * reflect the storage size of all versions of each object in the bucket.</p>
     */
    inline void SetSizeInBytesCompressed(long long value) { m_sizeInBytesCompressedHasBeenSet = true; m_sizeInBytesCompressed = value; }

    /**
     * <p>The total compressed storage size, in bytes, of the bucket.</p> <p>If
     * versioning is enabled for the bucket, Macie calculates this value based on the
     * size of the latest version of each object in the bucket. This value doesn't
     * reflect the storage size of all versions of each object in the bucket.</p>
     */
    inline BucketMetadata& WithSizeInBytesCompressed(long long value) { SetSizeInBytesCompressed(value); return *this;}


    /**
     * <p>An array that specifies the tags (keys and values) that are associated with
     * the bucket.</p>
     */
    inline const Aws::Vector<KeyValuePair>& GetTags() const{ return m_tags; }

    /**
     * <p>An array that specifies the tags (keys and values) that are associated with
     * the bucket.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>An array that specifies the tags (keys and values) that are associated with
     * the bucket.</p>
     */
    inline void SetTags(const Aws::Vector<KeyValuePair>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>An array that specifies the tags (keys and values) that are associated with
     * the bucket.</p>
     */
    inline void SetTags(Aws::Vector<KeyValuePair>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>An array that specifies the tags (keys and values) that are associated with
     * the bucket.</p>
     */
    inline BucketMetadata& WithTags(const Aws::Vector<KeyValuePair>& value) { SetTags(value); return *this;}

    /**
     * <p>An array that specifies the tags (keys and values) that are associated with
     * the bucket.</p>
     */
    inline BucketMetadata& WithTags(Aws::Vector<KeyValuePair>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>An array that specifies the tags (keys and values) that are associated with
     * the bucket.</p>
     */
    inline BucketMetadata& AddTags(const KeyValuePair& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>An array that specifies the tags (keys and values) that are associated with
     * the bucket.</p>
     */
    inline BucketMetadata& AddTags(KeyValuePair&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


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
    inline BucketMetadata& WithUnclassifiableObjectCount(const ObjectLevelStatistics& value) { SetUnclassifiableObjectCount(value); return *this;}

    /**
     * <p>The total number of objects that Amazon Macie can't analyze in the bucket.
     * These objects don't use a supported storage class or don't have a file name
     * extension for a supported file or storage format.</p>
     */
    inline BucketMetadata& WithUnclassifiableObjectCount(ObjectLevelStatistics&& value) { SetUnclassifiableObjectCount(std::move(value)); return *this;}


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
    inline BucketMetadata& WithUnclassifiableObjectSizeInBytes(const ObjectLevelStatistics& value) { SetUnclassifiableObjectSizeInBytes(value); return *this;}

    /**
     * <p>The total storage size, in bytes, of the objects that Amazon Macie can't
     * analyze in the bucket. These objects don't use a supported storage class or
     * don't have a file name extension for a supported file or storage format.</p>
     */
    inline BucketMetadata& WithUnclassifiableObjectSizeInBytes(ObjectLevelStatistics&& value) { SetUnclassifiableObjectSizeInBytes(std::move(value)); return *this;}


    /**
     * <p>Specifies whether versioning is enabled for the bucket.</p>
     */
    inline bool GetVersioning() const{ return m_versioning; }

    /**
     * <p>Specifies whether versioning is enabled for the bucket.</p>
     */
    inline bool VersioningHasBeenSet() const { return m_versioningHasBeenSet; }

    /**
     * <p>Specifies whether versioning is enabled for the bucket.</p>
     */
    inline void SetVersioning(bool value) { m_versioningHasBeenSet = true; m_versioning = value; }

    /**
     * <p>Specifies whether versioning is enabled for the bucket.</p>
     */
    inline BucketMetadata& WithVersioning(bool value) { SetVersioning(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet;

    Aws::Utils::DateTime m_bucketCreatedAt;
    bool m_bucketCreatedAtHasBeenSet;

    Aws::String m_bucketName;
    bool m_bucketNameHasBeenSet;

    long long m_classifiableObjectCount;
    bool m_classifiableObjectCountHasBeenSet;

    long long m_classifiableSizeInBytes;
    bool m_classifiableSizeInBytesHasBeenSet;

    JobDetails m_jobDetails;
    bool m_jobDetailsHasBeenSet;

    Aws::Utils::DateTime m_lastUpdated;
    bool m_lastUpdatedHasBeenSet;

    long long m_objectCount;
    bool m_objectCountHasBeenSet;

    ObjectCountByEncryptionType m_objectCountByEncryptionType;
    bool m_objectCountByEncryptionTypeHasBeenSet;

    BucketPublicAccess m_publicAccess;
    bool m_publicAccessHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    ReplicationDetails m_replicationDetails;
    bool m_replicationDetailsHasBeenSet;

    BucketServerSideEncryption m_serverSideEncryption;
    bool m_serverSideEncryptionHasBeenSet;

    SharedAccess m_sharedAccess;
    bool m_sharedAccessHasBeenSet;

    long long m_sizeInBytes;
    bool m_sizeInBytesHasBeenSet;

    long long m_sizeInBytesCompressed;
    bool m_sizeInBytesCompressedHasBeenSet;

    Aws::Vector<KeyValuePair> m_tags;
    bool m_tagsHasBeenSet;

    ObjectLevelStatistics m_unclassifiableObjectCount;
    bool m_unclassifiableObjectCountHasBeenSet;

    ObjectLevelStatistics m_unclassifiableObjectSizeInBytes;
    bool m_unclassifiableObjectSizeInBytesHasBeenSet;

    bool m_versioning;
    bool m_versioningHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
