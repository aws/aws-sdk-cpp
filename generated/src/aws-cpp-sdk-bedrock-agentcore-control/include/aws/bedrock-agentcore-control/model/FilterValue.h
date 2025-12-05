/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> The value used in filter comparisons, supporting different data types for
 * flexible filtering criteria. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/FilterValue">AWS
 * API Reference</a></p>
 */
class FilterValue {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API FilterValue() = default;
  AWS_BEDROCKAGENTCORECONTROL_API FilterValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API FilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The string value for text-based filtering. </p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  FilterValue& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The numeric value for numerical filtering and comparisons. </p>
   */
  inline double GetDoubleValue() const { return m_doubleValue; }
  inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
  inline void SetDoubleValue(double value) {
    m_doubleValueHasBeenSet = true;
    m_doubleValue = value;
  }
  inline FilterValue& WithDoubleValue(double value) {
    SetDoubleValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The boolean value for true/false filtering conditions. </p>
   */
  inline bool GetBooleanValue() const { return m_booleanValue; }
  inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
  inline void SetBooleanValue(bool value) {
    m_booleanValueHasBeenSet = true;
    m_booleanValue = value;
  }
  inline FilterValue& WithBooleanValue(bool value) {
    SetBooleanValue(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;

  double m_doubleValue{0.0};

  bool m_booleanValue{false};
  bool m_stringValueHasBeenSet = false;
  bool m_doubleValueHasBeenSet = false;
  bool m_booleanValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
