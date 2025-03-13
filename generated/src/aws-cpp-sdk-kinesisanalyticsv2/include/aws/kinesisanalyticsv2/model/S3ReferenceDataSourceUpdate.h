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
   * <p>For a SQL-based Kinesis Data Analytics application, describes the Amazon S3
   * bucket name and object key name for an in-application reference table.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ReferenceDataSourceUpdate">AWS
   * API Reference</a></p>
   */
  class S3ReferenceDataSourceUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API S3ReferenceDataSourceUpdate() = default;
    AWS_KINESISANALYTICSV2_API S3ReferenceDataSourceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3ReferenceDataSourceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARNUpdate() const { return m_bucketARNUpdate; }
    inline bool BucketARNUpdateHasBeenSet() const { return m_bucketARNUpdateHasBeenSet; }
    template<typename BucketARNUpdateT = Aws::String>
    void SetBucketARNUpdate(BucketARNUpdateT&& value) { m_bucketARNUpdateHasBeenSet = true; m_bucketARNUpdate = std::forward<BucketARNUpdateT>(value); }
    template<typename BucketARNUpdateT = Aws::String>
    S3ReferenceDataSourceUpdate& WithBucketARNUpdate(BucketARNUpdateT&& value) { SetBucketARNUpdate(std::forward<BucketARNUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The object key name.</p>
     */
    inline const Aws::String& GetFileKeyUpdate() const { return m_fileKeyUpdate; }
    inline bool FileKeyUpdateHasBeenSet() const { return m_fileKeyUpdateHasBeenSet; }
    template<typename FileKeyUpdateT = Aws::String>
    void SetFileKeyUpdate(FileKeyUpdateT&& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = std::forward<FileKeyUpdateT>(value); }
    template<typename FileKeyUpdateT = Aws::String>
    S3ReferenceDataSourceUpdate& WithFileKeyUpdate(FileKeyUpdateT&& value) { SetFileKeyUpdate(std::forward<FileKeyUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketARNUpdate;
    bool m_bucketARNUpdateHasBeenSet = false;

    Aws::String m_fileKeyUpdate;
    bool m_fileKeyUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
