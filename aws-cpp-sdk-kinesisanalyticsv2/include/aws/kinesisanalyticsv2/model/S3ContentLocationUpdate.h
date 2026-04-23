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
   * <p>Describes an update for the Amazon S3 code content location for a Java-based
   * Amazon Kinesis Data Analytics application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ContentLocationUpdate">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API S3ContentLocationUpdate
  {
  public:
    S3ContentLocationUpdate();
    S3ContentLocationUpdate(Aws::Utils::Json::JsonView jsonValue);
    S3ContentLocationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline const Aws::String& GetBucketARNUpdate() const{ return m_bucketARNUpdate; }

    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline bool BucketARNUpdateHasBeenSet() const { return m_bucketARNUpdateHasBeenSet; }

    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline void SetBucketARNUpdate(const Aws::String& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = value; }

    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline void SetBucketARNUpdate(Aws::String&& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = std::move(value); }

    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline void SetBucketARNUpdate(const char* value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate.assign(value); }

    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline S3ContentLocationUpdate& WithBucketARNUpdate(const Aws::String& value) { SetBucketARNUpdate(value); return *this;}

    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline S3ContentLocationUpdate& WithBucketARNUpdate(Aws::String&& value) { SetBucketARNUpdate(std::move(value)); return *this;}

    /**
     * <p>The new Amazon Resource Name (ARN) for the S3 bucket containing the
     * application code.</p>
     */
    inline S3ContentLocationUpdate& WithBucketARNUpdate(const char* value) { SetBucketARNUpdate(value); return *this;}


    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline const Aws::String& GetFileKeyUpdate() const{ return m_fileKeyUpdate; }

    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline bool FileKeyUpdateHasBeenSet() const { return m_fileKeyUpdateHasBeenSet; }

    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline void SetFileKeyUpdate(const Aws::String& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = value; }

    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline void SetFileKeyUpdate(Aws::String&& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = std::move(value); }

    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline void SetFileKeyUpdate(const char* value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate.assign(value); }

    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline S3ContentLocationUpdate& WithFileKeyUpdate(const Aws::String& value) { SetFileKeyUpdate(value); return *this;}

    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline S3ContentLocationUpdate& WithFileKeyUpdate(Aws::String&& value) { SetFileKeyUpdate(std::move(value)); return *this;}

    /**
     * <p>The new file key for the object containing the application code.</p>
     */
    inline S3ContentLocationUpdate& WithFileKeyUpdate(const char* value) { SetFileKeyUpdate(value); return *this;}


    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline const Aws::String& GetObjectVersionUpdate() const{ return m_objectVersionUpdate; }

    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline bool ObjectVersionUpdateHasBeenSet() const { return m_objectVersionUpdateHasBeenSet; }

    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline void SetObjectVersionUpdate(const Aws::String& value) { m_objectVersionUpdateHasBeenSet = true; m_objectVersionUpdate = value; }

    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline void SetObjectVersionUpdate(Aws::String&& value) { m_objectVersionUpdateHasBeenSet = true; m_objectVersionUpdate = std::move(value); }

    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline void SetObjectVersionUpdate(const char* value) { m_objectVersionUpdateHasBeenSet = true; m_objectVersionUpdate.assign(value); }

    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline S3ContentLocationUpdate& WithObjectVersionUpdate(const Aws::String& value) { SetObjectVersionUpdate(value); return *this;}

    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline S3ContentLocationUpdate& WithObjectVersionUpdate(Aws::String&& value) { SetObjectVersionUpdate(std::move(value)); return *this;}

    /**
     * <p>The new version of the object containing the application code.</p>
     */
    inline S3ContentLocationUpdate& WithObjectVersionUpdate(const char* value) { SetObjectVersionUpdate(value); return *this;}

  private:

    Aws::String m_bucketARNUpdate;
    bool m_bucketARNUpdateHasBeenSet;

    Aws::String m_fileKeyUpdate;
    bool m_fileKeyUpdateHasBeenSet;

    Aws::String m_objectVersionUpdate;
    bool m_objectVersionUpdateHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
