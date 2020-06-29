/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/JoinType.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Join instruction.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/JoinInstruction">AWS
   * API Reference</a></p>
   */
  class AWS_QUICKSIGHT_API JoinInstruction
  {
  public:
    JoinInstruction();
    JoinInstruction(Aws::Utils::Json::JsonView jsonValue);
    JoinInstruction& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Left operand.</p>
     */
    inline const Aws::String& GetLeftOperand() const{ return m_leftOperand; }

    /**
     * <p>Left operand.</p>
     */
    inline bool LeftOperandHasBeenSet() const { return m_leftOperandHasBeenSet; }

    /**
     * <p>Left operand.</p>
     */
    inline void SetLeftOperand(const Aws::String& value) { m_leftOperandHasBeenSet = true; m_leftOperand = value; }

    /**
     * <p>Left operand.</p>
     */
    inline void SetLeftOperand(Aws::String&& value) { m_leftOperandHasBeenSet = true; m_leftOperand = std::move(value); }

    /**
     * <p>Left operand.</p>
     */
    inline void SetLeftOperand(const char* value) { m_leftOperandHasBeenSet = true; m_leftOperand.assign(value); }

    /**
     * <p>Left operand.</p>
     */
    inline JoinInstruction& WithLeftOperand(const Aws::String& value) { SetLeftOperand(value); return *this;}

    /**
     * <p>Left operand.</p>
     */
    inline JoinInstruction& WithLeftOperand(Aws::String&& value) { SetLeftOperand(std::move(value)); return *this;}

    /**
     * <p>Left operand.</p>
     */
    inline JoinInstruction& WithLeftOperand(const char* value) { SetLeftOperand(value); return *this;}


    /**
     * <p>Right operand.</p>
     */
    inline const Aws::String& GetRightOperand() const{ return m_rightOperand; }

    /**
     * <p>Right operand.</p>
     */
    inline bool RightOperandHasBeenSet() const { return m_rightOperandHasBeenSet; }

    /**
     * <p>Right operand.</p>
     */
    inline void SetRightOperand(const Aws::String& value) { m_rightOperandHasBeenSet = true; m_rightOperand = value; }

    /**
     * <p>Right operand.</p>
     */
    inline void SetRightOperand(Aws::String&& value) { m_rightOperandHasBeenSet = true; m_rightOperand = std::move(value); }

    /**
     * <p>Right operand.</p>
     */
    inline void SetRightOperand(const char* value) { m_rightOperandHasBeenSet = true; m_rightOperand.assign(value); }

    /**
     * <p>Right operand.</p>
     */
    inline JoinInstruction& WithRightOperand(const Aws::String& value) { SetRightOperand(value); return *this;}

    /**
     * <p>Right operand.</p>
     */
    inline JoinInstruction& WithRightOperand(Aws::String&& value) { SetRightOperand(std::move(value)); return *this;}

    /**
     * <p>Right operand.</p>
     */
    inline JoinInstruction& WithRightOperand(const char* value) { SetRightOperand(value); return *this;}


    /**
     * <p>Type.</p>
     */
    inline const JoinType& GetType() const{ return m_type; }

    /**
     * <p>Type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type.</p>
     */
    inline void SetType(const JoinType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type.</p>
     */
    inline void SetType(JoinType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type.</p>
     */
    inline JoinInstruction& WithType(const JoinType& value) { SetType(value); return *this;}

    /**
     * <p>Type.</p>
     */
    inline JoinInstruction& WithType(JoinType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>On Clause.</p>
     */
    inline const Aws::String& GetOnClause() const{ return m_onClause; }

    /**
     * <p>On Clause.</p>
     */
    inline bool OnClauseHasBeenSet() const { return m_onClauseHasBeenSet; }

    /**
     * <p>On Clause.</p>
     */
    inline void SetOnClause(const Aws::String& value) { m_onClauseHasBeenSet = true; m_onClause = value; }

    /**
     * <p>On Clause.</p>
     */
    inline void SetOnClause(Aws::String&& value) { m_onClauseHasBeenSet = true; m_onClause = std::move(value); }

    /**
     * <p>On Clause.</p>
     */
    inline void SetOnClause(const char* value) { m_onClauseHasBeenSet = true; m_onClause.assign(value); }

    /**
     * <p>On Clause.</p>
     */
    inline JoinInstruction& WithOnClause(const Aws::String& value) { SetOnClause(value); return *this;}

    /**
     * <p>On Clause.</p>
     */
    inline JoinInstruction& WithOnClause(Aws::String&& value) { SetOnClause(std::move(value)); return *this;}

    /**
     * <p>On Clause.</p>
     */
    inline JoinInstruction& WithOnClause(const char* value) { SetOnClause(value); return *this;}

  private:

    Aws::String m_leftOperand;
    bool m_leftOperandHasBeenSet;

    Aws::String m_rightOperand;
    bool m_rightOperandHasBeenSet;

    JoinType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_onClause;
    bool m_onClauseHasBeenSet;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
