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
   * <p>The description of the S3 base location that holds the
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ContentBaseLocationDescription">AWS
   * API Reference</a></p>
   */
  class S3ContentBaseLocationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API S3ContentBaseLocationDescription();
    AWS_KINESISANALYTICSV2_API S3ContentBaseLocationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3ContentBaseLocationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARN() const{ return m_bucketARN; }
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
    inline void SetBucketARN(const Aws::String& value) { m_bucketARNHasBeenSet = true; m_bucketARN = value; }
    inline void SetBucketARN(Aws::String&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::move(value); }
    inline void SetBucketARN(const char* value) { m_bucketARNHasBeenSet = true; m_bucketARN.assign(value); }
    inline S3ContentBaseLocationDescription& WithBucketARN(const Aws::String& value) { SetBucketARN(value); return *this;}
    inline S3ContentBaseLocationDescription& WithBucketARN(Aws::String&& value) { SetBucketARN(std::move(value)); return *this;}
    inline S3ContentBaseLocationDescription& WithBucketARN(const char* value) { SetBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base path for the S3 bucket.</p>
     */
    inline const Aws::String& GetBasePath() const{ return m_basePath; }
    inline bool BasePathHasBeenSet() const { return m_basePathHasBeenSet; }
    inline void SetBasePath(const Aws::String& value) { m_basePathHasBeenSet = true; m_basePath = value; }
    inline void SetBasePath(Aws::String&& value) { m_basePathHasBeenSet = true; m_basePath = std::move(value); }
    inline void SetBasePath(const char* value) { m_basePathHasBeenSet = true; m_basePath.assign(value); }
    inline S3ContentBaseLocationDescription& WithBasePath(const Aws::String& value) { SetBasePath(value); return *this;}
    inline S3ContentBaseLocationDescription& WithBasePath(Aws::String&& value) { SetBasePath(std::move(value)); return *this;}
    inline S3ContentBaseLocationDescription& WithBasePath(const char* value) { SetBasePath(value); return *this;}
    ///@}
  private:

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet = false;

    Aws::String m_basePath;
    bool m_basePathHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
