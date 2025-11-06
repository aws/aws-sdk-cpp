/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/BooleanCondition.h>
#include <aws/connect/model/DateTimeCondition.h>
#include <aws/connect/model/DecimalCondition.h>
#include <aws/connect/model/NumberCondition.h>
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
 * <p>The search criteria to be used to return evaluations.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationSearchCriteria">AWS
 * API Reference</a></p>
 */
class EvaluationSearchCriteria {
 public:
  AWS_CONNECT_API EvaluationSearchCriteria() = default;
  AWS_CONNECT_API EvaluationSearchCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationSearchCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of conditions which would be applied together with an OR
   * condition.</p>
   */
  inline const Aws::Vector<EvaluationSearchCriteria>& GetOrConditions() const { return m_orConditions; }
  inline bool OrConditionsHasBeenSet() const { return m_orConditionsHasBeenSet; }
  template <typename OrConditionsT = Aws::Vector<EvaluationSearchCriteria>>
  void SetOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions = std::forward<OrConditionsT>(value);
  }
  template <typename OrConditionsT = Aws::Vector<EvaluationSearchCriteria>>
  EvaluationSearchCriteria& WithOrConditions(OrConditionsT&& value) {
    SetOrConditions(std::forward<OrConditionsT>(value));
    return *this;
  }
  template <typename OrConditionsT = EvaluationSearchCriteria>
  EvaluationSearchCriteria& AddOrConditions(OrConditionsT&& value) {
    m_orConditionsHasBeenSet = true;
    m_orConditions.emplace_back(std::forward<OrConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of conditions which would be applied together with an AND
   * condition.</p>
   */
  inline const Aws::Vector<EvaluationSearchCriteria>& GetAndConditions() const { return m_andConditions; }
  inline bool AndConditionsHasBeenSet() const { return m_andConditionsHasBeenSet; }
  template <typename AndConditionsT = Aws::Vector<EvaluationSearchCriteria>>
  void SetAndConditions(AndConditionsT&& value) {
    m_andConditionsHasBeenSet = true;
    m_andConditions = std::forward<AndConditionsT>(value);
  }
  template <typename AndConditionsT = Aws::Vector<EvaluationSearchCriteria>>
  EvaluationSearchCriteria& WithAndConditions(AndConditionsT&& value) {
    SetAndConditions(std::forward<AndConditionsT>(value));
    return *this;
  }
  template <typename AndConditionsT = EvaluationSearchCriteria>
  EvaluationSearchCriteria& AddAndConditions(AndConditionsT&& value) {
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
  EvaluationSearchCriteria& WithStringCondition(StringConditionT&& value) {
    SetStringCondition(std::forward<StringConditionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const NumberCondition& GetNumberCondition() const { return m_numberCondition; }
  inline bool NumberConditionHasBeenSet() const { return m_numberConditionHasBeenSet; }
  template <typename NumberConditionT = NumberCondition>
  void SetNumberCondition(NumberConditionT&& value) {
    m_numberConditionHasBeenSet = true;
    m_numberCondition = std::forward<NumberConditionT>(value);
  }
  template <typename NumberConditionT = NumberCondition>
  EvaluationSearchCriteria& WithNumberCondition(NumberConditionT&& value) {
    SetNumberCondition(std::forward<NumberConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The boolean condition search criteria for searching evaluations.</p>
   */
  inline const BooleanCondition& GetBooleanCondition() const { return m_booleanCondition; }
  inline bool BooleanConditionHasBeenSet() const { return m_booleanConditionHasBeenSet; }
  template <typename BooleanConditionT = BooleanCondition>
  void SetBooleanCondition(BooleanConditionT&& value) {
    m_booleanConditionHasBeenSet = true;
    m_booleanCondition = std::forward<BooleanConditionT>(value);
  }
  template <typename BooleanConditionT = BooleanCondition>
  EvaluationSearchCriteria& WithBooleanCondition(BooleanConditionT&& value) {
    SetBooleanCondition(std::forward<BooleanConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The datetime condition search criteria for searching evaluations.</p>
   */
  inline const DateTimeCondition& GetDateTimeCondition() const { return m_dateTimeCondition; }
  inline bool DateTimeConditionHasBeenSet() const { return m_dateTimeConditionHasBeenSet; }
  template <typename DateTimeConditionT = DateTimeCondition>
  void SetDateTimeCondition(DateTimeConditionT&& value) {
    m_dateTimeConditionHasBeenSet = true;
    m_dateTimeCondition = std::forward<DateTimeConditionT>(value);
  }
  template <typename DateTimeConditionT = DateTimeCondition>
  EvaluationSearchCriteria& WithDateTimeCondition(DateTimeConditionT&& value) {
    SetDateTimeCondition(std::forward<DateTimeConditionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The decimal condition search criteria for searching evaluations.</p>
   */
  inline const DecimalCondition& GetDecimalCondition() const { return m_decimalCondition; }
  inline bool DecimalConditionHasBeenSet() const { return m_decimalConditionHasBeenSet; }
  template <typename DecimalConditionT = DecimalCondition>
  void SetDecimalCondition(DecimalConditionT&& value) {
    m_decimalConditionHasBeenSet = true;
    m_decimalCondition = std::forward<DecimalConditionT>(value);
  }
  template <typename DecimalConditionT = DecimalCondition>
  EvaluationSearchCriteria& WithDecimalCondition(DecimalConditionT&& value) {
    SetDecimalCondition(std::forward<DecimalConditionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<EvaluationSearchCriteria> m_orConditions;
  bool m_orConditionsHasBeenSet = false;

  Aws::Vector<EvaluationSearchCriteria> m_andConditions;
  bool m_andConditionsHasBeenSet = false;

  StringCondition m_stringCondition;
  bool m_stringConditionHasBeenSet = false;

  NumberCondition m_numberCondition;
  bool m_numberConditionHasBeenSet = false;

  BooleanCondition m_booleanCondition;
  bool m_booleanConditionHasBeenSet = false;

  DateTimeCondition m_dateTimeCondition;
  bool m_dateTimeConditionHasBeenSet = false;

  DecimalCondition m_decimalCondition;
  bool m_decimalConditionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
