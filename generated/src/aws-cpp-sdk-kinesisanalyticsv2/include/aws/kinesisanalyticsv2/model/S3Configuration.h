﻿/**
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
   * <p>For a SQL-based Kinesis Data Analytics application, provides a description of
   * an Amazon S3 data source, including the Amazon Resource Name (ARN) of the S3
   * bucket and the name of the Amazon S3 object that contains the
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3Configuration">AWS
   * API Reference</a></p>
   */
  class S3Configuration
  {
  public:
    AWS_KINESISANALYTICSV2_API S3Configuration() = default;
    AWS_KINESISANALYTICSV2_API S3Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the S3 bucket that contains the data.</p>
     */
    inline const Aws::String& GetBucketARN() const { return m_bucketARN; }
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
    template<typename BucketARNT = Aws::String>
    void SetBucketARN(BucketARNT&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::forward<BucketARNT>(value); }
    template<typename BucketARNT = Aws::String>
    S3Configuration& WithBucketARN(BucketARNT&& value) { SetBucketARN(std::forward<BucketARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the object that contains the data.</p>
     */
    inline const Aws::String& GetFileKey() const { return m_fileKey; }
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }
    template<typename FileKeyT = Aws::String>
    void SetFileKey(FileKeyT&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::forward<FileKeyT>(value); }
    template<typename FileKeyT = Aws::String>
    S3Configuration& WithFileKey(FileKeyT&& value) { SetFileKey(std::forward<FileKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet = false;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
