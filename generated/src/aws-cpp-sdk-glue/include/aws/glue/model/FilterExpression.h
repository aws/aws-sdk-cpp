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
    AWS_GLUE_API FilterExpression() = default;
    AWS_GLUE_API FilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API FilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of operation to perform in the expression.</p>
     */
    inline FilterOperation GetOperation() const { return m_operation; }
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
    inline void SetOperation(FilterOperation value) { m_operationHasBeenSet = true; m_operation = value; }
    inline FilterExpression& WithOperation(FilterOperation value) { SetOperation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the expression is to be negated.</p>
     */
    inline bool GetNegated() const { return m_negated; }
    inline bool NegatedHasBeenSet() const { return m_negatedHasBeenSet; }
    inline void SetNegated(bool value) { m_negatedHasBeenSet = true; m_negated = value; }
    inline FilterExpression& WithNegated(bool value) { SetNegated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of filter values.</p>
     */
    inline const Aws::Vector<FilterValue>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<FilterValue>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<FilterValue>>
    FilterExpression& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = FilterValue>
    FilterExpression& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    FilterOperation m_operation{FilterOperation::NOT_SET};
    bool m_operationHasBeenSet = false;

    bool m_negated{false};
    bool m_negatedHasBeenSet = false;

    Aws::Vector<FilterValue> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
