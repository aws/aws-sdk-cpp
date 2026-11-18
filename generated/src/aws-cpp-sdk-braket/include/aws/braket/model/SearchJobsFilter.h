/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/SearchJobsFilterOperator.h>
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
 * <p>A filter used to search for Amazon Braket hybrid jobs. You can combine
 * multiple filters in a single request, except that <code>jobArn</code> cannot be
 * combined with any other filter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/SearchJobsFilter">AWS
 * API Reference</a></p>
 */
class SearchJobsFilter {
 public:
  AWS_BRAKET_API SearchJobsFilter() = default;
  AWS_BRAKET_API SearchJobsFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API SearchJobsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the hybrid job parameter to filter based on. Supported filter
   * names:</p> <p> <code>jobArn</code> — Filter by the job ARN. Supports the
   * <code>EQUAL</code> operator only. Cannot be combined with other filters.</p> <p>
   * <code>jobName</code> — Filter by the job name. Supports the <code>EQUAL</code>
   * operator for exact match, or the <code>CONTAINS</code> operator for substring
   * match. For example, use <code>CONTAINS</code> with a value of
   * <code>my-experiment</code> to find all jobs whose name includes
   * "my-experiment".</p> <p> <code>deviceArn</code> — Filter by the target device.
   * Supports the <code>EQUAL</code> operator only. The value can be a device ARN
   * (for example, <code>arn:aws:braket:us-east-1::device/qpu/ionq/Aria-1</code>) or
   * a local simulator identifier (for example,
   * <code>local:braket/default</code>).</p> <p> <code>createdAt</code> — Filter by
   * the job creation time. Supports the <code>EQUAL</code>, <code>GT</code>,
   * <code>GTE</code>, <code>LT</code>, <code>LTE</code>, and <code>BETWEEN</code>
   * operators. Values must be in RFC 3339 date-time format.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SearchJobsFilter& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values used to filter hybrid jobs based on the filter name and operator.
   * Each filter accepts an array of values. Most filters accept a single value,
   * except <code>createdAt</code> with the <code>BETWEEN</code> operator, which
   * requires exactly two values.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  SearchJobsFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  SearchJobsFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An operator to use for the filter. The supported operators depend on the
   * filter name. See the <code>name</code> parameter for details.</p>
   */
  inline SearchJobsFilterOperator GetOperator() const { return m_operator; }
  inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
  inline void SetOperator(SearchJobsFilterOperator value) {
    m_operatorHasBeenSet = true;
    m_operator = value;
  }
  inline SearchJobsFilter& WithOperator(SearchJobsFilterOperator value) {
    SetOperator(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::Vector<Aws::String> m_values;

  SearchJobsFilterOperator m_operator{SearchJobsFilterOperator::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
  bool m_operatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Braket
}  // namespace Aws
