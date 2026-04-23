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
   * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
   * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
   * populate the in-application reference table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/S3ReferenceDataSourceUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API S3ReferenceDataSourceUpdate
  {
  public:
    S3ReferenceDataSourceUpdate();
    S3ReferenceDataSourceUpdate(Aws::Utils::Json::JsonView jsonValue);
    S3ReferenceDataSourceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARNUpdate() const{ return m_bucketARNUpdate; }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline bool BucketARNUpdateHasBeenSet() const { return m_bucketARNUpdateHasBeenSet; }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARNUpdate(const Aws::String& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARNUpdate(Aws::String&& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARNUpdate(const char* value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithBucketARNUpdate(const Aws::String& value) { SetBucketARNUpdate(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithBucketARNUpdate(Aws::String&& value) { SetBucketARNUpdate(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithBucketARNUpdate(const char* value) { SetBucketARNUpdate(value); return *this;}


    /**
     * <p>Object key name.</p>
     */
    inline const Aws::String& GetFileKeyUpdate() const{ return m_fileKeyUpdate; }

    /**
     * <p>Object key name.</p>
     */
    inline bool FileKeyUpdateHasBeenSet() const { return m_fileKeyUpdateHasBeenSet; }

    /**
     * <p>Object key name.</p>
     */
    inline void SetFileKeyUpdate(const Aws::String& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = value; }

    /**
     * <p>Object key name.</p>
     */
    inline void SetFileKeyUpdate(Aws::String&& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = std::move(value); }

    /**
     * <p>Object key name.</p>
     */
    inline void SetFileKeyUpdate(const char* value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate.assign(value); }

    /**
     * <p>Object key name.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithFileKeyUpdate(const Aws::String& value) { SetFileKeyUpdate(value); return *this;}

    /**
     * <p>Object key name.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithFileKeyUpdate(Aws::String&& value) { SetFileKeyUpdate(std::move(value)); return *this;}

    /**
     * <p>Object key name.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithFileKeyUpdate(const char* value) { SetFileKeyUpdate(value); return *this;}


    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to read the
     * Amazon S3 object and populate the in-application.</p>
     */
    inline const Aws::String& GetReferenceRoleARNUpdate() const{ return m_referenceRoleARNUpdate; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to read the
     * Amazon S3 object and populate the in-application.</p>
     */
    inline bool ReferenceRoleARNUpdateHasBeenSet() const { return m_referenceRoleARNUpdateHasBeenSet; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to read the
     * Amazon S3 object and populate the in-application.</p>
     */
    inline void SetReferenceRoleARNUpdate(const Aws::String& value) { m_referenceRoleARNUpdateHasBeenSet = true; m_referenceRoleARNUpdate = value; }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to read the
     * Amazon S3 object and populate the in-application.</p>
     */
    inline void SetReferenceRoleARNUpdate(Aws::String&& value) { m_referenceRoleARNUpdateHasBeenSet = true; m_referenceRoleARNUpdate = std::move(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to read the
     * Amazon S3 object and populate the in-application.</p>
     */
    inline void SetReferenceRoleARNUpdate(const char* value) { m_referenceRoleARNUpdateHasBeenSet = true; m_referenceRoleARNUpdate.assign(value); }

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to read the
     * Amazon S3 object and populate the in-application.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithReferenceRoleARNUpdate(const Aws::String& value) { SetReferenceRoleARNUpdate(value); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to read the
     * Amazon S3 object and populate the in-application.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithReferenceRoleARNUpdate(Aws::String&& value) { SetReferenceRoleARNUpdate(std::move(value)); return *this;}

    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to read the
     * Amazon S3 object and populate the in-application.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithReferenceRoleARNUpdate(const char* value) { SetReferenceRoleARNUpdate(value); return *this;}

  private:

    Aws::String m_bucketARNUpdate;
    bool m_bucketARNUpdateHasBeenSet;

    Aws::String m_fileKeyUpdate;
    bool m_fileKeyUpdateHasBeenSet;

    Aws::String m_referenceRoleARNUpdate;
    bool m_referenceRoleARNUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
