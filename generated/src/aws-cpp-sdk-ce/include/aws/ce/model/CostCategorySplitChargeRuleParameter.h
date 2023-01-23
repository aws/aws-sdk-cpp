/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/CostCategorySplitChargeRuleParameterType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The parameters for a split charge method. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategorySplitChargeRuleParameter">AWS
   * API Reference</a></p>
   */
  class CostCategorySplitChargeRuleParameter
  {
  public:
    AWS_COSTEXPLORER_API CostCategorySplitChargeRuleParameter();
    AWS_COSTEXPLORER_API CostCategorySplitChargeRuleParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategorySplitChargeRuleParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameter type. </p>
     */
    inline const CostCategorySplitChargeRuleParameterType& GetType() const{ return m_type; }

    /**
     * <p>The parameter type. </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The parameter type. </p>
     */
    inline void SetType(const CostCategorySplitChargeRuleParameterType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The parameter type. </p>
     */
    inline void SetType(CostCategorySplitChargeRuleParameterType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The parameter type. </p>
     */
    inline CostCategorySplitChargeRuleParameter& WithType(const CostCategorySplitChargeRuleParameterType& value) { SetType(value); return *this;}

    /**
     * <p>The parameter type. </p>
     */
    inline CostCategorySplitChargeRuleParameter& WithType(CostCategorySplitChargeRuleParameterType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The parameter values. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>The parameter values. </p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>The parameter values. </p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>The parameter values. </p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>The parameter values. </p>
     */
    inline CostCategorySplitChargeRuleParameter& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>The parameter values. </p>
     */
    inline CostCategorySplitChargeRuleParameter& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>The parameter values. </p>
     */
    inline CostCategorySplitChargeRuleParameter& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>The parameter values. </p>
     */
    inline CostCategorySplitChargeRuleParameter& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>The parameter values. </p>
     */
    inline CostCategorySplitChargeRuleParameter& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    CostCategorySplitChargeRuleParameterType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
