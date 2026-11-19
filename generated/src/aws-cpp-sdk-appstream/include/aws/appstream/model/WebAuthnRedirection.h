/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Describes the WebAuthn redirection configuration for a stack. With WebAuthn
 * redirection, your users can complete passkey and security-key authentication
 * from a streaming session by using an authenticator attached to their local
 * device.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/WebAuthnRedirection">AWS
 * API Reference</a></p>
 */
class WebAuthnRedirection {
 public:
  AWS_APPSTREAM_API WebAuthnRedirection() = default;
  AWS_APPSTREAM_API WebAuthnRedirection(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API WebAuthnRedirection& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_APPSTREAM_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Specifies whether WebAuthn redirection is enabled for the stack.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline WebAuthnRedirection& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of process executable names for which you enable WebAuthn
   * redirection. For example, chrome.exe.</p>
   */
  inline const Aws::Vector<Aws::String>& GetProcessCompatibilityList() const { return m_processCompatibilityList; }
  inline bool ProcessCompatibilityListHasBeenSet() const { return m_processCompatibilityListHasBeenSet; }
  template <typename ProcessCompatibilityListT = Aws::Vector<Aws::String>>
  void SetProcessCompatibilityList(ProcessCompatibilityListT&& value) {
    m_processCompatibilityListHasBeenSet = true;
    m_processCompatibilityList = std::forward<ProcessCompatibilityListT>(value);
  }
  template <typename ProcessCompatibilityListT = Aws::Vector<Aws::String>>
  WebAuthnRedirection& WithProcessCompatibilityList(ProcessCompatibilityListT&& value) {
    SetProcessCompatibilityList(std::forward<ProcessCompatibilityListT>(value));
    return *this;
  }
  template <typename ProcessCompatibilityListT = Aws::String>
  WebAuthnRedirection& AddProcessCompatibilityList(ProcessCompatibilityListT&& value) {
    m_processCompatibilityListHasBeenSet = true;
    m_processCompatibilityList.emplace_back(std::forward<ProcessCompatibilityListT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::Vector<Aws::String> m_processCompatibilityList;
  bool m_enabledHasBeenSet = false;
  bool m_processCompatibilityListHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
