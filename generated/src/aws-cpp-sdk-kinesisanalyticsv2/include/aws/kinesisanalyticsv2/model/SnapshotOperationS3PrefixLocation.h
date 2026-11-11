/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace KinesisAnalyticsV2 {
namespace Model {

/**
 * <p>Describes an Amazon S3 bucket and key prefix for a snapshot
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/SnapshotOperationS3PrefixLocation">AWS
 * API Reference</a></p>
 */
class SnapshotOperationS3PrefixLocation {
 public:
  AWS_KINESISANALYTICSV2_API SnapshotOperationS3PrefixLocation() = default;
  AWS_KINESISANALYTICSV2_API SnapshotOperationS3PrefixLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API SnapshotOperationS3PrefixLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetBucketARN() const { return m_bucketARN; }
  inline bool BucketARNHasBeenSet() const { return m_bucketARNHasBeenSet; }
  template <typename BucketARNT = Aws::String>
  void SetBucketARN(BucketARNT&& value) {
    m_bucketARNHasBeenSet = true;
    m_bucketARN = std::forward<BucketARNT>(value);
  }
  template <typename BucketARNT = Aws::String>
  SnapshotOperationS3PrefixLocation& WithBucketARN(BucketARNT&& value) {
    SetBucketARN(std::forward<BucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key prefix in the Amazon S3 bucket that you specified in the request.</p>
   */
  inline const Aws::String& GetKeyPrefix() const { return m_keyPrefix; }
  inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
  template <typename KeyPrefixT = Aws::String>
  void SetKeyPrefix(KeyPrefixT&& value) {
    m_keyPrefixHasBeenSet = true;
    m_keyPrefix = std::forward<KeyPrefixT>(value);
  }
  template <typename KeyPrefixT = Aws::String>
  SnapshotOperationS3PrefixLocation& WithKeyPrefix(KeyPrefixT&& value) {
    SetKeyPrefix(std::forward<KeyPrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The full key prefix that the exported snapshot data was written to. This
   * value includes the unique prefix that Managed Service for Apache Flink appends
   * to <code>KeyPrefix</code>. This field is present only after an
   * <code>ExportSnapshot</code> operation completes successfully.</p>
   */
  inline const Aws::String& GetExportedPrefix() const { return m_exportedPrefix; }
  inline bool ExportedPrefixHasBeenSet() const { return m_exportedPrefixHasBeenSet; }
  template <typename ExportedPrefixT = Aws::String>
  void SetExportedPrefix(ExportedPrefixT&& value) {
    m_exportedPrefixHasBeenSet = true;
    m_exportedPrefix = std::forward<ExportedPrefixT>(value);
  }
  template <typename ExportedPrefixT = Aws::String>
  SnapshotOperationS3PrefixLocation& WithExportedPrefix(ExportedPrefixT&& value) {
    SetExportedPrefix(std::forward<ExportedPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketARN;

  Aws::String m_keyPrefix;

  Aws::String m_exportedPrefix;
  bool m_bucketARNHasBeenSet = false;
  bool m_keyPrefixHasBeenSet = false;
  bool m_exportedPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
