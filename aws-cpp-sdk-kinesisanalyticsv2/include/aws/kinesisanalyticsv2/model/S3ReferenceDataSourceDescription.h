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
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>For an SQL-based Amazon Kinesis Data Analytics application, provides the
   * bucket name and object key name that stores the reference data.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ReferenceDataSourceDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API S3ReferenceDataSourceDescription
  {
  public:
    S3ReferenceDataSourceDescription();
    S3ReferenceDataSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    S3ReferenceDataSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSourceDescription& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSourceDescription& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSourceDescription& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}


    /**
     * <p>Amazon S3 object key name.</p>
     */
    inline const Aws::String& GetFileKey() const{ return m_fileKey; }

    /**
     * <p>Amazon S3 object key name.</p>
     */
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }

    /**
     * <p>Amazon S3 object key name.</p>
     */
    inline void SetFileKey(const Aws::String& value) { m_fileKeyHasBeenSet = true; m_fileKey = value; }

    /**
     * <p>Amazon S3 object key name.</p>
     */
    inline void SetFileKey(Aws::String&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::move(value); }

    /**
     * <p>Amazon S3 object key name.</p>
     */
    inline void SetFileKey(const char* value) { m_fileKeyHasBeenSet = true; m_fileKey.assign(value); }

    /**
     * <p>Amazon S3 object key name.</p>
     */
    inline S3ReferenceDataSourceDescription& WithFileKey(const Aws::String& value) { SetFileKey(value); return *this;}

    /**
     * <p>Amazon S3 object key name.</p>
     */
    inline S3ReferenceDataSourceDescription& WithFileKey(Aws::String&& value) { SetFileKey(std::move(value)); return *this;}

    /**
     * <p>Amazon S3 object key name.</p>
     */
    inline S3ReferenceDataSourceDescription& WithFileKey(const char* value) { SetFileKey(value); return *this;}


    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to read the
     * Amazon S3 object on your behalf to populate the in-application reference table.
     * </p> <note> <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> </note>
     */
    inline const Aws::String& GetReferenceRoleARN() const{ return m_referenceRoleARN; }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to read the
     * Amazon S3 object on your behalf to populate the in-application reference table.
     * </p> <note> <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> </note>
     */
    inline bool ReferenceRoleARNHasBeenSet() const { return m_referenceRoleARNHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to read the
     * Amazon S3 object on your behalf to populate the in-application reference table.
     * </p> <note> <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> </note>
     */
    inline void SetReferenceRoleARN(const Aws::String& value) { m_referenceRoleARNHasBeenSet = true; m_referenceRoleARN = value; }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to read the
     * Amazon S3 object on your behalf to populate the in-application reference table.
     * </p> <note> <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> </note>
     */
    inline void SetReferenceRoleARN(Aws::String&& value) { m_referenceRoleARNHasBeenSet = true; m_referenceRoleARN = std::move(value); }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to read the
     * Amazon S3 object on your behalf to populate the in-application reference table.
     * </p> <note> <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> </note>
     */
    inline void SetReferenceRoleARN(const char* value) { m_referenceRoleARNHasBeenSet = true; m_referenceRoleARN.assign(value); }

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to read the
     * Amazon S3 object on your behalf to populate the in-application reference table.
     * </p> <note> <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> </note>
     */
    inline S3ReferenceDataSourceDescription& WithReferenceRoleARN(const Aws::String& value) { SetReferenceRoleARN(value); return *this;}

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to read the
     * Amazon S3 object on your behalf to populate the in-application reference table.
     * </p> <note> <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> </note>
     */
    inline S3ReferenceDataSourceDescription& WithReferenceRoleARN(Aws::String&& value) { SetReferenceRoleARN(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to read the
     * Amazon S3 object on your behalf to populate the in-application reference table.
     * </p> <note> <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> </note>
     */
    inline S3ReferenceDataSourceDescription& WithReferenceRoleARN(const char* value) { SetReferenceRoleARN(value); return *this;}

  private:

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet;

    Aws::String m_referenceRoleARN;
    bool m_referenceRoleARNHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
