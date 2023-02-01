/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/applicationcostprofiler/model/S3BucketRegion.h>
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
namespace ApplicationCostProfiler
{
namespace Model
{

  /**
   * <p>Represents the Amazon Simple Storage Service (Amazon S3) location where usage
   * data is read from.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/SourceS3Location">AWS
   * API Reference</a></p>
   */
  class SourceS3Location
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API SourceS3Location();
    AWS_APPLICATIONCOSTPROFILER_API SourceS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API SourceS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Name of the bucket.</p>
     */
    inline const Aws::String& GetBucket() const{ return m_bucket; }

    /**
     * <p>Name of the bucket.</p>
     */
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }

    /**
     * <p>Name of the bucket.</p>
     */
    inline void SetBucket(const Aws::String& value) { m_bucketHasBeenSet = true; m_bucket = value; }

    /**
     * <p>Name of the bucket.</p>
     */
    inline void SetBucket(Aws::String&& value) { m_bucketHasBeenSet = true; m_bucket = std::move(value); }

    /**
     * <p>Name of the bucket.</p>
     */
    inline void SetBucket(const char* value) { m_bucketHasBeenSet = true; m_bucket.assign(value); }

    /**
     * <p>Name of the bucket.</p>
     */
    inline SourceS3Location& WithBucket(const Aws::String& value) { SetBucket(value); return *this;}

    /**
     * <p>Name of the bucket.</p>
     */
    inline SourceS3Location& WithBucket(Aws::String&& value) { SetBucket(std::move(value)); return *this;}

    /**
     * <p>Name of the bucket.</p>
     */
    inline SourceS3Location& WithBucket(const char* value) { SetBucket(value); return *this;}


    /**
     * <p>Key of the object.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>Key of the object.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Key of the object.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Key of the object.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>Key of the object.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>Key of the object.</p>
     */
    inline SourceS3Location& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>Key of the object.</p>
     */
    inline SourceS3Location& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>Key of the object.</p>
     */
    inline SourceS3Location& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>Region of the bucket. Only required for Regions that are disabled by default.
     * For more infomration about Regions that are disabled by default, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">
     * Enabling a Region</a> in the <i>AWS General Reference guide</i>.</p>
     */
    inline const S3BucketRegion& GetRegion() const{ return m_region; }

    /**
     * <p>Region of the bucket. Only required for Regions that are disabled by default.
     * For more infomration about Regions that are disabled by default, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">
     * Enabling a Region</a> in the <i>AWS General Reference guide</i>.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>Region of the bucket. Only required for Regions that are disabled by default.
     * For more infomration about Regions that are disabled by default, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">
     * Enabling a Region</a> in the <i>AWS General Reference guide</i>.</p>
     */
    inline void SetRegion(const S3BucketRegion& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>Region of the bucket. Only required for Regions that are disabled by default.
     * For more infomration about Regions that are disabled by default, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">
     * Enabling a Region</a> in the <i>AWS General Reference guide</i>.</p>
     */
    inline void SetRegion(S3BucketRegion&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>Region of the bucket. Only required for Regions that are disabled by default.
     * For more infomration about Regions that are disabled by default, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">
     * Enabling a Region</a> in the <i>AWS General Reference guide</i>.</p>
     */
    inline SourceS3Location& WithRegion(const S3BucketRegion& value) { SetRegion(value); return *this;}

    /**
     * <p>Region of the bucket. Only required for Regions that are disabled by default.
     * For more infomration about Regions that are disabled by default, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">
     * Enabling a Region</a> in the <i>AWS General Reference guide</i>.</p>
     */
    inline SourceS3Location& WithRegion(S3BucketRegion&& value) { SetRegion(std::move(value)); return *this;}

  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    S3BucketRegion m_region;
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
