/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Health {
namespace Model {

/**
 * <p>A tag key configured for an organization.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/TagKeyForOrganization">AWS
 * API Reference</a></p>
 */
class TagKeyForOrganization {
 public:
  AWS_HEALTH_API TagKeyForOrganization() = default;
  AWS_HEALTH_API TagKeyForOrganization(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API TagKeyForOrganization& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The tag key name.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  TagKeyForOrganization& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether this tag key is enabled for EventBridge notifications.</p>
   */
  inline bool GetEnabledForEventBridge() const { return m_enabledForEventBridge; }
  inline bool EnabledForEventBridgeHasBeenSet() const { return m_enabledForEventBridgeHasBeenSet; }
  inline void SetEnabledForEventBridge(bool value) {
    m_enabledForEventBridgeHasBeenSet = true;
    m_enabledForEventBridge = value;
  }
  inline TagKeyForOrganization& WithEnabledForEventBridge(bool value) {
    SetEnabledForEventBridge(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  bool m_enabledForEventBridge{false};
  bool m_keyHasBeenSet = false;
  bool m_enabledForEventBridgeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
