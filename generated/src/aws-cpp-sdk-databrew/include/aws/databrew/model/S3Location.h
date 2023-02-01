/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents an Amazon S3 location (bucket name, bucket owner, and object key)
   * where DataBrew can read input data, or write output from a job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/S3Location">AWS
   * API Reference</a></p>
   */
  class S3Location
  {
  public:
    AWS_GLUEDATABREW_API S3Location();
    AWS_GLUEDATABREW_API S3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API S3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline S3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline S3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket name.</p>
     */
    inline S3Location& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The unique name of the object in the bucket.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The unique name of the object in the bucket.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The unique name of the object in the bucket.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The unique name of the object in the bucket.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The unique name of the object in the bucket.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The unique name of the object in the bucket.</p>
     */
    inline S3Location& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The unique name of the object in the bucket.</p>
     */
    inline S3Location& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The unique name of the object in the bucket.</p>
     */
    inline S3Location& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the bucket owner.</p>
     */
    inline const Aws::String& GetBucketOwner() const{ return m_bucketOwner; }

    /**
     * <p>The Amazon Web Services account ID of the bucket owner.</p>
     */
    inline bool BucketOwnerHasBeenSet() const { return m_bucketOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the bucket owner.</p>
     */
    inline void SetBucketOwner(const Aws::String& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = value; }

    /**
     * <p>The Amazon Web Services account ID of the bucket owner.</p>
     */
    inline void SetBucketOwner(Aws::String&& value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the bucket owner.</p>
     */
    inline void SetBucketOwner(const char* value) { m_bucketOwnerHasBeenSet = true; m_bucketOwner.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the bucket owner.</p>
     */
    inline S3Location& WithBucketOwner(const Aws::String& value) { SetBucketOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the bucket owner.</p>
     */
    inline S3Location& WithBucketOwner(Aws::String&& value) { SetBucketOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the bucket owner.</p>
     */
    inline S3Location& WithBucketOwner(const char* value) { SetBucketOwner(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_bucketOwner;
    bool m_bucketOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
