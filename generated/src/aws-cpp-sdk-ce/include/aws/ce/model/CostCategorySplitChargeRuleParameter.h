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
    AWS_COSTEXPLORER_API CostCategorySplitChargeRuleParameter() = default;
    AWS_COSTEXPLORER_API CostCategorySplitChargeRuleParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategorySplitChargeRuleParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameter type. </p>
     */
    inline CostCategorySplitChargeRuleParameterType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CostCategorySplitChargeRuleParameterType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CostCategorySplitChargeRuleParameter& WithType(CostCategorySplitChargeRuleParameterType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameter values. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    CostCategorySplitChargeRuleParameter& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    CostCategorySplitChargeRuleParameter& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}
  private:

    CostCategorySplitChargeRuleParameterType m_type{CostCategorySplitChargeRuleParameterType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
