/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/ComparisonOperator.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>Searches for a match within a list of strings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/StringListFilterExpression">AWS
 * API Reference</a></p>
 */
class StringListFilterExpression {
 public:
  AWS_DEADLINE_API StringListFilterExpression() = default;
  AWS_DEADLINE_API StringListFilterExpression(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API StringListFilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The field name to search.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StringListFilterExpression& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of comparison to use for this search. ANY_EQUALS and ALL_NOT_EQUALS
   * are supported.</p>
   */
  inline ComparisonOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(ComparisonOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline StringListFilterExpression& WithOperator(ComparisonOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of string values to search for.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  StringListFilterExpression& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  StringListFilterExpression& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  ComparisonOperator m_operator{ComparisonOperator::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_nameHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
