/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace GlueDataBrew
{
namespace Model
{

  /**
   * <p>Represents a structure for defining parameter conditions. Supported
   * conditions are described here: <a
   * href="https://docs.aws.amazon.com/databrew/latest/dg/datasets.multiple-files.html#conditions.for.dynamic.datasets">Supported
   * conditions for dynamic datasets</a> in the <i>Glue DataBrew Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/databrew-2017-07-25/FilterExpression">AWS
   * API Reference</a></p>
   */
  class FilterExpression
  {
  public:
    AWS_GLUEDATABREW_API FilterExpression() = default;
    AWS_GLUEDATABREW_API FilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API FilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The expression which includes condition names followed by substitution
     * variables, possibly grouped and combined with other conditions. For example,
     * "(starts_with :prefix1 or starts_with :prefix2) and (ends_with :suffix1 or
     * ends_with :suffix2)". Substitution variables should start with ':' symbol.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    FilterExpression& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetValuesMap() const { return m_valuesMap; }
    inline bool ValuesMapHasBeenSet() const { return m_valuesMapHasBeenSet; }
    template<typename ValuesMapT = Aws::Map<Aws::String, Aws::String>>
    void SetValuesMap(ValuesMapT&& value) { m_valuesMapHasBeenSet = true; m_valuesMap = std::forward<ValuesMapT>(value); }
    template<typename ValuesMapT = Aws::Map<Aws::String, Aws::String>>
    FilterExpression& WithValuesMap(ValuesMapT&& value) { SetValuesMap(std::forward<ValuesMapT>(value)); return *this;}
    template<typename ValuesMapKeyT = Aws::String, typename ValuesMapValueT = Aws::String>
    FilterExpression& AddValuesMap(ValuesMapKeyT&& key, ValuesMapValueT&& value) {
      m_valuesMapHasBeenSet = true; m_valuesMap.emplace(std::forward<ValuesMapKeyT>(key), std::forward<ValuesMapValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_valuesMap;
    bool m_valuesMapHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
