/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/elb-proxy/ELBProxy_EXPORTS.h>
#include <aws/elb-proxy/model/ProxyUpdatePropagationStatus.h>
#include <aws/elb-proxy/model/ProxyUpdateValidationStatus.h>

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
 * <p>The state of a proxy update.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elb-proxy-2026-11-20/ProxyUpdateState">AWS
 * API Reference</a></p>
 */
class ProxyUpdateState {
 public:
  AWS_ELBPROXY_API ProxyUpdateState() = default;
  AWS_ELBPROXY_API ProxyUpdateState(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API ProxyUpdateState& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_ELBPROXY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Whether the configuration submitted with the update works. An update is valid
   * once it is successfully applied to at least one proxy node.</p>
   */
  inline ProxyUpdateValidationStatus GetValidationStatus() const { return m_validationStatus; }
  inline bool ValidationStatusHasBeenSet() const { return m_validationStatusHasBeenSet; }
  inline void SetValidationStatus(ProxyUpdateValidationStatus value) {
    m_validationStatusHasBeenSet = true;
    m_validationStatus = value;
  }
  inline ProxyUpdateState& WithValidationStatus(ProxyUpdateValidationStatus value) {
    SetValidationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether the configuration submitted with the update was applied to all proxy
   * nodes.</p>
   */
  inline ProxyUpdatePropagationStatus GetPropagationStatus() const { return m_propagationStatus; }
  inline bool PropagationStatusHasBeenSet() const { return m_propagationStatusHasBeenSet; }
  inline void SetPropagationStatus(ProxyUpdatePropagationStatus value) {
    m_propagationStatusHasBeenSet = true;
    m_propagationStatus = value;
  }
  inline ProxyUpdateState& WithPropagationStatus(ProxyUpdatePropagationStatus value) {
    SetPropagationStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reasons for the current state of the update.</p>
   */
  inline const Aws::Vector<Aws::String>& GetReasons() const { return m_reasons; }
  inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }
  template <typename ReasonsT = Aws::Vector<Aws::String>>
  void SetReasons(ReasonsT&& value) {
    m_reasonsHasBeenSet = true;
    m_reasons = std::forward<ReasonsT>(value);
  }
  template <typename ReasonsT = Aws::Vector<Aws::String>>
  ProxyUpdateState& WithReasons(ReasonsT&& value) {
    SetReasons(std::forward<ReasonsT>(value));
    return *this;
  }
  template <typename ReasonsT = Aws::String>
  ProxyUpdateState& AddReasons(ReasonsT&& value) {
    m_reasonsHasBeenSet = true;
    m_reasons.emplace_back(std::forward<ReasonsT>(value));
    return *this;
  }
  ///@}
 private:
  ProxyUpdateValidationStatus m_validationStatus{ProxyUpdateValidationStatus::NOT_SET};

  ProxyUpdatePropagationStatus m_propagationStatus{ProxyUpdatePropagationStatus::NOT_SET};

  Aws::Vector<Aws::String> m_reasons;
  bool m_validationStatusHasBeenSet = false;
  bool m_propagationStatusHasBeenSet = false;
  bool m_reasonsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ELBProxy
}  // namespace Aws
