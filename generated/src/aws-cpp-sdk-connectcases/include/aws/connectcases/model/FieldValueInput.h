/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/FieldIdentifierUnion.h>
#include <aws/connectcases/model/FieldValueUnion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>A field and the value to set for it.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/FieldValueInput">AWS
 * API Reference</a></p>
 */
class FieldValueInput {
 public:
  AWS_CONNECTCASES_API FieldValueInput() = default;
  AWS_CONNECTCASES_API FieldValueInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API FieldValueInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field to update, identified by field ID or field name.</p>
   */
  inline const FieldIdentifierUnion& GetFieldIdentifier() const { return m_fieldIdentifier; }
  inline bool FieldIdentifierHasBeenSet() const { return m_fieldIdentifierHasBeenSet; }
  template <typename FieldIdentifierT = FieldIdentifierUnion>
  void SetFieldIdentifier(FieldIdentifierT&& value) {
    m_fieldIdentifierHasBeenSet = true;
    m_fieldIdentifier = std::forward<FieldIdentifierT>(value);
  }
  template <typename FieldIdentifierT = FieldIdentifierUnion>
  FieldValueInput& WithFieldIdentifier(FieldIdentifierT&& value) {
    SetFieldIdentifier(std::forward<FieldIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to set for the field.</p>
   */
  inline const FieldValueUnion& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = FieldValueUnion>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = FieldValueUnion>
  FieldValueInput& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  FieldIdentifierUnion m_fieldIdentifier;

  FieldValueUnion m_value;
  bool m_fieldIdentifierHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
