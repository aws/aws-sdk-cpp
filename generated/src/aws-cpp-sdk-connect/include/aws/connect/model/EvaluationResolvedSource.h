/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormItemEnablementSource.h>
#include <aws/connect/model/EvaluationFormItemEnablementSourceValue.h>
#include <aws/connect/model/EvaluationItemResolutionStatus.h>
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
 * <p>The resolved value of an external source that is used by the conditions in an
 * evaluation form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationResolvedSource">AWS
 * API Reference</a></p>
 */
class EvaluationResolvedSource {
 public:
  AWS_CONNECT_API EvaluationResolvedSource() = default;
  AWS_CONNECT_API EvaluationResolvedSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationResolvedSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The external source, such as contact data, evaluation metadata, form
   * metadata, or AI metrics.</p>
   */
  inline const EvaluationFormItemEnablementSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = EvaluationFormItemEnablementSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = EvaluationFormItemEnablementSource>
  EvaluationResolvedSource& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of resolving the source. Valid values:</p> <ul> <li> <p>
   * <code>PENDING</code> - The source has not been resolved yet.</p> </li> <li> <p>
   * <code>RESOLVED</code> - The source has been resolved.</p> </li> <li> <p>
   * <code>FAILED</code> - The source could not be resolved.</p> </li> </ul>
   */
  inline EvaluationItemResolutionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EvaluationItemResolutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EvaluationResolvedSource& WithStatus(EvaluationItemResolutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resolved values of the source. Present when <code>Status</code> is
   * <code>RESOLVED</code>. Contains one value for a single-valued source, any number
   * of values for a multi-valued source, and no values when the source is not
   * present on the contact.</p>
   */
  inline const Aws::Vector<EvaluationFormItemEnablementSourceValue>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<EvaluationFormItemEnablementSourceValue>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<EvaluationFormItemEnablementSourceValue>>
  EvaluationResolvedSource& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = EvaluationFormItemEnablementSourceValue>
  EvaluationResolvedSource& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormItemEnablementSource m_source;

  EvaluationItemResolutionStatus m_status{EvaluationItemResolutionStatus::NOT_SET};

  Aws::Vector<EvaluationFormItemEnablementSourceValue> m_values;
  bool m_sourceHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
