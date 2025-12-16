/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/CommandParameterType.h>
#include <aws/iot/model/CommandParameterValue.h>
#include <aws/iot/model/CommandParameterValueCondition.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>A map of key-value pairs that describe the command.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandParameter">AWS
 * API Reference</a></p>
 */
class CommandParameter {
 public:
  AWS_IOT_API CommandParameter() = default;
  AWS_IOT_API CommandParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API CommandParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of a specific parameter used in a command and command execution.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CommandParameter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the command parameter.</p>
   */
  inline CommandParameterType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(CommandParameterType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CommandParameter& WithType(CommandParameterType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Parameter value that overrides the default value, if set.</p>
   */
  inline const CommandParameterValue& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = CommandParameterValue>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = CommandParameterValue>
  CommandParameter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default value used to describe the command. This is the value assumed by
   * the parameter if no other value is assigned to it.</p>
   */
  inline const CommandParameterValue& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = CommandParameterValue>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = CommandParameterValue>
  CommandParameter& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of conditions that a command parameter value must satisfy to create
   * a command execution.</p>
   */
  inline const Aws::Vector<CommandParameterValueCondition>& GetValueConditions() const { return m_valueConditions; }
  inline bool ValueConditionsHasBeenSet() const { return m_valueConditionsHasBeenSet; }
  template <typename ValueConditionsT = Aws::Vector<CommandParameterValueCondition>>
  void SetValueConditions(ValueConditionsT&& value) {
    m_valueConditionsHasBeenSet = true;
    m_valueConditions = std::forward<ValueConditionsT>(value);
  }
  template <typename ValueConditionsT = Aws::Vector<CommandParameterValueCondition>>
  CommandParameter& WithValueConditions(ValueConditionsT&& value) {
    SetValueConditions(std::forward<ValueConditionsT>(value));
    return *this;
  }
  template <typename ValueConditionsT = CommandParameterValueCondition>
  CommandParameter& AddValueConditions(ValueConditionsT&& value) {
    m_valueConditionsHasBeenSet = true;
    m_valueConditions.emplace_back(std::forward<ValueConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the command parameter.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CommandParameter& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  CommandParameterType m_type{CommandParameterType::NOT_SET};

  CommandParameterValue m_value;

  CommandParameterValue m_defaultValue;

  Aws::Vector<CommandParameterValueCondition> m_valueConditions;

  Aws::String m_description;
  bool m_nameHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
  bool m_valueConditionsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
