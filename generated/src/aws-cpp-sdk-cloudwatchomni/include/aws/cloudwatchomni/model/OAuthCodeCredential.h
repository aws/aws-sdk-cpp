/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
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
 * <p>Credentials for an OAuth 2.0 authorization-code grant, supplied when
 * completing the authorization of an integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/OAuthCodeCredential">AWS
 * API Reference</a></p>
 */
class OAuthCodeCredential {
 public:
  AWS_CLOUDWATCHOMNI_API OAuthCodeCredential() = default;
  AWS_CLOUDWATCHOMNI_API OAuthCodeCredential(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API OAuthCodeCredential& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The OAuth 2.0 authorization code returned by the external system's
   * authorization endpoint.</p>
   */
  inline const Aws::String& GetAuthCode() const { return m_authCode; }
  inline bool AuthCodeHasBeenSet() const { return m_authCodeHasBeenSet; }
  template <typename AuthCodeT = Aws::String>
  void SetAuthCode(AuthCodeT&& value) {
    m_authCodeHasBeenSet = true;
    m_authCode = std::forward<AuthCodeT>(value);
  }
  template <typename AuthCodeT = Aws::String>
  OAuthCodeCredential& WithAuthCode(AuthCodeT&& value) {
    SetAuthCode(std::forward<AuthCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_authCode;
  bool m_authCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
