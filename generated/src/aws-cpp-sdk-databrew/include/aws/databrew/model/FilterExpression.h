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
    AWS_GLUEDATABREW_API FilterExpression();
    AWS_GLUEDATABREW_API FilterExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API FilterExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUEDATABREW_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The expression which includes condition names followed by substitution
     * variables, possibly grouped and combined with other conditions. For example,
     * "(starts_with :prefix1 or starts_with :prefix2) and (ends_with :suffix1 or
     * ends_with :suffix2)". Substitution variables should start with ':' symbol.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The expression which includes condition names followed by substitution
     * variables, possibly grouped and combined with other conditions. For example,
     * "(starts_with :prefix1 or starts_with :prefix2) and (ends_with :suffix1 or
     * ends_with :suffix2)". Substitution variables should start with ':' symbol.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The expression which includes condition names followed by substitution
     * variables, possibly grouped and combined with other conditions. For example,
     * "(starts_with :prefix1 or starts_with :prefix2) and (ends_with :suffix1 or
     * ends_with :suffix2)". Substitution variables should start with ':' symbol.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression which includes condition names followed by substitution
     * variables, possibly grouped and combined with other conditions. For example,
     * "(starts_with :prefix1 or starts_with :prefix2) and (ends_with :suffix1 or
     * ends_with :suffix2)". Substitution variables should start with ':' symbol.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The expression which includes condition names followed by substitution
     * variables, possibly grouped and combined with other conditions. For example,
     * "(starts_with :prefix1 or starts_with :prefix2) and (ends_with :suffix1 or
     * ends_with :suffix2)". Substitution variables should start with ':' symbol.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The expression which includes condition names followed by substitution
     * variables, possibly grouped and combined with other conditions. For example,
     * "(starts_with :prefix1 or starts_with :prefix2) and (ends_with :suffix1 or
     * ends_with :suffix2)". Substitution variables should start with ':' symbol.</p>
     */
    inline FilterExpression& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression which includes condition names followed by substitution
     * variables, possibly grouped and combined with other conditions. For example,
     * "(starts_with :prefix1 or starts_with :prefix2) and (ends_with :suffix1 or
     * ends_with :suffix2)". Substitution variables should start with ':' symbol.</p>
     */
    inline FilterExpression& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The expression which includes condition names followed by substitution
     * variables, possibly grouped and combined with other conditions. For example,
     * "(starts_with :prefix1 or starts_with :prefix2) and (ends_with :suffix1 or
     * ends_with :suffix2)". Substitution variables should start with ':' symbol.</p>
     */
    inline FilterExpression& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetValuesMap() const{ return m_valuesMap; }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline bool ValuesMapHasBeenSet() const { return m_valuesMapHasBeenSet; }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline void SetValuesMap(const Aws::Map<Aws::String, Aws::String>& value) { m_valuesMapHasBeenSet = true; m_valuesMap = value; }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline void SetValuesMap(Aws::Map<Aws::String, Aws::String>&& value) { m_valuesMapHasBeenSet = true; m_valuesMap = std::move(value); }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline FilterExpression& WithValuesMap(const Aws::Map<Aws::String, Aws::String>& value) { SetValuesMap(value); return *this;}

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline FilterExpression& WithValuesMap(Aws::Map<Aws::String, Aws::String>&& value) { SetValuesMap(std::move(value)); return *this;}

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline FilterExpression& AddValuesMap(const Aws::String& key, const Aws::String& value) { m_valuesMapHasBeenSet = true; m_valuesMap.emplace(key, value); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline FilterExpression& AddValuesMap(Aws::String&& key, const Aws::String& value) { m_valuesMapHasBeenSet = true; m_valuesMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline FilterExpression& AddValuesMap(const Aws::String& key, Aws::String&& value) { m_valuesMapHasBeenSet = true; m_valuesMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline FilterExpression& AddValuesMap(Aws::String&& key, Aws::String&& value) { m_valuesMapHasBeenSet = true; m_valuesMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline FilterExpression& AddValuesMap(const char* key, Aws::String&& value) { m_valuesMapHasBeenSet = true; m_valuesMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline FilterExpression& AddValuesMap(Aws::String&& key, const char* value) { m_valuesMapHasBeenSet = true; m_valuesMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>The map of substitution variable names to their values used in this filter
     * expression.</p>
     */
    inline FilterExpression& AddValuesMap(const char* key, const char* value) { m_valuesMapHasBeenSet = true; m_valuesMap.emplace(key, value); return *this; }

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_valuesMap;
    bool m_valuesMapHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
