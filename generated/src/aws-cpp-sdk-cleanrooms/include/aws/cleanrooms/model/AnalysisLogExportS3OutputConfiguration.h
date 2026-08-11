/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>Contains output information for an analysis log export with an S3 output
 * type.</p> <p>The exported logs are written under the bucket and key prefix that
 * you specify. The path includes the collaboration ID, the protected query ID, and
 * the analysis log export ID. Because the path includes the export ID, exporting
 * the same query more than once doesn't overwrite the logs from an earlier
 * export.</p>  <p>The exported logs are encrypted using the default
 * encryption configuration of the destination bucket. Clean Rooms doesn't accept a
 * KMS key for log export. To encrypt the exported logs with a customer managed
 * key, configure the bucket's default encryption to use that key before you
 * export.</p> <p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisLogExportS3OutputConfiguration">AWS
 * API Reference</a></p>
 */
class AnalysisLogExportS3OutputConfiguration {
 public:
  AWS_CLEANROOMS_API AnalysisLogExportS3OutputConfiguration() = default;
  AWS_CLEANROOMS_API AnalysisLogExportS3OutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AnalysisLogExportS3OutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The S3 bucket that the exported analysis logs are written to. The bucket must
   * be in the same Amazon Web Services Region as the collaboration.</p>
   */
  inline const Aws::String& GetBucket() const { return m_bucket; }
  inline bool BucketHasBeenSet() const { return m_bucketHasBeenSet; }
  template <typename BucketT = Aws::String>
  void SetBucket(BucketT&& value) {
    m_bucketHasBeenSet = true;
    m_bucket = std::forward<BucketT>(value);
  }
  template <typename BucketT = Aws::String>
  AnalysisLogExportS3OutputConfiguration& WithBucket(BucketT&& value) {
    SetBucket(std::forward<BucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 key prefix under which the exported analysis logs are written.</p>
   * <p>Only one export can be in progress at a time for a given query and
   * destination. To export the same query twice at once, use a different key prefix
   * for the second export.</p>
   */
  inline const Aws::String& GetKeyPrefix() const { return m_keyPrefix; }
  inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
  template <typename KeyPrefixT = Aws::String>
  void SetKeyPrefix(KeyPrefixT&& value) {
    m_keyPrefixHasBeenSet = true;
    m_keyPrefix = std::forward<KeyPrefixT>(value);
  }
  template <typename KeyPrefixT = Aws::String>
  AnalysisLogExportS3OutputConfiguration& WithKeyPrefix(KeyPrefixT&& value) {
    SetKeyPrefix(std::forward<KeyPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucket;

  Aws::String m_keyPrefix;
  bool m_bucketHasBeenSet = false;
  bool m_keyPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
