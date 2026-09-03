/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PreEvaluationFilter.h>
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
 * <p>The pre-evaluation filters for a rule, that restrict a rule to be applied to
 * only certain resources based on the resource's attributes, such as tags assigned
 * to a contact. The pre-evaluation filters are applied even before rule conditions
 * are evaluated and are used to enforce tag-based-access-control while applying
 * rules.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PreEvaluationFilters">AWS
 * API Reference</a></p>
 */
class PreEvaluationFilters {
 public:
  AWS_CONNECT_API PreEvaluationFilters() = default;
  AWS_CONNECT_API PreEvaluationFilters(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PreEvaluationFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of conditions that the rule evaluates together using AND logic. All
   * conditions must be met for the event to be evaluated by the rule.</p>
   */
  inline const Aws::Vector<PreEvaluationFilter>& GetAndConditions() const { return m_andConditions; }
  inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
  template <typename AndConditionsT = Aws::Vector<PreEvaluationFilter>>
  void SetAndConditions(AndConditionsT&& value) {
    m_andConditionsHasBeenSet = true;
    m_andConditions = std::forward<AndConditionsT>(value);
  }
  template <typename AndConditionsT = Aws::Vector<PreEvaluationFilter>>
  PreEvaluationFilters& WithAndConditions(AndConditionsT&& value) {
    SetAndConditions(std::forward<AndConditionsT>(value));
    return *this;
  }
  template <typename AndConditionsT = PreEvaluationFilter>
  PreEvaluationFilters& AddAndConditions(AndConditionsT&& value) {
    m_andConditionsHasBeenSet = true;
    m_andConditions.emplace_back(std::forward<AndConditionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PreEvaluationFilter> m_andConditions;
  bool m_andConditionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
