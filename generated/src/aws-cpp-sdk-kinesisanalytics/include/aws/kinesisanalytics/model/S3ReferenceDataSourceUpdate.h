/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes the S3 bucket name, object key name, and IAM role that Amazon
   * Kinesis Analytics can assume to read the Amazon S3 object on your behalf and
   * populate the in-application reference table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/S3ReferenceDataSourceUpdate">AWS
   * API Reference</a></p>
   */
  class S3ReferenceDataSourceUpdate
  {
  public:
    AWS_KINESISANALYTICS_API S3ReferenceDataSourceUpdate() = default;
    AWS_KINESISANALYTICS_API S3ReferenceDataSourceUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API S3ReferenceDataSourceUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of the S3 bucket.</p>
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
     * <p>Object key name.</p>
     */
    inline const Aws::String& GetFileKeyUpdate() const { return m_fileKeyUpdate; }
    inline bool FileKeyUpdateHasBeenSet() const { return m_fileKeyUpdateHasBeenSet; }
    template<typename FileKeyUpdateT = Aws::String>
    void SetFileKeyUpdate(FileKeyUpdateT&& value) { m_fileKeyUpdateHasBeenSet = true; m_fileKeyUpdate = std::forward<FileKeyUpdateT>(value); }
    template<typename FileKeyUpdateT = Aws::String>
    S3ReferenceDataSourceUpdate& WithFileKeyUpdate(FileKeyUpdateT&& value) { SetFileKeyUpdate(std::forward<FileKeyUpdateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of the IAM role that Amazon Kinesis Analytics can assume to read the
     * Amazon S3 object and populate the in-application.</p>
     */
    inline const Aws::String& GetReferenceRoleARNUpdate() const { return m_referenceRoleARNUpdate; }
    inline bool ReferenceRoleARNUpdateHasBeenSet() const { return m_referenceRoleARNUpdateHasBeenSet; }
    template<typename ReferenceRoleARNUpdateT = Aws::String>
    void SetReferenceRoleARNUpdate(ReferenceRoleARNUpdateT&& value) { m_referenceRoleARNUpdateHasBeenSet = true; m_referenceRoleARNUpdate = std::forward<ReferenceRoleARNUpdateT>(value); }
    template<typename ReferenceRoleARNUpdateT = Aws::String>
    S3ReferenceDataSourceUpdate& WithReferenceRoleARNUpdate(ReferenceRoleARNUpdateT&& value) { SetReferenceRoleARNUpdate(std::forward<ReferenceRoleARNUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketARNUpdate;
    bool m_bucketARNUpdateHasBeenSet = false;

    Aws::String m_fileKeyUpdate;
    bool m_fileKeyUpdateHasBeenSet = false;

    Aws::String m_referenceRoleARNUpdate;
    bool m_referenceRoleARNUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
