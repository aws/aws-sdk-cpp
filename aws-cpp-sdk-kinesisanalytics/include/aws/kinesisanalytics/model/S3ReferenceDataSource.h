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
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Identifies the S3 bucket and object that contains the reference data. Also
   * identifies the IAM role Amazon Kinesis Analytics can assume to read this object
   * on your behalf.</p> <p>An Amazon Kinesis Analytics application loads reference
   * data only once. If the data changes, you call the <a
   * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_UpdateApplication.html">UpdateApplication</a>
   * operation to trigger reloading of data into your application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/S3ReferenceDataSource">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API S3ReferenceDataSource
  {
  public:
    S3ReferenceDataSource();
    S3ReferenceDataSource(Aws::Utils::Json::JsonView jsonValue);
    S3ReferenceDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSource& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSource& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSource& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}


    /**
     * <p>Object key name containing reference data.</p>
     */
    inline const Aws::String& GetFileKey() const{ return m_fileKey; }

    /**
     * <p>Object key name containing reference data.</p>
     */
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }

    /**
     * <p>Object key name containing reference data.</p>
     */
    inline void SetFileKey(const Aws::String& value) { m_fileKeyHasBeenSet = true; m_fileKey = value; }

    /**
     * <p>Object key name containing reference data.</p>
     */
    inline void SetFileKey(Aws::String&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::move(value); }

    /**
     * <p>Object key name containing reference data.</p>
     */
    inline void SetFileKey(const char* value) { m_fileKeyHasBeenSet = true; m_fileKey.assign(value); }

    /**
     * <p>Object key name containing reference data.</p>
     */
    inline S3ReferenceDataSource& WithFileKey(const Aws::String& value) { SetFileKey(value); return *this;}

    /**
     * <p>Object key name containing reference data.</p>
     */
    inline S3ReferenceDataSource& WithFileKey(Aws::String&& value) { SetFileKey(std::move(value)); return *this;}

    /**
     * <p>Object key name containing reference data.</p>
     */
    inline S3ReferenceDataSource& WithFileKey(const char* value) { SetFileKey(value); return *this;}


    /**
     * <p>ARN of the IAM role that the service can assume to read data on your behalf.
     * This role must have permission for the <code>s3:GetObject</code> action on the
     * object and trust policy that allows Amazon Kinesis Analytics service principal
     * to assume this role.</p>
     */
    inline const Aws::String& GetReferenceRoleARN() const{ return m_referenceRoleARN; }

    /**
     * <p>ARN of the IAM role that the service can assume to read data on your behalf.
     * This role must have permission for the <code>s3:GetObject</code> action on the
     * object and trust policy that allows Amazon Kinesis Analytics service principal
     * to assume this role.</p>
     */
    inline bool ReferenceRoleARNHasBeenSet() const { return m_referenceRoleARNHasBeenSet; }

    /**
     * <p>ARN of the IAM role that the service can assume to read data on your behalf.
     * This role must have permission for the <code>s3:GetObject</code> action on the
     * object and trust policy that allows Amazon Kinesis Analytics service principal
     * to assume this role.</p>
     */
    inline void SetReferenceRoleARN(const Aws::String& value) { m_referenceRoleARNHasBeenSet = true; m_referenceRoleARN = value; }

    /**
     * <p>ARN of the IAM role that the service can assume to read data on your behalf.
     * This role must have permission for the <code>s3:GetObject</code> action on the
     * object and trust policy that allows Amazon Kinesis Analytics service principal
     * to assume this role.</p>
     */
    inline void SetReferenceRoleARN(Aws::String&& value) { m_referenceRoleARNHasBeenSet = true; m_referenceRoleARN = std::move(value); }

    /**
     * <p>ARN of the IAM role that the service can assume to read data on your behalf.
     * This role must have permission for the <code>s3:GetObject</code> action on the
     * object and trust policy that allows Amazon Kinesis Analytics service principal
     * to assume this role.</p>
     */
    inline void SetReferenceRoleARN(const char* value) { m_referenceRoleARNHasBeenSet = true; m_referenceRoleARN.assign(value); }

    /**
     * <p>ARN of the IAM role that the service can assume to read data on your behalf.
     * This role must have permission for the <code>s3:GetObject</code> action on the
     * object and trust policy that allows Amazon Kinesis Analytics service principal
     * to assume this role.</p>
     */
    inline S3ReferenceDataSource& WithReferenceRoleARN(const Aws::String& value) { SetReferenceRoleARN(value); return *this;}

    /**
     * <p>ARN of the IAM role that the service can assume to read data on your behalf.
     * This role must have permission for the <code>s3:GetObject</code> action on the
     * object and trust policy that allows Amazon Kinesis Analytics service principal
     * to assume this role.</p>
     */
    inline S3ReferenceDataSource& WithReferenceRoleARN(Aws::String&& value) { SetReferenceRoleARN(std::move(value)); return *this;}

    /**
     * <p>ARN of the IAM role that the service can assume to read data on your behalf.
     * This role must have permission for the <code>s3:GetObject</code> action on the
     * object and trust policy that allows Amazon Kinesis Analytics service principal
     * to assume this role.</p>
     */
    inline S3ReferenceDataSource& WithReferenceRoleARN(const char* value) { SetReferenceRoleARN(value); return *this;}

  private:

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet;

    Aws::String m_referenceRoleARN;
    bool m_referenceRoleARNHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
