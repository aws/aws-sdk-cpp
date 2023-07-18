﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
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
namespace KafkaConnect
{
namespace Model
{

  /**
   * <p>The description of the location of an object in Amazon S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafkaconnect-2021-09-14/S3LocationDescription">AWS
   * API Reference</a></p>
   */
  class AWS_KAFKACONNECT_API S3LocationDescription
  {
  public:
    S3LocationDescription();
    S3LocationDescription(Aws::Utils::Json::JsonView jsonValue);
    S3LocationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of an S3 bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an S3 bucket.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an S3 bucket.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an S3 bucket.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an S3 bucket.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an S3 bucket.</p>
     */
    inline S3LocationDescription& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an S3 bucket.</p>
     */
    inline S3LocationDescription& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an S3 bucket.</p>
     */
    inline S3LocationDescription& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p>The file key for an object in an S3 bucket.</p>
     */
    inline const Aws::String& GetFileKey() const{ return m_fileKey; }

    /**
     * <p>The file key for an object in an S3 bucket.</p>
     */
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }

    /**
     * <p>The file key for an object in an S3 bucket.</p>
     */
    inline void SetFileKey(const Aws::String& value) { m_fileKeyHasBeenSet = true; m_fileKey = value; }

    /**
     * <p>The file key for an object in an S3 bucket.</p>
     */
    inline void SetFileKey(Aws::String&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::move(value); }

    /**
     * <p>The file key for an object in an S3 bucket.</p>
     */
    inline void SetFileKey(const char* value) { m_fileKeyHasBeenSet = true; m_fileKey.assign(value); }

    /**
     * <p>The file key for an object in an S3 bucket.</p>
     */
    inline S3LocationDescription& WithFileKey(const Aws::String& value) { SetFileKey(value); return *this;}

    /**
     * <p>The file key for an object in an S3 bucket.</p>
     */
    inline S3LocationDescription& WithFileKey(Aws::String&& value) { SetFileKey(std::move(value)); return *this;}

    /**
     * <p>The file key for an object in an S3 bucket.</p>
     */
    inline S3LocationDescription& WithFileKey(const char* value) { SetFileKey(value); return *this;}


    /**
     * <p>The version of an object in an S3 bucket.</p>
     */
    inline const Aws::String& GetObjectVersion() const{ return m_objectVersion; }

    /**
     * <p>The version of an object in an S3 bucket.</p>
     */
    inline bool ObjectVersionHasBeenSet() const { return m_objectVersionHasBeenSet; }

    /**
     * <p>The version of an object in an S3 bucket.</p>
     */
    inline void SetObjectVersion(const Aws::String& value) { m_objectVersionHasBeenSet = true; m_objectVersion = value; }

    /**
     * <p>The version of an object in an S3 bucket.</p>
     */
    inline void SetObjectVersion(Aws::String&& value) { m_objectVersionHasBeenSet = true; m_objectVersion = std::move(value); }

    /**
     * <p>The version of an object in an S3 bucket.</p>
     */
    inline void SetObjectVersion(const char* value) { m_objectVersionHasBeenSet = true; m_objectVersion.assign(value); }

    /**
     * <p>The version of an object in an S3 bucket.</p>
     */
    inline S3LocationDescription& WithObjectVersion(const Aws::String& value) { SetObjectVersion(value); return *this;}

    /**
     * <p>The version of an object in an S3 bucket.</p>
     */
    inline S3LocationDescription& WithObjectVersion(Aws::String&& value) { SetObjectVersion(std::move(value)); return *this;}

    /**
     * <p>The version of an object in an S3 bucket.</p>
     */
    inline S3LocationDescription& WithObjectVersion(const char* value) { SetObjectVersion(value); return *this;}

  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet;

    Aws::String m_objectVersion;
    bool m_objectVersionHasBeenSet;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
