/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/FilterOperation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/FilterValue.h>
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
   * <p>Specifies a filter expression.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/FilterExpression">AWS
   * API Reference</a></p>
   */
  class FilterExpression
  {
  public:
    AWS_GLUE_API FilterExpression();
    AWS_GLUE_API FilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of operation to perform in the expression.</p>
     */
    inline const FilterOperation& GetOperation() const{ return m_operation; }

    /**
     * <p>The type of operation to perform in the expression.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The type of operation to perform in the expression.</p>
     */
    inline void SetOperation(const FilterOperation& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The type of operation to perform in the expression.</p>
     */
    inline void SetOperation(FilterOperation&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The type of operation to perform in the expression.</p>
     */
    inline FilterExpression& WithOperation(const FilterOperation& value) { SetOperation(value); return *this;}

    /**
     * <p>The type of operation to perform in the expression.</p>
     */
    inline FilterExpression& WithOperation(FilterOperation&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>Whether the expression is to be negated.</p>
     */
    inline bool GetNegated() const{ return m_negated; }

    /**
     * <p>Whether the expression is to be negated.</p>
     */
    inline bool NegatedHasBeenSet() const { return m_negatedHasBeenSet; }

    /**
     * <p>Whether the expression is to be negated.</p>
     */
    inline void SetNegated(bool value) { m_negatedHasBeenSet = true; m_negated = value; }

    /**
     * <p>Whether the expression is to be negated.</p>
     */
    inline FilterExpression& WithNegated(bool value) { SetNegated(value); return *this;}


    /**
     * <p>A list of filter values.</p>
     */
    inline const Aws::Vector<FilterValue>& GetValues() const{ return m_values; }

    /**
     * <p>A list of filter values.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of filter values.</p>
     */
    inline void SetValues(const Aws::Vector<FilterValue>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of filter values.</p>
     */
    inline void SetValues(Aws::Vector<FilterValue>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of filter values.</p>
     */
    inline FilterExpression& WithValues(const Aws::Vector<FilterValue>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of filter values.</p>
     */
    inline FilterExpression& WithValues(Aws::Vector<FilterValue>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of filter values.</p>
     */
    inline FilterExpression& AddValues(const FilterValue& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of filter values.</p>
     */
    inline FilterExpression& AddValues(FilterValue&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

  private:

    FilterOperation m_operation;
    bool m_operationHasBeenSet = false;

    bool m_negated;
    bool m_negatedHasBeenSet = false;

    Aws::Vector<FilterValue> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
