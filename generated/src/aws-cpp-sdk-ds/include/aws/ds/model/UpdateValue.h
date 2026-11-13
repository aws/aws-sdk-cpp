/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/OSUpdateSettings.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace DirectoryService {
namespace Model {

/**
 * <p> The value for a given type of <code>UpdateSettings</code>. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/UpdateValue">AWS API
 * Reference</a></p>
 */
class UpdateValue {
 public:
  AWS_DIRECTORYSERVICE_API UpdateValue() = default;
  AWS_DIRECTORYSERVICE_API UpdateValue(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API UpdateValue& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p> The OS update related settings. </p>
   */
  inline const OSUpdateSettings& GetOSUpdateSettings() const { return m_oSUpdateSettings; }
  inline bool OSUpdateSettingsHasBeenSet() const { return m_oSUpdateSettingsHasBeenSet; }
  template <typename OSUpdateSettingsT = OSUpdateSettings>
  void SetOSUpdateSettings(OSUpdateSettingsT&& value) {
    m_oSUpdateSettingsHasBeenSet = true;
    m_oSUpdateSettings = std::forward<OSUpdateSettingsT>(value);
  }
  template <typename OSUpdateSettingsT = OSUpdateSettings>
  UpdateValue& WithOSUpdateSettings(OSUpdateSettingsT&& value) {
    SetOSUpdateSettings(std::forward<OSUpdateSettingsT>(value));
    return *this;
  }
  ///@}
 private:
  OSUpdateSettings m_oSUpdateSettings;
  bool m_oSUpdateSettingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
