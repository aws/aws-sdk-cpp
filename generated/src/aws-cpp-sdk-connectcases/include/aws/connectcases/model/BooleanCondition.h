/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/BooleanOperands.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConnectCases
{
namespace Model
{

  /**
   * <p>Boolean condition for a rule. In the Amazon Connect admin website, case rules
   * are known as <i>case field conditions</i>. For more information about case field
   * conditions, see <a
   * href="https://docs.aws.amazon.com/connect/latest/adminguide/case-field-conditions.html">Add
   * case field conditions to a case template</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/BooleanCondition">AWS
   * API Reference</a></p>
   */
  class BooleanCondition
  {
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
    template<typename EqualToT = BooleanOperands>
    void SetEqualTo(EqualToT&& value) { m_equalToHasBeenSet = true; m_equalTo = std::forward<EqualToT>(value); }
    template<typename EqualToT = BooleanOperands>
    BooleanCondition& WithEqualTo(EqualToT&& value) { SetEqualTo(std::forward<EqualToT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tests that operandOne is not equal to operandTwo.</p>
     */
    inline const BooleanOperands& GetNotEqualTo() const { return m_notEqualTo; }
    inline bool NotEqualToHasBeenSet() const { return m_notEqualToHasBeenSet; }
    template<typename NotEqualToT = BooleanOperands>
    void SetNotEqualTo(NotEqualToT&& value) { m_notEqualToHasBeenSet = true; m_notEqualTo = std::forward<NotEqualToT>(value); }
    template<typename NotEqualToT = BooleanOperands>
    BooleanCondition& WithNotEqualTo(NotEqualToT&& value) { SetNotEqualTo(std::forward<NotEqualToT>(value)); return *this;}
    ///@}
  private:

    BooleanOperands m_equalTo;
    bool m_equalToHasBeenSet = false;

    BooleanOperands m_notEqualTo;
    bool m_notEqualToHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCases
} // namespace Aws
