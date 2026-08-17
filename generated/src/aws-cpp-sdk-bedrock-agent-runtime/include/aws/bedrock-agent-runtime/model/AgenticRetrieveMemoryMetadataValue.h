/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>A metadata value that a filter expression compares against. Set exactly one
 * member.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveMemoryMetadataValue">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveMemoryMetadataValue {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataValue() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveMemoryMetadataValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A timestamp value in ISO 8601 UTC format.</p>
   */
  inline const Aws::Utils::DateTime& GetDateTimeValue() const { return m_dateTimeValue; }
  inline bool DateTimeValueHasBeenSet() const { return m_dateTimeValueHasBeenSet; }
  template <typename DateTimeValueT = Aws::Utils::DateTime>
  void SetDateTimeValue(DateTimeValueT&& value) {
    m_dateTimeValueHasBeenSet = true;
    m_dateTimeValue = std::forward<DateTimeValueT>(value);
  }
  template <typename DateTimeValueT = Aws::Utils::DateTime>
  AgenticRetrieveMemoryMetadataValue& WithDateTimeValue(DateTimeValueT&& value) {
    SetDateTimeValue(std::forward<DateTimeValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A numeric value.</p>
   */
  inline double GetNumberValue() const { return m_numberValue; }
  inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }
  inline void SetNumberValue(double value) {
    m_numberValueHasBeenSet = true;
    m_numberValue = value;
  }
  inline AgenticRetrieveMemoryMetadataValue& WithNumberValue(double value) {
    SetNumberValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of string values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStringListValue() const { return m_stringListValue; }
  inline bool StringListValueHasBeenSet() const { return m_stringListValueHasBeenSet; }
  template <typename StringListValueT = Aws::Vector<Aws::String>>
  void SetStringListValue(StringListValueT&& value) {
    m_stringListValueHasBeenSet = true;
    m_stringListValue = std::forward<StringListValueT>(value);
  }
  template <typename StringListValueT = Aws::Vector<Aws::String>>
  AgenticRetrieveMemoryMetadataValue& WithStringListValue(StringListValueT&& value) {
    SetStringListValue(std::forward<StringListValueT>(value));
    return *this;
  }
  template <typename StringListValueT = Aws::String>
  AgenticRetrieveMemoryMetadataValue& AddStringListValue(StringListValueT&& value) {
    m_stringListValueHasBeenSet = true;
    m_stringListValue.emplace_back(std::forward<StringListValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string value.</p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  AgenticRetrieveMemoryMetadataValue& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_dateTimeValue{};

  double m_numberValue{0.0};

  Aws::Vector<Aws::String> m_stringListValue;

  Aws::String m_stringValue;
  bool m_dateTimeValueHasBeenSet = false;
  bool m_numberValueHasBeenSet = false;
  bool m_stringListValueHasBeenSet = false;
  bool m_stringValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
