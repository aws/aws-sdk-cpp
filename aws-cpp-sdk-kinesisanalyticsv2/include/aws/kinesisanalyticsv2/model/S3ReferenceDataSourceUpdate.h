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
   * <p>For an SQL-based Amazon Kinesis Data Analytics application, describes the
   * Amazon S3 bucket name and object key name for an in-application reference table.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ReferenceDataSourceUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API S3ReferenceDataSourceUpdate
  {
  public:
    S3ReferenceDataSourceUpdate();
    S3ReferenceDataSourceUpdate(Aws::Utils::Json::JsonView jsonValue);
    S3ReferenceDataSourceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARNUpdate() const{ return m_bucketARNUpdate; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline bool BucketARNUpdateHasBeenSet() const { return m_bucketARNUpdateHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARNUpdate(const Aws::String& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARNUpdate(Aws::String&& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARNUpdate(const char* value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithBucketARNUpdate(const Aws::String& value) { SetBucketARNUpdate(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithBucketARNUpdate(Aws::String&& value) { SetBucketARNUpdate(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithBucketARNUpdate(const char* value) { SetBucketARNUpdate(value); return *this;}


    /**
     * <p>The object key name.</p>
     */
    inline const Aws::String& GetFileKeyUpdate() const{ return m_fileKeyUpdate; }

    /**
     * <p>The object key name.</p>
     */
    inline bool FileKeyUpdateHasBeenSet() const { return m_fileKeyUpdateHasBeenSet; }

    /**
     * <p>The object key name.</p>
     */
    inline void SetFileKeyUpdate(const Aws::String& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = value; }

    /**
     * <p>The object key name.</p>
     */
    inline void SetFileKeyUpdate(Aws::String&& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = std::move(value); }

    /**
     * <p>The object key name.</p>
     */
    inline void SetFileKeyUpdate(const char* value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate.assign(value); }

    /**
     * <p>The object key name.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithFileKeyUpdate(const Aws::String& value) { SetFileKeyUpdate(value); return *this;}

    /**
     * <p>The object key name.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithFileKeyUpdate(Aws::String&& value) { SetFileKeyUpdate(std::move(value)); return *this;}

    /**
     * <p>The object key name.</p>
     */
    inline S3ReferenceDataSourceUpdate& WithFileKeyUpdate(const char* value) { SetFileKeyUpdate(value); return *this;}

  private:

    Aws::String m_bucketARNUpdate;
    bool m_bucketARNUpdateHasBeenSet;

    Aws::String m_fileKeyUpdate;
    bool m_fileKeyUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
