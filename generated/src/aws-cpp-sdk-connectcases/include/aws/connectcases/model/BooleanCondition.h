/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/BooleanOperands.h>
#include <aws/core/utils/memory/stl/AWSAllocator.h>

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
class CompoundCondition;

/**
 * <p>Boolean condition for a rule. In the Amazon Connect admin website, case rules
 * are known as <i>case field conditions</i>. For more information about case field
 * conditions, see <a
 * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
 * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BooleanCondition">AWS
 * API Reference</a></p>
 */
class BooleanCondition {
 public:
  AWS_CONNECTCASES_API BooleanCondition() = default;
  AWS_CONNECTCASES_API BooleanCondition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API BooleanCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Tests that operandOne is equal to operandTwo.</p>
   */
  inline const BooleanOperands& GetEqualTo() const { return m_equalTo; }
  inline bool EqualToHasBeenSet() const { return m_equalToHasBeenSet; }
  template <typename EqualToT = BooleanOperands>
  void SetEqualTo(EqualToT&& value) {
    m_equalToHasBeenSet = true;
    m_equalTo = std::forward<EqualToT>(value);
  }
  template <typename EqualToT = BooleanOperands>
  BooleanCondition& WithEqualTo(EqualToT&& value) {
    SetEqualTo(std::forward<EqualToT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tests that operandOne is not equal to operandTwo.</p>
   */
  inline const BooleanOperands& GetNotEqualTo() const { return m_notEqualTo; }
  inline bool NotEqualToHasBeenSet() const { return m_notEqualToHasBeenSet; }
  template <typename NotEqualToT = BooleanOperands>
  void SetNotEqualTo(NotEqualToT&& value) {
    m_notEqualToHasBeenSet = true;
    m_notEqualTo = std::forward<NotEqualToT>(value);
  }
  template <typename NotEqualToT = BooleanOperands>
  BooleanCondition& WithNotEqualTo(NotEqualToT&& value) {
    SetNotEqualTo(std::forward<NotEqualToT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Combines multiple conditions with AND operator. All conditions must be true
   * for the compound condition to be true.</p>
   */
  inline const CompoundCondition& GetAndAll() const { return *m_andAll; }
  inline bool AndAllHasBeenSet() const { return m_andAllHasBeenSet; }
  template <typename AndAllT = CompoundCondition>
  void SetAndAll(AndAllT&& value) {
    m_andAllHasBeenSet = true;
    m_andAll = Aws::MakeShared<CompoundCondition>("BooleanCondition", std::forward<AndAllT>(value));
  }
  template <typename AndAllT = CompoundCondition>
  BooleanCondition& WithAndAll(AndAllT&& value) {
    SetAndAll(std::forward<AndAllT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Combines multiple conditions with OR operator. At least one condition must be
   * true for the compound condition to be true.</p>
   */
  inline const CompoundCondition& GetOrAll() const { return *m_orAll; }
  inline bool OrAllHasBeenSet() const { return m_orAllHasBeenSet; }
  template <typename OrAllT = CompoundCondition>
  void SetOrAll(OrAllT&& value) {
    m_orAllHasBeenSet = true;
    m_orAll = Aws::MakeShared<CompoundCondition>("BooleanCondition", std::forward<OrAllT>(value));
  }
  template <typename OrAllT = CompoundCondition>
  BooleanCondition& WithOrAll(OrAllT&& value) {
    SetOrAll(std::forward<OrAllT>(value));
    return *this;
  }
  ///@}
 private:
  BooleanOperands m_equalTo;

  BooleanOperands m_notEqualTo;

  std::shared_ptr<CompoundCondition> m_andAll;

  std::shared_ptr<CompoundCondition> m_orAll;
  bool m_equalToHasBeenSet = false;
  bool m_notEqualToHasBeenSet = false;
  bool m_andAllHasBeenSet = false;
  bool m_orAllHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
