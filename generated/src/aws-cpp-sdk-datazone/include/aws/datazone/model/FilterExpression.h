/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/FilterExpressionType.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>A filter expression in Amazon DataZone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/FilterExpression">AWS
   * API Reference</a></p>
   */
  class FilterExpression
  {
  public:
    AWS_DATAZONE_API FilterExpression();
    AWS_DATAZONE_API FilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API FilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The search filter expression.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The search filter expression.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The search filter expression.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The search filter expression.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The search filter expression.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The search filter expression.</p>
     */
    inline FilterExpression& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The search filter expression.</p>
     */
    inline FilterExpression& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The search filter expression.</p>
     */
    inline FilterExpression& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>The search filter explresison type.</p>
     */
    inline const FilterExpressionType& GetType() const{ return m_type; }

    /**
     * <p>The search filter explresison type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The search filter explresison type.</p>
     */
    inline void SetType(const FilterExpressionType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The search filter explresison type.</p>
     */
    inline void SetType(FilterExpressionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The search filter explresison type.</p>
     */
    inline FilterExpression& WithType(const FilterExpressionType& value) { SetType(value); return *this;}

    /**
     * <p>The search filter explresison type.</p>
     */
    inline FilterExpression& WithType(FilterExpressionType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    FilterExpressionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
