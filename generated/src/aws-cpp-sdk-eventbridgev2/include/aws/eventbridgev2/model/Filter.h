/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>
#include <aws/eventbridgev2/model/FilterScope.h>

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
 * <p>A single filter entry within a FilterConfiguration.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/Filter">AWS
 * API Reference</a></p>
 */
class Filter {
 public:
  AWS_EVENTBRIDGEV2_API Filter() = default;
  AWS_EVENTBRIDGEV2_API Filter(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API Filter& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetPattern() const { return m_pattern; }
  inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }
  template <typename PatternT = Aws::String>
  void SetPattern(PatternT&& value) {
    m_patternHasBeenSet = true;
    m_pattern = std::forward<PatternT>(value);
  }
  template <typename PatternT = Aws::String>
  Filter& WithPattern(PatternT&& value) {
    SetPattern(std::forward<PatternT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline FilterScope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(FilterScope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline Filter& WithScope(FilterScope value) {
    SetScope(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_pattern;

  FilterScope m_scope{FilterScope::NOT_SET};
  bool m_patternHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
