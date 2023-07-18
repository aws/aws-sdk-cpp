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
   * <p>Describes the location of an application's code stored in an S3
   * bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ApplicationCodeLocationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KINESISANALYTICSV2_API S3ApplicationCodeLocationDescription
  {
  public:
    S3ApplicationCodeLocationDescription();
    S3ApplicationCodeLocationDescription(Aws::Utils::Json::JsonView jsonValue);
    S3ApplicationCodeLocationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline S3ApplicationCodeLocationDescription& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline S3ApplicationCodeLocationDescription& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the S3 bucket containing the application
     * code.</p>
     */
    inline S3ApplicationCodeLocationDescription& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}


    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline const Aws::String& GetFileKey() const{ return m_fileKey; }

    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }

    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline void SetFileKey(const Aws::String& value) { m_fileKeyHasBeenSet = true; m_fileKey = value; }

    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline void SetFileKey(Aws::String&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::move(value); }

    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline void SetFileKey(const char* value) { m_fileKeyHasBeenSet = true; m_fileKey.assign(value); }

    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline S3ApplicationCodeLocationDescription& WithFileKey(const Aws::String& value) { SetFileKey(value); return *this;}

    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline S3ApplicationCodeLocationDescription& WithFileKey(Aws::String&& value) { SetFileKey(std::move(value)); return *this;}

    /**
     * <p>The file key for the object containing the application code.</p>
     */
    inline S3ApplicationCodeLocationDescription& WithFileKey(const char* value) { SetFileKey(value); return *this;}


    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline const Aws::String& GetObjectVersion() const{ return m_objectVersion; }

    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }

    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline void SetObjectVersion(const Aws::String& value) { m_objectVersionHasBeenSet = true; m_objectVersion = value; }

    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline void SetObjectVersion(Aws::String&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::move(value); }

    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline void SetObjectVersion(const char* value) { m_objectVersionHasBeenSet = true; m_objectVersion.assign(value); }

    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline S3ApplicationCodeLocationDescription& WithObjectVersion(const Aws::String& value) { SetObjectVersion(value); return *this;}

    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline S3ApplicationCodeLocationDescription& WithObjectVersion(Aws::String&& value) { SetObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the object containing the application code.</p>
     */
    inline S3ApplicationCodeLocationDescription& WithObjectVersion(const char* value) { SetObjectVersion(value); return *this;}

  private:

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet;

    Aws::String m_objectVersion;
    bool m_objectVersionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
