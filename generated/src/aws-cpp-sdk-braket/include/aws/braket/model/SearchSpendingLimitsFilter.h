/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/SearchSpendingLimitsFilterOperator.h>
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
namespace Braket {
namespace Model {

/**
 * <p>Specifies filter criteria for searching spending limits. Use filters to
 * narrow down results based on specific attributes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchSpendingLimitsFilter">AWS
 * API Reference</a></p>
 */
class SearchSpendingLimitsFilter {
 public:
  AWS_BRAKET_API SearchSpendingLimitsFilter() = default;
  AWS_BRAKET_API SearchSpendingLimitsFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API SearchSpendingLimitsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the field to filter on. Currently only supports
   * <code>deviceArn</code>.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SearchSpendingLimitsFilter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of values to match against the specified field.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  SearchSpendingLimitsFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  SearchSpendingLimitsFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The comparison operator to use when filtering.</p>
   */
  inline SearchSpendingLimitsFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(SearchSpendingLimitsFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline SearchSpendingLimitsFilter& WithOperator(SearchSpendingLimitsFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::Vector<Aws::String> m_values;
  bool m_valuesHasBeenSet = false;

  SearchSpendingLimitsFilterOperator m_operator{SearchSpendingLimitsFilterOperator::NOT_SET};
  bool m_operatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
