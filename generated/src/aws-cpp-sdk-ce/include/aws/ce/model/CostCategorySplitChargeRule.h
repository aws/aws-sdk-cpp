/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/CostCategorySplitChargeMethod.h>
#include <aws/ce/model/CostCategorySplitChargeRuleParameter.h>
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
   * <p>Use the split charge rule to split the cost of one Cost Category value across
   * several other target values. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategorySplitChargeRule">AWS
   * API Reference</a></p>
   */
  class CostCategorySplitChargeRule
  {
  public:
    AWS_COSTEXPLORER_API CostCategorySplitChargeRule() = default;
    AWS_COSTEXPLORER_API CostCategorySplitChargeRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategorySplitChargeRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Cost Category value that you want to split. That value can't be used as a
     * source or a target in other split charge rules. To indicate uncategorized costs,
     * you can use an empty string as the source.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    CostCategorySplitChargeRule& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Aws::String>>
    CostCategorySplitChargeRule& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Aws::String>
    CostCategorySplitChargeRule& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The method that's used to define how to split your source costs across your
     * targets. </p> <p> <code>Proportional</code> - Allocates charges across your
     * targets based on the proportional weighted cost of each target.</p> <p>
     * <code>Fixed</code> - Allocates charges across your targets based on your defined
     * allocation percentage.</p> <p>&gt;<code>Even</code> - Allocates costs evenly
     * across all targets.</p>
     */
    inline CostCategorySplitChargeMethod GetMethod() const { return m_method; }
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
    inline void SetMethod(CostCategorySplitChargeMethod value) { m_methodHasBeenSet = true; m_method = value; }
    inline CostCategorySplitChargeRule& WithMethod(CostCategorySplitChargeMethod value) { SetMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for a split charge method. This is only required for the
     * <code>FIXED</code> method. </p>
     */
    inline const Aws::Vector<CostCategorySplitChargeRuleParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<CostCategorySplitChargeRuleParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<CostCategorySplitChargeRuleParameter>>
    CostCategorySplitChargeRule& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = CostCategorySplitChargeRuleParameter>
    CostCategorySplitChargeRule& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    CostCategorySplitChargeMethod m_method{CostCategorySplitChargeMethod::NOT_SET};
    bool m_methodHasBeenSet = false;

    Aws::Vector<CostCategorySplitChargeRuleParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
