/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about an S3 object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/S3Object">AWS
   * API Reference</a></p>
   */
  class S3Object
  {
  public:
    AWS_ROBOMAKER_API S3Object();
    AWS_ROBOMAKER_API S3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The bucket containing the object.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>The bucket containing the object.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>The bucket containing the object.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>The bucket containing the object.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>The bucket containing the object.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>The bucket containing the object.</p>
     */
    inline S3Object& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>The bucket containing the object.</p>
     */
    inline S3Object& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>The bucket containing the object.</p>
     */
    inline S3Object& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>The key of the object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The key of the object.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key of the object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key of the object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key of the object.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The key of the object.</p>
     */
    inline S3Object& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The key of the object.</p>
     */
    inline S3Object& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The key of the object.</p>
     */
    inline S3Object& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The etag of the object.</p>
     */
    inline const Aws::String& GetEtag() const{ return m_etag; }

    /**
     * <p>The etag of the object.</p>
     */
    inline bool EtagHasBeenSet() const { return m_etagHasBeenSet; }

    /**
     * <p>The etag of the object.</p>
     */
    inline void SetEtag(const Aws::String& value) { m_etagHasBeenSet = true; m_etag = value; }

    /**
     * <p>The etag of the object.</p>
     */
    inline void SetEtag(Aws::String&& value) { m_etagHasBeenSet = true; m_etag = std::move(value); }

    /**
     * <p>The etag of the object.</p>
     */
    inline void SetEtag(const char* value) { m_etagHasBeenSet = true; m_etag.assign(value); }

    /**
     * <p>The etag of the object.</p>
     */
    inline S3Object& WithEtag(const Aws::String& value) { SetEtag(value); return *this;}

    /**
     * <p>The etag of the object.</p>
     */
    inline S3Object& WithEtag(Aws::String&& value) { SetEtag(std::move(value)); return *this;}

    /**
     * <p>The etag of the object.</p>
     */
    inline S3Object& WithEtag(const char* value) { SetEtag(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_etag;
    bool m_etagHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
