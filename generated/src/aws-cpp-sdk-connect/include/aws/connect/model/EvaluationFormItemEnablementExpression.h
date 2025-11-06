/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormItemEnablementSource.h>
#include <aws/connect/model/EvaluationFormItemEnablementSourceValue.h>
#include <aws/connect/model/EvaluationFormItemSourceValuesComparator.h>
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
 * <p>An expression that defines a basic building block of conditional
 * enablement.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormItemEnablementExpression">AWS
 * API Reference</a></p>
 */
class EvaluationFormItemEnablementExpression {
 public:
  AWS_CONNECT_API EvaluationFormItemEnablementExpression() = default;
  AWS_CONNECT_API EvaluationFormItemEnablementExpression(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormItemEnablementExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A source item of enablement expression.</p>
   */
  inline const EvaluationFormItemEnablementSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = EvaluationFormItemEnablementSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = EvaluationFormItemEnablementSource>
  EvaluationFormItemEnablementExpression& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of values from source item.</p>
   */
  inline const Aws::Vector<EvaluationFormItemEnablementSourceValue>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<EvaluationFormItemEnablementSourceValue>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<EvaluationFormItemEnablementSourceValue>>
  EvaluationFormItemEnablementExpression& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = EvaluationFormItemEnablementSourceValue>
  EvaluationFormItemEnablementExpression& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A comparator to be used against list of values. </p>
   */
  inline EvaluationFormItemSourceValuesComparator GetComparator() const { return m_comparator; }
  inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
  inline void SetComparator(EvaluationFormItemSourceValuesComparator value) {
    m_comparatorHasBeenSet = true;
    m_comparator = value;
  }
  inline EvaluationFormItemEnablementExpression& WithComparator(EvaluationFormItemSourceValuesComparator value) {
    SetComparator(value);
    return *this;
  }
  ///@}
 private:
  EvaluationFormItemEnablementSource m_source;
  bool m_sourceHasBeenSet = false;

  Aws::Vector<EvaluationFormItemEnablementSourceValue> m_values;
  bool m_valuesHasBeenSet = false;

  EvaluationFormItemSourceValuesComparator m_comparator{EvaluationFormItemSourceValuesComparator::NOT_SET};
  bool m_comparatorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
