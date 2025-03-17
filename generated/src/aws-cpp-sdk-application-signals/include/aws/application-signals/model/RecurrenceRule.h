/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>The recurrence rule for the SLO time window exclusion .</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/RecurrenceRule">AWS
   * API Reference</a></p>
   */
  class RecurrenceRule
  {
  public:
    AWS_APPLICATIONSIGNALS_API RecurrenceRule();
    AWS_APPLICATIONSIGNALS_API RecurrenceRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API RecurrenceRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A cron or rate expression that specifies the schedule for the exclusion
     * window.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }
    inline RecurrenceRule& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}
    inline RecurrenceRule& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}
    inline RecurrenceRule& WithExpression(const char* value) { SetExpression(value); return *this;}
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
