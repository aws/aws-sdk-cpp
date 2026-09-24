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
 * <p>Authentication configuration for public Confluent Schema Registry via
 * EventBridge Connection.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/ConfluentPublicRegistryConfiguration">AWS
 * API Reference</a></p>
 */
class ConfluentPublicRegistryConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API ConfluentPublicRegistryConfiguration() = default;
  AWS_EVENTBRIDGEV2_API ConfluentPublicRegistryConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API ConfluentPublicRegistryConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>EventBridge Connection ARN that provides API Key or OAuth credentials for the
   * registry.</p>
   */
  inline const Aws::String& GetConnectionArn() const { return m_connectionArn; }
  inline bool ConnectionArnHasBeenSet() const { return m_connectionArnHasBeenSet; }
  template <typename ConnectionArnT = Aws::String>
  void SetConnectionArn(ConnectionArnT&& value) {
    m_connectionArnHasBeenSet = true;
    m_connectionArn = std::forward<ConnectionArnT>(value);
  }
  template <typename ConnectionArnT = Aws::String>
  ConfluentPublicRegistryConfiguration& WithConnectionArn(ConnectionArnT&& value) {
    SetConnectionArn(std::forward<ConnectionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectionArn;
  bool m_connectionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
