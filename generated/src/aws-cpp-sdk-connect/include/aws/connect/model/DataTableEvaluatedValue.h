/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/DataTableAttributeValueType.h>
#include <aws/connect/model/PrimaryValue.h>
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
namespace Connect {
namespace Model {

/**
 * <p>A data table evaluated value.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/DataTableEvaluatedValue">AWS
 * API Reference</a></p>
 */
class DataTableEvaluatedValue {
 public:
  AWS_CONNECT_API DataTableEvaluatedValue() = default;
  AWS_CONNECT_API DataTableEvaluatedValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API DataTableEvaluatedValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value's record ID.</p>
   */
  inline const Aws::String& GetRecordId() const { return m_recordId; }
  inline bool RecordIdHasBeenSet() const { return m_recordIdHasBeenSet; }
  template <typename RecordIdT = Aws::String>
  void SetRecordId(RecordIdT&& value) {
    m_recordIdHasBeenSet = true;
    m_recordId = std::forward<RecordIdT>(value);
  }
  template <typename RecordIdT = Aws::String>
  DataTableEvaluatedValue& WithRecordId(RecordIdT&& value) {
    SetRecordId(std::forward<RecordIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value's primary values.</p>
   */
  inline const Aws::Vector<PrimaryValue>& GetPrimaryValues() const { return m_primaryValues; }
  inline bool PrimaryValuesHasBeenSet() const { return m_primaryValuesHasBeenSet; }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  void SetPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues = std::forward<PrimaryValuesT>(value);
  }
  template <typename PrimaryValuesT = Aws::Vector<PrimaryValue>>
  DataTableEvaluatedValue& WithPrimaryValues(PrimaryValuesT&& value) {
    SetPrimaryValues(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  template <typename PrimaryValuesT = PrimaryValue>
  DataTableEvaluatedValue& AddPrimaryValues(PrimaryValuesT&& value) {
    m_primaryValuesHasBeenSet = true;
    m_primaryValues.emplace_back(std::forward<PrimaryValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value's attribute name.</p>
   */
  inline const Aws::String& GetAttributeName() const { return m_attributeName; }
  inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
  template <typename AttributeNameT = Aws::String>
  void SetAttributeName(AttributeNameT&& value) {
    m_attributeNameHasBeenSet = true;
    m_attributeName = std::forward<AttributeNameT>(value);
  }
  template <typename AttributeNameT = Aws::String>
  DataTableEvaluatedValue& WithAttributeName(AttributeNameT&& value) {
    SetAttributeName(std::forward<AttributeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value's value type.</p>
   */
  inline DataTableAttributeValueType GetValueType() const { return m_valueType; }
  inline bool ValueTypeHasBeenSet() const { return m_valueTypeHasBeenSet; }
  inline void SetValueType(DataTableAttributeValueType value) {
    m_valueTypeHasBeenSet = true;
    m_valueType = value;
  }
  inline DataTableEvaluatedValue& WithValueType(DataTableAttributeValueType value) {
    SetValueType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value's found.</p>
   */
  inline bool GetFound() const { return m_found; }
  inline bool FoundHasBeenSet() const { return m_foundHasBeenSet; }
  inline void SetFound(bool value) {
    m_foundHasBeenSet = true;
    m_found = value;
  }
  inline DataTableEvaluatedValue& WithFound(bool value) {
    SetFound(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value's error.</p>
   */
  inline bool GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  inline void SetError(bool value) {
    m_errorHasBeenSet = true;
    m_error = value;
  }
  inline DataTableEvaluatedValue& WithError(bool value) {
    SetError(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value's evaluated value.</p>
   */
  inline const Aws::String& GetEvaluatedValue() const { return m_evaluatedValue; }
  inline bool EvaluatedValueHasBeenSet() const { return m_evaluatedValueHasBeenSet; }
  template <typename EvaluatedValueT = Aws::String>
  void SetEvaluatedValue(EvaluatedValueT&& value) {
    m_evaluatedValueHasBeenSet = true;
    m_evaluatedValue = std::forward<EvaluatedValueT>(value);
  }
  template <typename EvaluatedValueT = Aws::String>
  DataTableEvaluatedValue& WithEvaluatedValue(EvaluatedValueT&& value) {
    SetEvaluatedValue(std::forward<EvaluatedValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recordId;

  Aws::Vector<PrimaryValue> m_primaryValues;

  Aws::String m_attributeName;

  DataTableAttributeValueType m_valueType{DataTableAttributeValueType::NOT_SET};

  bool m_found{false};

  bool m_error{false};

  Aws::String m_evaluatedValue;
  bool m_recordIdHasBeenSet = false;
  bool m_primaryValuesHasBeenSet = false;
  bool m_attributeNameHasBeenSet = false;
  bool m_valueTypeHasBeenSet = false;
  bool m_foundHasBeenSet = false;
  bool m_errorHasBeenSet = false;
  bool m_evaluatedValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
