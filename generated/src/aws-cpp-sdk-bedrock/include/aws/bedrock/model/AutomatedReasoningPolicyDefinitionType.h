﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionTypeValue.h>
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
namespace Bedrock {
namespace Model {

/**
 * <p>Represents a custom user-defined viarble type in an Automated Reasoning
 * policy. Types are enum-based and provide additional context beyond predefined
 * variable types.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/AutomatedReasoningPolicyDefinitionType">AWS
 * API Reference</a></p>
 */
class AutomatedReasoningPolicyDefinitionType {
 public:
  AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionType() = default;
  AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionType(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API AutomatedReasoningPolicyDefinitionType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the custom type.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  AutomatedReasoningPolicyDefinitionType& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of what the custom type represents.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  AutomatedReasoningPolicyDefinitionType& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The possible values for this enum-based type, each with its own
   * description.</p>
   */
  inline const Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValue>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValue>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValue>>
  AutomatedReasoningPolicyDefinitionType& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = AutomatedReasoningPolicyDefinitionTypeValue>
  AutomatedReasoningPolicyDefinitionType& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::String m_description;
  bool m_descriptionHasBeenSet = false;

  Aws::Vector<AutomatedReasoningPolicyDefinitionTypeValue> m_values;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
