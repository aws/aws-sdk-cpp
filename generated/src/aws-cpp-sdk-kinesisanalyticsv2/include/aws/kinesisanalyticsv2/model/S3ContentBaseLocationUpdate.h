/**
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
   * <p>The information required to update the S3 base location that holds the
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ContentBaseLocationUpdate">AWS
   * API Reference</a></p>
   */
  class S3ContentBaseLocationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API S3ContentBaseLocationUpdate() = default;
    AWS_KINESISANALYTICSV2_API S3ContentBaseLocationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3ContentBaseLocationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARNUpdate() const { return m_bucketARNUpdate; }
    inline bool BucketARNUpdateHasBeenSet() const { return m_bucketARNUpdateHasBeenSet; }
    template<typename BucketARNUpdateT = Aws::String>
    void SetBucketARNUpdate(BucketARNUpdateT&& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = std::forward<BucketARNUpdateT>(value); }
    template<typename BucketARNUpdateT = Aws::String>
    S3ContentBaseLocationUpdate& WithBucketARNUpdate(BucketARNUpdateT&& value) { SetBucketARNUpdate(std::forward<BucketARNUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated S3 bucket path.</p>
     */
    inline const Aws::String& GetBasePathUpdate() const { return m_basePathUpdate; }
    inline bool BasePathUpdateHasBeenSet() const { return m_basePathUpdateHasBeenSet; }
    template<typename BasePathUpdateT = Aws::String>
    void SetBasePathUpdate(BasePathUpdateT&& value) { m_basePathUpdateHasBeenSet = true; m_basePathUpdate = std::forward<BasePathUpdateT>(value); }
    template<typename BasePathUpdateT = Aws::String>
    S3ContentBaseLocationUpdate& WithBasePathUpdate(BasePathUpdateT&& value) { SetBasePathUpdate(std::forward<BasePathUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketARNUpdate;
    bool m_bucketARNUpdateHasBeenSet = false;

    Aws::String m_basePathUpdate;
    bool m_basePathUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
