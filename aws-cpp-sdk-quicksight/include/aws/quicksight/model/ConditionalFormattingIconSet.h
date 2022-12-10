/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ConditionalFormattingIconSetType.h>
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
   * <p>Formatting configuration for icon set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ConditionalFormattingIconSet">AWS
   * API Reference</a></p>
   */
  class ConditionalFormattingIconSet
  {
  public:
    AWS_QUICKSIGHT_API ConditionalFormattingIconSet();
    AWS_QUICKSIGHT_API ConditionalFormattingIconSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ConditionalFormattingIconSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The expression that determines the formatting configuration for the icon
     * set.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The expression that determines the formatting configuration for the icon
     * set.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The expression that determines the formatting configuration for the icon
     * set.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression that determines the formatting configuration for the icon
     * set.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The expression that determines the formatting configuration for the icon
     * set.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The expression that determines the formatting configuration for the icon
     * set.</p>
     */
    inline ConditionalFormattingIconSet& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression that determines the formatting configuration for the icon
     * set.</p>
     */
    inline ConditionalFormattingIconSet& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The expression that determines the formatting configuration for the icon
     * set.</p>
     */
    inline ConditionalFormattingIconSet& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>Determines the icon set type.</p>
     */
    inline const ConditionalFormattingIconSetType& GetIconSetType() const{ return m_iconSetType; }

    /**
     * <p>Determines the icon set type.</p>
     */
    inline bool IconSetTypeHasBeenSet() const { return m_iconSetTypeHasBeenSet; }

    /**
     * <p>Determines the icon set type.</p>
     */
    inline void SetIconSetType(const ConditionalFormattingIconSetType& value) { m_iconSetTypeHasBeenSet = true; m_iconSetType = value; }

    /**
     * <p>Determines the icon set type.</p>
     */
    inline void SetIconSetType(ConditionalFormattingIconSetType&& value) { m_iconSetTypeHasBeenSet = true; m_iconSetType = std::move(value); }

    /**
     * <p>Determines the icon set type.</p>
     */
    inline ConditionalFormattingIconSet& WithIconSetType(const ConditionalFormattingIconSetType& value) { SetIconSetType(value); return *this;}

    /**
     * <p>Determines the icon set type.</p>
     */
    inline ConditionalFormattingIconSet& WithIconSetType(ConditionalFormattingIconSetType&& value) { SetIconSetType(std::move(value)); return *this;}

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    ConditionalFormattingIconSetType m_iconSetType;
    bool m_iconSetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
