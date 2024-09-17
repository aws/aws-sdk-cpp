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
    AWS_GLUE_API ConditionExpression();
    AWS_GLUE_API ConditionExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API ConditionExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The condition of the condition expression.</p>
     */
    inline const Aws::String& GetCondition() const{ return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(const Aws::String& value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline void SetCondition(Aws::String&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }
    inline void SetCondition(const char* value) { m_conditionHasBeenSet = true; m_condition.assign(value); }
    inline ConditionExpression& WithCondition(const Aws::String& value) { SetCondition(value); return *this;}
    inline ConditionExpression& WithCondition(Aws::String&& value) { SetCondition(std::move(value)); return *this;}
    inline ConditionExpression& WithCondition(const char* value) { SetCondition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the condition expression.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline ConditionExpression& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline ConditionExpression& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline ConditionExpression& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target column of the condition expressions.</p>
     */
    inline const Aws::String& GetTargetColumn() const{ return m_targetColumn; }
    inline bool TargetColumnHasBeenSet() const { return m_targetColumnHasBeenSet; }
    inline void SetTargetColumn(const Aws::String& value) { m_targetColumnHasBeenSet = true; m_targetColumn = value; }
    inline void SetTargetColumn(Aws::String&& value) { m_targetColumnHasBeenSet = true; m_targetColumn = std::move(value); }
    inline void SetTargetColumn(const char* value) { m_targetColumnHasBeenSet = true; m_targetColumn.assign(value); }
    inline ConditionExpression& WithTargetColumn(const Aws::String& value) { SetTargetColumn(value); return *this;}
    inline ConditionExpression& WithTargetColumn(Aws::String&& value) { SetTargetColumn(std::move(value)); return *this;}
    inline ConditionExpression& WithTargetColumn(const char* value) { SetTargetColumn(value); return *this;}
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
