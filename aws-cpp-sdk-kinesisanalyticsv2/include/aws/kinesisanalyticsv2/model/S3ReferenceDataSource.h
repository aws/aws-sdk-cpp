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
   * <p>For an SQL-based Amazon Kinesis Data Analytics application, identifies the
   * Amazon S3 bucket and object that contains the reference data.</p> <p>A Kinesis
   * Data Analytics application loads reference data only once. If the data changes,
   * you call the <a>UpdateApplication</a> operation to trigger reloading of data
   * into your application. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ReferenceDataSource">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API S3ReferenceDataSource
  {
  public:
    S3ReferenceDataSource();
    S3ReferenceDataSource(Aws::Utils::Json::JsonView jsonValue);
    S3ReferenceDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline S3ReferenceDataSource& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSource& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ReferenceDataSource& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}


    /**
     * <p>The object key name containing the reference data.</p>
     */
    inline const Aws::String& GetFileKey() const{ return m_fileKey; }

    /**
     * <p>The object key name containing the reference data.</p>
     */
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }

    /**
     * <p>The object key name containing the reference data.</p>
     */
    inline void SetFileKey(const Aws::String& value) { m_fileKeyHasBeenSet = true; m_fileKey = value; }

    /**
     * <p>The object key name containing the reference data.</p>
     */
    inline void SetFileKey(Aws::String&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::move(value); }

    /**
     * <p>The object key name containing the reference data.</p>
     */
    inline void SetFileKey(const char* value) { m_fileKeyHasBeenSet = true; m_fileKey.assign(value); }

    /**
     * <p>The object key name containing the reference data.</p>
     */
    inline S3ReferenceDataSource& WithFileKey(const Aws::String& value) { SetFileKey(value); return *this;}

    /**
     * <p>The object key name containing the reference data.</p>
     */
    inline S3ReferenceDataSource& WithFileKey(Aws::String&& value) { SetFileKey(std::move(value)); return *this;}

    /**
     * <p>The object key name containing the reference data.</p>
     */
    inline S3ReferenceDataSource& WithFileKey(const char* value) { SetFileKey(value); return *this;}

  private:

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
