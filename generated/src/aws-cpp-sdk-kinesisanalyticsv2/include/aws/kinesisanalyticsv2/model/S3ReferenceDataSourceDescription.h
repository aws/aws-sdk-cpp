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
   * <p>For a SQL-based Kinesis Data Analytics application, provides the bucket name
   * and object key name that stores the reference data.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3ReferenceDataSourceDescription">AWS
   * API Reference</a></p>
   */
  class S3ReferenceDataSourceDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API S3ReferenceDataSourceDescription() = default;
    AWS_KINESISANALYTICSV2_API S3ReferenceDataSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API S3ReferenceDataSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the S3 bucket.</p>
     */
    inline const Aws::String& GetBucketARN() const { return m_bucketARN; }
    inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
    template<typename BucketARNT = Aws::String>
    void SetBucketARN(BucketARNT&& value) { m_bucketARNHasBeenSet = true; m_bucketARN = std::forward<BucketARNT>(value); }
    template<typename BucketARNT = Aws::String>
    S3ReferenceDataSourceDescription& WithBucketARN(BucketARNT&& value) { SetBucketARN(std::forward<BucketARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon S3 object key name.</p>
     */
    inline const Aws::String& GetFileKey() const { return m_fileKey; }
    inline bool FileKeyHasBeenSet() const { return m_fileKeyHasBeenSet; }
    template<typename FileKeyT = Aws::String>
    void SetFileKey(FileKeyT&& value) { m_fileKeyHasBeenSet = true; m_fileKey = std::forward<FileKeyT>(value); }
    template<typename FileKeyT = Aws::String>
    S3ReferenceDataSourceDescription& WithFileKey(FileKeyT&& value) { SetFileKey(std::forward<FileKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM role that Kinesis Data Analytics can assume to read the
     * Amazon S3 object on your behalf to populate the in-application reference table.
     * </p>  <p>Provided for backward compatibility. Applications that are
     * created with the current API version have an application-level service execution
     * role rather than a resource-level role.</p> 
     */
    inline const Aws::String& GetReferenceRoleARN() const { return m_referenceRoleARN; }
    inline bool ReferenceRoleARNHasBeenSet() const { return m_referenceRoleARNHasBeenSet; }
    template<typename ReferenceRoleARNT = Aws::String>
    void SetReferenceRoleARN(ReferenceRoleARNT&& value) { m_referenceRoleARNHasBeenSet = true; m_referenceRoleARN = std::forward<ReferenceRoleARNT>(value); }
    template<typename ReferenceRoleARNT = Aws::String>
    S3ReferenceDataSourceDescription& WithReferenceRoleARN(ReferenceRoleARNT&& value) { SetReferenceRoleARN(std::forward<ReferenceRoleARNT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketARN;
    bool m_bucketARNHasBeenSet = false;

    Aws::String m_fileKey;
    bool m_fileKeyHasBeenSet = false;

    Aws::String m_referenceRoleARN;
    bool m_referenceRoleARNHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
