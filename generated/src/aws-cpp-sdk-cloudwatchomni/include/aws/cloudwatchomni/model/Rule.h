/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudwatchomni/CloudWatchOmni_EXPORTS.h>
#include <aws/cloudwatchomni/model/TelemetryRule.h>
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
 * <p>Top-level rule definition.</p> <p>{@code telemetryRule} members are optional
 * at the Smithy level to support PATCH semantics on UpdateAlert (send only the
 * sub-blocks you want to change). On CreateAlert, presence is enforced by the
 * service-side validator.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cloudwatchomni-2025-01-01/Rule">AWS
 * API Reference</a></p>
 */
class Rule {
 public:
  AWS_CLOUDWATCHOMNI_API Rule() = default;
  AWS_CLOUDWATCHOMNI_API Rule(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API Rule& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CLOUDWATCHOMNI_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The telemetry-based rule definition.</p>
   */
  inline const TelemetryRule& GetTelemetryRule() const { return m_telemetryRule; }
  inline bool TelemetryRuleHasBeenSet() const { return m_telemetryRuleHasBeenSet; }
  template <typename TelemetryRuleT = TelemetryRule>
  void SetTelemetryRule(TelemetryRuleT&& value) {
    m_telemetryRuleHasBeenSet = true;
    m_telemetryRule = std::forward<TelemetryRuleT>(value);
  }
  template <typename TelemetryRuleT = TelemetryRule>
  Rule& WithTelemetryRule(TelemetryRuleT&& value) {
    SetTelemetryRule(std::forward<TelemetryRuleT>(value));
    return *this;
  }
  ///@}
 private:
  TelemetryRule m_telemetryRule;
  bool m_telemetryRuleHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchOmni
}  // namespace Aws
