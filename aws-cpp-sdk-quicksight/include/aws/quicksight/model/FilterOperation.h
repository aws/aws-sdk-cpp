/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A transform operation that filters rows based on a condition.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FilterOperation">AWS
   * API Reference</a></p>
   */
  class FilterOperation
  {
  public:
    AWS_QUICKSIGHT_API FilterOperation();
    AWS_QUICKSIGHT_API FilterOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FilterOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An expression that must evaluate to a Boolean value. Rows for which the
     * expression evaluates to true are kept in the dataset.</p>
     */
    inline const Aws::String& GetConditionExpression() const{ return m_conditionExpression; }

    /**
     * <p>An expression that must evaluate to a Boolean value. Rows for which the
     * expression evaluates to true are kept in the dataset.</p>
     */
    inline bool ConditionExpressionHasBeenSet() const { return m_conditionExpressionHasBeenSet; }

    /**
     * <p>An expression that must evaluate to a Boolean value. Rows for which the
     * expression evaluates to true are kept in the dataset.</p>
     */
    inline void SetConditionExpression(const Aws::String& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = value; }

    /**
     * <p>An expression that must evaluate to a Boolean value. Rows for which the
     * expression evaluates to true are kept in the dataset.</p>
     */
    inline void SetConditionExpression(Aws::String&& value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression = std::move(value); }

    /**
     * <p>An expression that must evaluate to a Boolean value. Rows for which the
     * expression evaluates to true are kept in the dataset.</p>
     */
    inline void SetConditionExpression(const char* value) { m_conditionExpressionHasBeenSet = true; m_conditionExpression.assign(value); }

    /**
     * <p>An expression that must evaluate to a Boolean value. Rows for which the
     * expression evaluates to true are kept in the dataset.</p>
     */
    inline FilterOperation& WithConditionExpression(const Aws::String& value) { SetConditionExpression(value); return *this;}

    /**
     * <p>An expression that must evaluate to a Boolean value. Rows for which the
     * expression evaluates to true are kept in the dataset.</p>
     */
    inline FilterOperation& WithConditionExpression(Aws::String&& value) { SetConditionExpression(std::move(value)); return *this;}

    /**
     * <p>An expression that must evaluate to a Boolean value. Rows for which the
     * expression evaluates to true are kept in the dataset.</p>
     */
    inline FilterOperation& WithConditionExpression(const char* value) { SetConditionExpression(value); return *this;}

  private:

    Aws::String m_conditionExpression;
    bool m_conditionExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
