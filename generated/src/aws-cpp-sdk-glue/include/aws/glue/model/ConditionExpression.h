/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Condition expression defined in the Glue Studio data preparation recipe
   * node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConditionExpression">AWS
   * API Reference</a></p>
   */
  class ConditionExpression
  {
  public:
    AWS_GLUE_API ConditionExpression() = default;
    AWS_GLUE_API ConditionExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConditionExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The condition of the condition expression.</p>
     */
    inline const Aws::String& GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    template<typename ConditionT = Aws::String>
    void SetCondition(ConditionT&& value) { m_conditionHasBeenSet = true; m_condition = std::forward<ConditionT>(value); }
    template<typename ConditionT = Aws::String>
    ConditionExpression& WithCondition(ConditionT&& value) { SetCondition(std::forward<ConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the condition expression.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    ConditionExpression& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target column of the condition expressions.</p>
     */
    inline const Aws::String& GetTargetColumn() const { return m_targetColumn; }
    inline bool TargetColumnHasBeenSet() const { return m_targetColumnHasBeenSet; }
    template<typename TargetColumnT = Aws::String>
    void SetTargetColumn(TargetColumnT&& value) { m_targetColumnHasBeenSet = true; m_targetColumn = std::forward<TargetColumnT>(value); }
    template<typename TargetColumnT = Aws::String>
    ConditionExpression& WithTargetColumn(TargetColumnT&& value) { SetTargetColumn(std::forward<TargetColumnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_targetColumn;
    bool m_targetColumnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
