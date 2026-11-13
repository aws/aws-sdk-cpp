/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/InvestigationIndicatorType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains a threat indicator, such as an IP address, a domain, or a file
 * hash.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/InvestigationIndicator">AWS
 * API Reference</a></p>
 */
class InvestigationIndicator {
 public:
  AWS_GUARDDUTY_API InvestigationIndicator() = default;
  AWS_GUARDDUTY_API InvestigationIndicator(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API InvestigationIndicator& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value of the indicator.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  InvestigationIndicator& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the indicator. Possible values are <code>IP</code>,
   * <code>DOMAIN</code>, and <code>FILE</code>.</p>
   */
  inline InvestigationIndicatorType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(InvestigationIndicatorType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline InvestigationIndicator& WithType(InvestigationIndicatorType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  InvestigationIndicatorType m_type{InvestigationIndicatorType::NOT_SET};
  bool m_valueHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
