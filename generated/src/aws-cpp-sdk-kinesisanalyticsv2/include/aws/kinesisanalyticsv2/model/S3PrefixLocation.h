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
 * <p>Specifies an Amazon S3 bucket and key prefix.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/S3PrefixLocation">AWS
 * API Reference</a></p>
 */
class S3PrefixLocation {
 public:
  AWS_KINESISANALYTICSV2_API S3PrefixLocation() = default;
  AWS_KINESISANALYTICSV2_API S3PrefixLocation(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESISANALYTICSV2_API S3PrefixLocation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  S3PrefixLocation& WithBucketARN(BucketARNT&& value) {
    SetBucketARN(std::forward<BucketARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key prefix in the Amazon S3 bucket.</p>
   */
  inline const Aws::String& GetKeyPrefix() const { return m_keyPrefix; }
  inline bool KeyPrefixHasBeenSet() const { return m_keyPrefixHasBeenSet; }
  template <typename KeyPrefixT = Aws::String>
  void SetKeyPrefix(KeyPrefixT&& value) {
    m_keyPrefixHasBeenSet = true;
    m_keyPrefix = std::forward<KeyPrefixT>(value);
  }
  template <typename KeyPrefixT = Aws::String>
  S3PrefixLocation& WithKeyPrefix(KeyPrefixT&& value) {
    SetKeyPrefix(std::forward<KeyPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_bucketARN;

  Aws::String m_keyPrefix;
  bool m_bucketARNHasBeenSet = false;
  bool m_keyPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
