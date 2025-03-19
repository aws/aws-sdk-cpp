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
    AWS_APPLICATIONCOSTPROFILER_API SourceS3Location() = default;
    AWS_APPLICATIONCOSTPROFILER_API SourceS3Location(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API SourceS3Location& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONCOSTPROFILER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Name of the bucket.</p>
     */
    inline const Aws::String& GetBucket() const { return m_bucket; }
    inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
    template<typename BucketT = Aws::String>
    void SetBucket(BucketT&& value) { m_bucketHasBeenSet = true; m_bucket = std::forward<BucketT>(value); }
    template<typename BucketT = Aws::String>
    SourceS3Location& WithBucket(BucketT&& value) { SetBucket(std::forward<BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Key of the object.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    SourceS3Location& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Region of the bucket. Only required for Regions that are disabled by default.
     * For more infomration about Regions that are disabled by default, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/rande-manage.html#rande-manage-enable">
     * Enabling a Region</a> in the <i>AWS General Reference guide</i>.</p>
     */
    inline S3BucketRegion GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(S3BucketRegion value) { m_regionHasBeenSet = true; m_region = value; }
    inline SourceS3Location& WithRegion(S3BucketRegion value) { SetRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_bucket;
    bool m_bucketHasBeenSet = false;

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    S3BucketRegion m_region{S3BucketRegion::NOT_SET};
    bool m_regionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
