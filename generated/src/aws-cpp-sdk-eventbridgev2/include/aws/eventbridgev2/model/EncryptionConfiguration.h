/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace EventBridgeV2 {
namespace Model {

/**
 * <p>Encryption configuration for an event bus.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/EncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class EncryptionConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API EncryptionConfiguration() = default;
  AWS_EVENTBRIDGEV2_API EncryptionConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API EncryptionConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
  inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
  template <typename KmsKeyIdentifierT = Aws::String>
  void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) {
    m_kmsKeyIdentifierHasBeenSet = true;
    m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value);
  }
  template <typename KmsKeyIdentifierT = Aws::String>
  EncryptionConfiguration& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) {
    SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyIdentifier;
  bool m_kmsKeyIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
