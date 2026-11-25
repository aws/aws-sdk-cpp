/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ProxyStatusCode.h>
#include <aws/elb-proxy/model/ProxyStatusReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ELBProxy {
namespace Model {

/**
 * <p>The status of a proxy.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ProxyStatus">AWS
 * API Reference</a></p>
 */
class ProxyStatus {
 public:
  AWS_ELBPROXY_API ProxyStatus() = default;
  AWS_ELBPROXY_API ProxyStatus(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ProxyStatus& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The status code of the proxy.</p>
   */
  inline ProxyStatusCode GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  inline void SetCode(ProxyStatusCode value) {
    m_codeHasBeenSet = true;
    m_code = value;
  }
  inline ProxyStatus& WithCode(ProxyStatusCode value) {
    SetCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reasons for the current status of the proxy.</p>
   */
  inline const Aws::Vector<ProxyStatusReason>& GetReasons() const { return m_reasons; }
  inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
  template <typename ReasonsT = Aws::Vector<ProxyStatusReason>>
  void SetReasons(ReasonsT&& value) {
    m_reasonsHasBeenSet = true;
    m_reasons = std::forward<ReasonsT>(value);
  }
  template <typename ReasonsT = Aws::Vector<ProxyStatusReason>>
  ProxyStatus& WithReasons(ReasonsT&& value) {
    SetReasons(std::forward<ReasonsT>(value));
    return *this;
  }
  template <typename ReasonsT = ProxyStatusReason>
  ProxyStatus& AddReasons(ReasonsT&& value) {
    m_reasonsHasBeenSet = true;
    m_reasons.emplace_back(std::forward<ReasonsT>(value));
    return *this;
  }
  ///@}
 private:
  ProxyStatusCode m_code{ProxyStatusCode::NOT_SET};

  Aws::Vector<ProxyStatusReason> m_reasons;
  bool m_codeHasBeenSet = false;
  bool m_reasonsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
