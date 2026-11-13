/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/crt/cbor/Cbor.h>
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/model/OSVersion.h>

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
 * <p>OS version that the directory needs to be updated to.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/OSUpdateSettings">AWS
 * API Reference</a></p>
 */
class OSUpdateSettings {
 public:
  AWS_DIRECTORYSERVICE_API OSUpdateSettings() = default;
  AWS_DIRECTORYSERVICE_API OSUpdateSettings(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API OSUpdateSettings& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_DIRECTORYSERVICE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>OS version that the directory needs to be updated to.</p>
   */
  inline OSVersion GetOSVersion() const { return m_oSVersion; }
  inline bool OSVersionHasBeenSet() const { return m_oSVersionHasBeenSet; }
  inline void SetOSVersion(OSVersion value) {
    m_oSVersionHasBeenSet = true;
    m_oSVersion = value;
  }
  inline OSUpdateSettings& WithOSVersion(OSVersion value) {
    SetOSVersion(value);
    return *this;
  }
  ///@}
 private:
  OSVersion m_oSVersion{OSVersion::NOT_SET};
  bool m_oSVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectoryService
}  // namespace Aws
