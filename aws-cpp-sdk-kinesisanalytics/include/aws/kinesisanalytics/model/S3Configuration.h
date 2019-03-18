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
   * <p>Provides a description of an Amazon S3 data source, including the Amazon
   * Resource Name (ARN) of the S3 bucket, the ARN of the IAM role that is used to
   * access the bucket, and the name of the Amazon S3 object that contains the
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/S3Configuration">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICS_API S3Configuration
  {
  public:
    S3Configuration();
    S3Configuration(Aws::Utils::Json::JsonView jsonValue);
    S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>IAM ARN of the role used to access the data.</p>
     */
    inline const Aws::String& GetRoleARN() const{ return m_roleARN; }

    /**
     * <p>IAM ARN of the role used to access the data.</p>
     */
    inline bool RoleARNHasBeenSet() const { return m_roleARNHasBeenSet; }

    /**
     * <p>IAM ARN of the role used to access the data.</p>
     */
    inline void SetRoleARN(const Aws::String& value) { m_roleARNHasBeenSet = true; m_roleARN = value; }

    /**
     * <p>IAM ARN of the role used to access the data.</p>
     */
    inline void SetRoleARN(Aws::String&& value) { m_roleARNHasBeenSet = true; m_roleARN = std::move(value); }

    /**
     * <p>IAM ARN of the role used to access the data.</p>
     */
    inline void SetRoleARN(const char* value) { m_roleARNHasBeenSet = true; m_roleARN.assign(value); }

    /**
     * <p>IAM ARN of the role used to access the data.</p>
     */
    inline S3Configuration& WithRoleARN(const Aws::String& value) { SetRoleARN(value); return *this;}

    /**
     * <p>IAM ARN of the role used to access the data.</p>
     */
    inline S3Configuration& WithRoleARN(Aws::String&& value) { SetRoleARN(std::move(value)); return *this;}

    /**
     * <p>IAM ARN of the role used to access the data.</p>
     */
    inline S3Configuration& WithRoleARN(const char* value) { SetRoleARN(value); return *this;}


    /**
     * <p>ARN of the S3 bucket that contains the data.</p>
     */
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }

    /**
     * <p>ARN of the S3 bucket that contains the data.</p>
     */
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }

    /**
     * <p>ARN of the S3 bucket that contains the data.</p>
     */
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }

    /**
     * <p>ARN of the S3 bucket that contains the data.</p>
     */
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::move(value); }

    /**
     * <p>ARN of the S3 bucket that contains the data.</p>
     */
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }

    /**
     * <p>ARN of the S3 bucket that contains the data.</p>
     */
    inline S3Configuration& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}

    /**
     * <p>ARN of the S3 bucket that contains the data.</p>
     */
    inline S3Configuration& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}

    /**
     * <p>ARN of the S3 bucket that contains the data.</p>
     */
    inline S3Configuration& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}


    /**
     * <p>The name of the object that contains the data.</p>
     */
    inline const Aws::String& GetFileKey() const{ return m_fileKey; }

    /**
     * <p>The name of the object that contains the data.</p>
     */
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }

    /**
     * <p>The name of the object that contains the data.</p>
     */
    inline void SetFileKey(const Aws::String& value) { m_fileKeyHasBeenSet = true; m_fileKey = value; }

    /**
     * <p>The name of the object that contains the data.</p>
     */
    inline void SetFileKey(Aws::String&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::move(value); }

    /**
     * <p>The name of the object that contains the data.</p>
     */
    inline void SetFileKey(const char* value) { m_fileKeyHasBeenSet = true; m_fileKey.assign(value); }

    /**
     * <p>The name of the object that contains the data.</p>
     */
    inline S3Configuration& WithFileKey(const Aws::String& value) { SetFileKey(value); return *this;}

    /**
     * <p>The name of the object that contains the data.</p>
     */
    inline S3Configuration& WithFileKey(Aws::String&& value) { SetFileKey(std::move(value)); return *this;}

    /**
     * <p>The name of the object that contains the data.</p>
     */
    inline S3Configuration& WithFileKey(const char* value) { SetFileKey(value); return *this;}

  private:

    Aws::String m_roleARN;
    bool m_roleARNHasBeenSet;

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
