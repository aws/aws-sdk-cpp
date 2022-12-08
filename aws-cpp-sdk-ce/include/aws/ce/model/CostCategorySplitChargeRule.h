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
    AWS_COSTEXPLORER_API CostCategorySplitChargeRule();
    AWS_COSTEXPLORER_API CostCategorySplitChargeRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategorySplitChargeRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Cost Category value that you want to split. That value can't be used as a
     * source or a target in other split charge rules. To indicate uncategorized costs,
     * you can use an empty string as the source.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The Cost Category value that you want to split. That value can't be used as a
     * source or a target in other split charge rules. To indicate uncategorized costs,
     * you can use an empty string as the source.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The Cost Category value that you want to split. That value can't be used as a
     * source or a target in other split charge rules. To indicate uncategorized costs,
     * you can use an empty string as the source.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The Cost Category value that you want to split. That value can't be used as a
     * source or a target in other split charge rules. To indicate uncategorized costs,
     * you can use an empty string as the source.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The Cost Category value that you want to split. That value can't be used as a
     * source or a target in other split charge rules. To indicate uncategorized costs,
     * you can use an empty string as the source.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The Cost Category value that you want to split. That value can't be used as a
     * source or a target in other split charge rules. To indicate uncategorized costs,
     * you can use an empty string as the source.</p>
     */
    inline CostCategorySplitChargeRule& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The Cost Category value that you want to split. That value can't be used as a
     * source or a target in other split charge rules. To indicate uncategorized costs,
     * you can use an empty string as the source.</p>
     */
    inline CostCategorySplitChargeRule& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The Cost Category value that you want to split. That value can't be used as a
     * source or a target in other split charge rules. To indicate uncategorized costs,
     * you can use an empty string as the source.</p>
     */
    inline CostCategorySplitChargeRule& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline const Aws::Vector<Aws::String>& GetTargets() const{ return m_targets; }

    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }

    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline void SetTargets(const Aws::Vector<Aws::String>& value) { m_targetsHasBeenSet = true; m_targets = value; }

    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline void SetTargets(Aws::Vector<Aws::String>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }

    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline CostCategorySplitChargeRule& WithTargets(const Aws::Vector<Aws::String>& value) { SetTargets(value); return *this;}

    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline CostCategorySplitChargeRule& WithTargets(Aws::Vector<Aws::String>&& value) { SetTargets(std::move(value)); return *this;}

    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline CostCategorySplitChargeRule& AddTargets(const Aws::String& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }

    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline CostCategorySplitChargeRule& AddTargets(Aws::String&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }

    /**
     * <p>The Cost Category values that you want to split costs across. These values
     * can't be used as a source in other split charge rules. </p>
     */
    inline CostCategorySplitChargeRule& AddTargets(const char* value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }


    /**
     * <p>The method that's used to define how to split your source costs across your
     * targets. </p> <p> <code>Proportional</code> - Allocates charges across your
     * targets based on the proportional weighted cost of each target.</p> <p>
     * <code>Fixed</code> - Allocates charges across your targets based on your defined
     * allocation percentage.</p> <p>&gt;<code>Even</code> - Allocates costs evenly
     * across all targets.</p>
     */
    inline const CostCategorySplitChargeMethod& GetMethod() const{ return m_method; }

    /**
     * <p>The method that's used to define how to split your source costs across your
     * targets. </p> <p> <code>Proportional</code> - Allocates charges across your
     * targets based on the proportional weighted cost of each target.</p> <p>
     * <code>Fixed</code> - Allocates charges across your targets based on your defined
     * allocation percentage.</p> <p>&gt;<code>Even</code> - Allocates costs evenly
     * across all targets.</p>
     */
    inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }

    /**
     * <p>The method that's used to define how to split your source costs across your
     * targets. </p> <p> <code>Proportional</code> - Allocates charges across your
     * targets based on the proportional weighted cost of each target.</p> <p>
     * <code>Fixed</code> - Allocates charges across your targets based on your defined
     * allocation percentage.</p> <p>&gt;<code>Even</code> - Allocates costs evenly
     * across all targets.</p>
     */
    inline void SetMethod(const CostCategorySplitChargeMethod& value) { m_methodHasBeenSet = true; m_method = value; }

    /**
     * <p>The method that's used to define how to split your source costs across your
     * targets. </p> <p> <code>Proportional</code> - Allocates charges across your
     * targets based on the proportional weighted cost of each target.</p> <p>
     * <code>Fixed</code> - Allocates charges across your targets based on your defined
     * allocation percentage.</p> <p>&gt;<code>Even</code> - Allocates costs evenly
     * across all targets.</p>
     */
    inline void SetMethod(CostCategorySplitChargeMethod&& value) { m_methodHasBeenSet = true; m_method = std::move(value); }

    /**
     * <p>The method that's used to define how to split your source costs across your
     * targets. </p> <p> <code>Proportional</code> - Allocates charges across your
     * targets based on the proportional weighted cost of each target.</p> <p>
     * <code>Fixed</code> - Allocates charges across your targets based on your defined
     * allocation percentage.</p> <p>&gt;<code>Even</code> - Allocates costs evenly
     * across all targets.</p>
     */
    inline CostCategorySplitChargeRule& WithMethod(const CostCategorySplitChargeMethod& value) { SetMethod(value); return *this;}

    /**
     * <p>The method that's used to define how to split your source costs across your
     * targets. </p> <p> <code>Proportional</code> - Allocates charges across your
     * targets based on the proportional weighted cost of each target.</p> <p>
     * <code>Fixed</code> - Allocates charges across your targets based on your defined
     * allocation percentage.</p> <p>&gt;<code>Even</code> - Allocates costs evenly
     * across all targets.</p>
     */
    inline CostCategorySplitChargeRule& WithMethod(CostCategorySplitChargeMethod&& value) { SetMethod(std::move(value)); return *this;}


    /**
     * <p>The parameters for a split charge method. This is only required for the
     * <code>FIXED</code> method. </p>
     */
    inline const Aws::Vector<CostCategorySplitChargeRuleParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters for a split charge method. This is only required for the
     * <code>FIXED</code> method. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters for a split charge method. This is only required for the
     * <code>FIXED</code> method. </p>
     */
    inline void SetParameters(const Aws::Vector<CostCategorySplitChargeRuleParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters for a split charge method. This is only required for the
     * <code>FIXED</code> method. </p>
     */
    inline void SetParameters(Aws::Vector<CostCategorySplitChargeRuleParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters for a split charge method. This is only required for the
     * <code>FIXED</code> method. </p>
     */
    inline CostCategorySplitChargeRule& WithParameters(const Aws::Vector<CostCategorySplitChargeRuleParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters for a split charge method. This is only required for the
     * <code>FIXED</code> method. </p>
     */
    inline CostCategorySplitChargeRule& WithParameters(Aws::Vector<CostCategorySplitChargeRuleParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters for a split charge method. This is only required for the
     * <code>FIXED</code> method. </p>
     */
    inline CostCategorySplitChargeRule& AddParameters(const CostCategorySplitChargeRuleParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The parameters for a split charge method. This is only required for the
     * <code>FIXED</code> method. </p>
     */
    inline CostCategorySplitChargeRule& AddParameters(CostCategorySplitChargeRuleParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_targets;
    bool m_targetsHasBeenSet = false;

    CostCategorySplitChargeMethod m_method;
    bool m_methodHasBeenSet = false;

    Aws::Vector<CostCategorySplitChargeRuleParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
