/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Object stored in S3 containing ephemeris data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/S3Object">AWS
   * API Reference</a></p>
   */
  class S3Object
  {
  public:
    AWS_GROUNDSTATION_API S3Object();
    AWS_GROUNDSTATION_API S3Object(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API S3Object& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon S3 Bucket name.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>An Amazon S3 Bucket name.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>An Amazon S3 Bucket name.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>An Amazon S3 Bucket name.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>An Amazon S3 Bucket name.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>An Amazon S3 Bucket name.</p>
     */
    inline S3Object& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>An Amazon S3 Bucket name.</p>
     */
    inline S3Object& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 Bucket name.</p>
     */
    inline S3Object& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>An Amazon S3 key for the ephemeris.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>An Amazon S3 key for the ephemeris.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>An Amazon S3 key for the ephemeris.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>An Amazon S3 key for the ephemeris.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>An Amazon S3 key for the ephemeris.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>An Amazon S3 key for the ephemeris.</p>
     */
    inline S3Object& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>An Amazon S3 key for the ephemeris.</p>
     */
    inline S3Object& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>An Amazon S3 key for the ephemeris.</p>
     */
    inline S3Object& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>For versioned S3 objects, the version to use for the ephemeris.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>For versioned S3 objects, the version to use for the ephemeris.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>For versioned S3 objects, the version to use for the ephemeris.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>For versioned S3 objects, the version to use for the ephemeris.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>For versioned S3 objects, the version to use for the ephemeris.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>For versioned S3 objects, the version to use for the ephemeris.</p>
     */
    inline S3Object& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>For versioned S3 objects, the version to use for the ephemeris.</p>
     */
    inline S3Object& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>For versioned S3 objects, the version to use for the ephemeris.</p>
     */
    inline S3Object& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
