﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>For a Managed Service for Apache Flink application provides a description of
   * an Amazon S3 object, including the Amazon Resource Name (ARN) of the S3 bucket,
   * the name of the Amazon S3 object that contains the data, and the version number
   * of the Amazon S3 object that contains the data. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ContentLocation">AWS
   * API Reference</a></p>
   */
  class S3ContentLocation
  {
  public:
    AWS_KINESISANALYTICSV2_API S3ContentLocation();
    AWS_KINESISANALYTICSV2_API S3ContentLocation(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3ContentLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::move(value); }
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }
    inline S3ContentLocation& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}
    inline S3ContentLocation& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}
    inline S3ContentLocation& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline const Aws::String& GetFileKey() const{ return m_fileKey; }
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }
    inline void SetFileKey(const Aws::String& value) { m_fileKeyHasBeenSet = true; m_fileKey = value; }
    inline void SetFileKey(Aws::String&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::move(value); }
    inline void SetFileKey(const char* value) { m_fileKeyHasBeenSet = true; m_fileKey.assign(value); }
    inline S3ContentLocation& WithFileKey(const Aws::String& value) { SetFileKey(value); return *this;}
    inline S3ContentLocation& WithFileKey(Aws::String&& value) { SetFileKey(std::move(value)); return *this;}
    inline S3ContentLocation& WithFileKey(const char* value) { SetFileKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline const Aws::String& GetObjectVersion() const{ return m_objectVersion; }
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }
    inline void SetObjectVersion(const Aws::String& value) { m_objectVersionHasBeenSet = true; m_objectVersion = value; }
    inline void SetObjectVersion(Aws::String&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::move(value); }
    inline void SetObjectVersion(const char* value) { m_objectVersionHasBeenSet = true; m_objectVersion.assign(value); }
    inline S3ContentLocation& WithObjectVersion(const Aws::String& value) { SetObjectVersion(value); return *this;}
    inline S3ContentLocation& WithObjectVersion(Aws::String&& value) { SetObjectVersion(std::move(value)); return *this;}
    inline S3ContentLocation& WithObjectVersion(const char* value) { SetObjectVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet = false;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet = false;

    Aws::String m_objectVersion;
    bool m_objectVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
