/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/EncryptionStrategy.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CloudWatchOmni {
namespace Model {

/**
 * <p>How a resource's data at rest is encrypted.</p> <p><code>kmsKeyArn</code> is
 * required when <code>encryptionStrategy</code> is CUSTOMER_MANAGED and must be
 * absent when it is AWS_OWNED; a mismatch is a ValidationException rather than a
 * silently ignored field, so a caller that selects AWS_OWNED while still passing a
 * key learns that the key was not applied.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/EncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class EncryptionConfiguration {
 public:
  AWS_CLOUDWATCHOMNI_API EncryptionConfiguration() = default;
  AWS_CLOUDWATCHOMNI_API EncryptionConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API EncryptionConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Which kind of key to use. Required.</p>
   */
  inline EncryptionStrategy GetEncryptionStrategy() const { return m_encryptionStrategy; }
  inline bool EncryptionStrategyHasBeenSet() const { return m_encryptionStrategyHasBeenSet; }
  inline void SetEncryptionStrategy(EncryptionStrategy value) {
    m_encryptionStrategyHasBeenSet = true;
    m_encryptionStrategy = value;
  }
  inline EncryptionConfiguration& WithEncryptionStrategy(EncryptionStrategy value) {
    SetEncryptionStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Customer managed KMS key ARN. Required when <code>encryptionStrategy</code>
   * is CUSTOMER_MANAGED, and must be omitted when it is AWS_OWNED. Must be a
   * symmetric ENCRYPT_DECRYPT key in the caller's account and region.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  EncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  EncryptionStrategy m_encryptionStrategy{EncryptionStrategy::NOT_SET};

  Aws::String m_kmsKeyArn;
  bool m_encryptionStrategyHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
