/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
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
namespace LookoutforVision
{
namespace Model
{

  /**
   * <p>The S3 location where Amazon Lookout for Vision saves training
   * output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lookoutvision-2020-11-20/OutputS3Object">AWS
   * API Reference</a></p>
   */
  class OutputS3Object
  {
  public:
    AWS_LOOKOUTFORVISION_API OutputS3Object();
    AWS_LOOKOUTFORVISION_API OutputS3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API OutputS3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LOOKOUTFORVISION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bucket that contains the training output.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The bucket that contains the training output.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The bucket that contains the training output.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The bucket that contains the training output.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The bucket that contains the training output.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The bucket that contains the training output.</p>
     */
    inline OutputS3Object& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The bucket that contains the training output.</p>
     */
    inline OutputS3Object& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The bucket that contains the training output.</p>
     */
    inline OutputS3Object& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The location of the training output in the bucket.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The location of the training output in the bucket.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The location of the training output in the bucket.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The location of the training output in the bucket.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The location of the training output in the bucket.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The location of the training output in the bucket.</p>
     */
    inline OutputS3Object& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The location of the training output in the bucket.</p>
     */
    inline OutputS3Object& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The location of the training output in the bucket.</p>
     */
    inline OutputS3Object& WithKey(const char* value) { SetKey(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
