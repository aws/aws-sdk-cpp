/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/BooleanCondition.h>
#include <aws/connect/model/StringCondition.h>
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
 * <p>Defines the search criteria for filtering metrics.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/MetricSearchCriteria">AWS
 * API Reference</a></p>
 */
class MetricSearchCriteria {
 public:
  AWS_CONNECT_API MetricSearchCriteria() = default;
  AWS_CONNECT_API MetricSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API MetricSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of conditions to be met, where at least one condition must be
   * satisfied.</p>
   */
  inline const Aws::Vector<MetricSearchCriteria>& GetOrConditions() const { return m_orConditions; }
  inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
  template <typename OrConditionsT = Aws::Vector<MetricSearchCriteria>>
  void SetOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions = std::forward<OrConditionsT>(value);
  }
  template <typename OrConditionsT = Aws::Vector<MetricSearchCriteria>>
  MetricSearchCriteria& WithOrConditions(OrConditionsT&& value) {
    SetOrConditions(std::forward<OrConditionsT>(value));
    return *this;
  }
  template <typename OrConditionsT = MetricSearchCriteria>
  MetricSearchCriteria& AddOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions.emplace_back(std::forward<OrConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of conditions that must all be satisfied.</p>
   */
  inline const Aws::Vector<MetricSearchCriteria>& GetAndConditions() const { return m_andConditions; }
  inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
  template <typename AndConditionsT = Aws::Vector<MetricSearchCriteria>>
  void SetAndConditions(AndConditionsT&& value) {
    m_andConditionsHasBeenSet = true;
    m_andConditions = std::forward<AndConditionsT>(value);
  }
  template <typename AndConditionsT = Aws::Vector<MetricSearchCriteria>>
  MetricSearchCriteria& WithAndConditions(AndConditionsT&& value) {
    SetAndConditions(std::forward<AndConditionsT>(value));
    return *this;
  }
  template <typename AndConditionsT = MetricSearchCriteria>
  MetricSearchCriteria& AddAndConditions(AndConditionsT&& value) {
    m_andConditionsHasBeenSet = true;
    m_andConditions.emplace_back(std::forward<AndConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const StringCondition& GetStringCondition() const { return m_stringCondition; }
  inline bool StringConditionHasBeenSet() const { return m_stringConditionHasBeenSet; }
  template <typename StringConditionT = StringCondition>
  void SetStringCondition(StringConditionT&& value) {
    m_stringConditionHasBeenSet = true;
    m_stringCondition = std::forward<StringConditionT>(value);
  }
  template <typename StringConditionT = StringCondition>
  MetricSearchCriteria& WithStringCondition(StringConditionT&& value) {
    SetStringCondition(std::forward<StringConditionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const BooleanCondition& GetBooleanCondition() const { return m_booleanCondition; }
  inline bool BooleanConditionHasBeenSet() const { return m_booleanConditionHasBeenSet; }
  template <typename BooleanConditionT = BooleanCondition>
  void SetBooleanCondition(BooleanConditionT&& value) {
    m_booleanConditionHasBeenSet = true;
    m_booleanCondition = std::forward<BooleanConditionT>(value);
  }
  template <typename BooleanConditionT = BooleanCondition>
  MetricSearchCriteria& WithBooleanCondition(BooleanConditionT&& value) {
    SetBooleanCondition(std::forward<BooleanConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<MetricSearchCriteria> m_orConditions;

  Aws::Vector<MetricSearchCriteria> m_andConditions;

  StringCondition m_stringCondition;

  BooleanCondition m_booleanCondition;
  bool m_orConditionsHasBeenSet = false;
  bool m_andConditionsHasBeenSet = false;
  bool m_stringConditionHasBeenSet = false;
  bool m_booleanConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
