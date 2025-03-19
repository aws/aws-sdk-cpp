/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ce/model/CostCategoryProcessingStatus.h>
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
   * <p>A reference to a Cost Category containing only enough information to identify
   * the Cost Category.</p> <p>You can use this information to retrieve the full Cost
   * Category information using <code>DescribeCostCategory</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/CostCategoryReference">AWS
   * API Reference</a></p>
   */
  class CostCategoryReference
  {
  public:
    AWS_COSTEXPLORER_API CostCategoryReference() = default;
    AWS_COSTEXPLORER_API CostCategoryReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategoryReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const { return m_costCategoryArn; }
    inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }
    template<typename CostCategoryArnT = Aws::String>
    void SetCostCategoryArn(CostCategoryArnT&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::forward<CostCategoryArnT>(value); }
    template<typename CostCategoryArnT = Aws::String>
    CostCategoryReference& WithCostCategoryArn(CostCategoryArnT&& value) { SetCostCategoryArn(std::forward<CostCategoryArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CostCategoryReference& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cost Category's effective start date.</p>
     */
    inline const Aws::String& GetEffectiveStart() const { return m_effectiveStart; }
    inline bool EffectiveStartHasBeenSet() const { return m_effectiveStartHasBeenSet; }
    template<typename EffectiveStartT = Aws::String>
    void SetEffectiveStart(EffectiveStartT&& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = std::forward<EffectiveStartT>(value); }
    template<typename EffectiveStartT = Aws::String>
    CostCategoryReference& WithEffectiveStart(EffectiveStartT&& value) { SetEffectiveStart(std::forward<EffectiveStartT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Cost Category's effective end date.</p>
     */
    inline const Aws::String& GetEffectiveEnd() const { return m_effectiveEnd; }
    inline bool EffectiveEndHasBeenSet() const { return m_effectiveEndHasBeenSet; }
    template<typename EffectiveEndT = Aws::String>
    void SetEffectiveEnd(EffectiveEndT&& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = std::forward<EffectiveEndT>(value); }
    template<typename EffectiveEndT = Aws::String>
    CostCategoryReference& WithEffectiveEnd(EffectiveEndT&& value) { SetEffectiveEnd(std::forward<EffectiveEndT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rules that are associated with a specific Cost Category. </p>
     */
    inline int GetNumberOfRules() const { return m_numberOfRules; }
    inline bool NumberOfRulesHasBeenSet() const { return m_numberOfRulesHasBeenSet; }
    inline void SetNumberOfRules(int value) { m_numberOfRulesHasBeenSet = true; m_numberOfRules = value; }
    inline CostCategoryReference& WithNumberOfRules(int value) { SetNumberOfRules(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline const Aws::Vector<CostCategoryProcessingStatus>& GetProcessingStatus() const { return m_processingStatus; }
    inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }
    template<typename ProcessingStatusT = Aws::Vector<CostCategoryProcessingStatus>>
    void SetProcessingStatus(ProcessingStatusT&& value) { m_processingStatusHasBeenSet = true; m_processingStatus = std::forward<ProcessingStatusT>(value); }
    template<typename ProcessingStatusT = Aws::Vector<CostCategoryProcessingStatus>>
    CostCategoryReference& WithProcessingStatus(ProcessingStatusT&& value) { SetProcessingStatus(std::forward<ProcessingStatusT>(value)); return *this;}
    template<typename ProcessingStatusT = CostCategoryProcessingStatus>
    CostCategoryReference& AddProcessingStatus(ProcessingStatusT&& value) { m_processingStatusHasBeenSet = true; m_processingStatus.emplace_back(std::forward<ProcessingStatusT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    void SetValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values = std::forward<ValuesT>(value); }
    template<typename ValuesT = Aws::Vector<Aws::String>>
    CostCategoryReference& WithValues(ValuesT&& value) { SetValues(std::forward<ValuesT>(value)); return *this;}
    template<typename ValuesT = Aws::String>
    CostCategoryReference& AddValues(ValuesT&& value) { m_valuesHasBeenSet = true; m_values.emplace_back(std::forward<ValuesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
    template<typename DefaultValueT = Aws::String>
    void SetDefaultValue(DefaultValueT&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::forward<DefaultValueT>(value); }
    template<typename DefaultValueT = Aws::String>
    CostCategoryReference& WithDefaultValue(DefaultValueT&& value) { SetDefaultValue(std::forward<DefaultValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_effectiveStart;
    bool m_effectiveStartHasBeenSet = false;

    Aws::String m_effectiveEnd;
    bool m_effectiveEndHasBeenSet = false;

    int m_numberOfRules{0};
    bool m_numberOfRulesHasBeenSet = false;

    Aws::Vector<CostCategoryProcessingStatus> m_processingStatus;
    bool m_processingStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
