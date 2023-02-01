/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the destination Amazon Simple Storage Service (Amazon S3) bucket
   * name and object keys of a recommendations export file, and its associated
   * metadata file.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/S3Destination">AWS
   * API Reference</a></p>
   */
  class S3Destination
  {
  public:
    AWS_COMPUTEOPTIMIZER_API S3Destination();
    AWS_COMPUTEOPTIMIZER_API S3Destination(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API S3Destination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Amazon S3 bucket used as the destination of an export
     * file.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of an export
     * file.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of an export
     * file.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of an export
     * file.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of an export
     * file.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of an export
     * file.</p>
     */
    inline S3Destination& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of an export
     * file.</p>
     */
    inline S3Destination& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket used as the destination of an export
     * file.</p>
     */
    inline S3Destination& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The Amazon S3 bucket key of an export file.</p> <p>The key uniquely
     * identifies the object, or export file, in the S3 bucket.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The Amazon S3 bucket key of an export file.</p> <p>The key uniquely
     * identifies the object, or export file, in the S3 bucket.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket key of an export file.</p> <p>The key uniquely
     * identifies the object, or export file, in the S3 bucket.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The Amazon S3 bucket key of an export file.</p> <p>The key uniquely
     * identifies the object, or export file, in the S3 bucket.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The Amazon S3 bucket key of an export file.</p> <p>The key uniquely
     * identifies the object, or export file, in the S3 bucket.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The Amazon S3 bucket key of an export file.</p> <p>The key uniquely
     * identifies the object, or export file, in the S3 bucket.</p>
     */
    inline S3Destination& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The Amazon S3 bucket key of an export file.</p> <p>The key uniquely
     * identifies the object, or export file, in the S3 bucket.</p>
     */
    inline S3Destination& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket key of an export file.</p> <p>The key uniquely
     * identifies the object, or export file, in the S3 bucket.</p>
     */
    inline S3Destination& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The Amazon S3 bucket key of a metadata file.</p> <p>The key uniquely
     * identifies the object, or metadata file, in the S3 bucket.</p>
     */
    inline const Aws::String& GetMetadataKey() const{ return m_metadataKey; }

    /**
     * <p>The Amazon S3 bucket key of a metadata file.</p> <p>The key uniquely
     * identifies the object, or metadata file, in the S3 bucket.</p>
     */
    inline bool MetadataKeyHasBeenSet() const { return m_metadataKeyHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket key of a metadata file.</p> <p>The key uniquely
     * identifies the object, or metadata file, in the S3 bucket.</p>
     */
    inline void SetMetadataKey(const Aws::String& value) { m_metadataKeyHasBeenSet = true; m_metadataKey = value; }

    /**
     * <p>The Amazon S3 bucket key of a metadata file.</p> <p>The key uniquely
     * identifies the object, or metadata file, in the S3 bucket.</p>
     */
    inline void SetMetadataKey(Aws::String&& value) { m_metadataKeyHasBeenSet = true; m_metadataKey = std::move(value); }

    /**
     * <p>The Amazon S3 bucket key of a metadata file.</p> <p>The key uniquely
     * identifies the object, or metadata file, in the S3 bucket.</p>
     */
    inline void SetMetadataKey(const char* value) { m_metadataKeyHasBeenSet = true; m_metadataKey.assign(value); }

    /**
     * <p>The Amazon S3 bucket key of a metadata file.</p> <p>The key uniquely
     * identifies the object, or metadata file, in the S3 bucket.</p>
     */
    inline S3Destination& WithMetadataKey(const Aws::String& value) { SetMetadataKey(value); return *this;}

    /**
     * <p>The Amazon S3 bucket key of a metadata file.</p> <p>The key uniquely
     * identifies the object, or metadata file, in the S3 bucket.</p>
     */
    inline S3Destination& WithMetadataKey(Aws::String&& value) { SetMetadataKey(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket key of a metadata file.</p> <p>The key uniquely
     * identifies the object, or metadata file, in the S3 bucket.</p>
     */
    inline S3Destination& WithMetadataKey(const char* value) { SetMetadataKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_metadataKey;
    bool m_metadataKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
