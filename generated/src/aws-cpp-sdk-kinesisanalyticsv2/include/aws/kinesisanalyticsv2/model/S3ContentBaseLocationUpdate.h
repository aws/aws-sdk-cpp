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
    AWS_KINESISANALYTICSV2_API S3ContentBaseLocationUpdate();
    AWS_KINESISANALYTICSV2_API S3ContentBaseLocationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3ContentBaseLocationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The updated Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARNUpdate() const{ return m_bucketARNUpdate; }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline bool BucketARNUpdateHasBeenSet() const { return m_bucketARNUpdateHasBeenSet; }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARNUpdate(const Aws::String& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = value; }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARNUpdate(Aws::String&& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = std::move(value); }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline void SetBucketARNUpdate(const char* value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate.assign(value); }

    /**
     * <p>The updated Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ContentBaseLocationUpdate& WithBucketARNUpdate(const Aws::String& value) { SetBucketARNUpdate(value); return *this;}

    /**
     * <p>The updated Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ContentBaseLocationUpdate& WithBucketARNUpdate(Aws::String&& value) { SetBucketARNUpdate(std::move(value)); return *this;}

    /**
     * <p>The updated Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline S3ContentBaseLocationUpdate& WithBucketARNUpdate(const char* value) { SetBucketARNUpdate(value); return *this;}


    /**
     * <p>The updated S3 bucket path.</p>
     */
    inline const Aws::String& GetBasePathUpdate() const{ return m_basePathUpdate; }

    /**
     * <p>The updated S3 bucket path.</p>
     */
    inline bool BasePathUpdateHasBeenSet() const { return m_basePathUpdateHasBeenSet; }

    /**
     * <p>The updated S3 bucket path.</p>
     */
    inline void SetBasePathUpdate(const Aws::String& value) { m_basePathUpdateHasBeenSet = true; m_basePathUpdate = value; }

    /**
     * <p>The updated S3 bucket path.</p>
     */
    inline void SetBasePathUpdate(Aws::String&& value) { m_basePathUpdateHasBeenSet = true; m_basePathUpdate = std::move(value); }

    /**
     * <p>The updated S3 bucket path.</p>
     */
    inline void SetBasePathUpdate(const char* value) { m_basePathUpdateHasBeenSet = true; m_basePathUpdate.assign(value); }

    /**
     * <p>The updated S3 bucket path.</p>
     */
    inline S3ContentBaseLocationUpdate& WithBasePathUpdate(const Aws::String& value) { SetBasePathUpdate(value); return *this;}

    /**
     * <p>The updated S3 bucket path.</p>
     */
    inline S3ContentBaseLocationUpdate& WithBasePathUpdate(Aws::String&& value) { SetBasePathUpdate(std::move(value)); return *this;}

    /**
     * <p>The updated S3 bucket path.</p>
     */
    inline S3ContentBaseLocationUpdate& WithBasePathUpdate(const char* value) { SetBasePathUpdate(value); return *this;}

  private:

    Aws::String m_bucketARNUpdate;
    bool m_bucketARNUpdateHasBeenSet = false;

    Aws::String m_basePathUpdate;
    bool m_basePathUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
