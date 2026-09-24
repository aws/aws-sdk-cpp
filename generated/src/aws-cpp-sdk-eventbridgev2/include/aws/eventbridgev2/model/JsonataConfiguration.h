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
 * <p>JSONata transform settings for a subscriber.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eventbridgev2-2025-05-15/JsonataConfiguration">AWS
 * API Reference</a></p>
 */
class JsonataConfiguration {
 public:
  AWS_EVENTBRIDGEV2_API JsonataConfiguration() = default;
  AWS_EVENTBRIDGEV2_API JsonataConfiguration(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API JsonataConfiguration& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_EVENTBRIDGEV2_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>JSONata expression to transform the event. Must be wrapped in {% %}
   * delimiters.</p>
   */
  inline const Aws::String& GetExpression() const { return m_expression; }
  inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
  template <typename ExpressionT = Aws::String>
  void SetExpression(ExpressionT&& value) {
    m_expressionHasBeenSet = true;
    m_expression = std::forward<ExpressionT>(value);
  }
  template <typename ExpressionT = Aws::String>
  JsonataConfiguration& WithExpression(ExpressionT&& value) {
    SetExpression(std::forward<ExpressionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_expression;
  bool m_expressionHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
