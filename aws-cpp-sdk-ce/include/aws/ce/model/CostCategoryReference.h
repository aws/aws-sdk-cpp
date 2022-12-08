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
    AWS_COSTEXPLORER_API CostCategoryReference();
    AWS_COSTEXPLORER_API CostCategoryReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API CostCategoryReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline const Aws::String& GetCostCategoryArn() const{ return m_costCategoryArn; }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline bool CostCategoryArnHasBeenSet() const { return m_costCategoryArnHasBeenSet; }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const Aws::String& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = value; }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(Aws::String&& value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn = std::move(value); }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline void SetCostCategoryArn(const char* value) { m_costCategoryArnHasBeenSet = true; m_costCategoryArn.assign(value); }

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline CostCategoryReference& WithCostCategoryArn(const Aws::String& value) { SetCostCategoryArn(value); return *this;}

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline CostCategoryReference& WithCostCategoryArn(Aws::String&& value) { SetCostCategoryArn(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for your Cost Category. </p>
     */
    inline CostCategoryReference& WithCostCategoryArn(const char* value) { SetCostCategoryArn(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    
    inline CostCategoryReference& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline CostCategoryReference& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline CostCategoryReference& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Cost Category's effective start date.</p>
     */
    inline const Aws::String& GetEffectiveStart() const{ return m_effectiveStart; }

    /**
     * <p>The Cost Category's effective start date.</p>
     */
    inline bool EffectiveStartHasBeenSet() const { return m_effectiveStartHasBeenSet; }

    /**
     * <p>The Cost Category's effective start date.</p>
     */
    inline void SetEffectiveStart(const Aws::String& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = value; }

    /**
     * <p>The Cost Category's effective start date.</p>
     */
    inline void SetEffectiveStart(Aws::String&& value) { m_effectiveStartHasBeenSet = true; m_effectiveStart = std::move(value); }

    /**
     * <p>The Cost Category's effective start date.</p>
     */
    inline void SetEffectiveStart(const char* value) { m_effectiveStartHasBeenSet = true; m_effectiveStart.assign(value); }

    /**
     * <p>The Cost Category's effective start date.</p>
     */
    inline CostCategoryReference& WithEffectiveStart(const Aws::String& value) { SetEffectiveStart(value); return *this;}

    /**
     * <p>The Cost Category's effective start date.</p>
     */
    inline CostCategoryReference& WithEffectiveStart(Aws::String&& value) { SetEffectiveStart(std::move(value)); return *this;}

    /**
     * <p>The Cost Category's effective start date.</p>
     */
    inline CostCategoryReference& WithEffectiveStart(const char* value) { SetEffectiveStart(value); return *this;}


    /**
     * <p>The Cost Category's effective end date.</p>
     */
    inline const Aws::String& GetEffectiveEnd() const{ return m_effectiveEnd; }

    /**
     * <p>The Cost Category's effective end date.</p>
     */
    inline bool EffectiveEndHasBeenSet() const { return m_effectiveEndHasBeenSet; }

    /**
     * <p>The Cost Category's effective end date.</p>
     */
    inline void SetEffectiveEnd(const Aws::String& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = value; }

    /**
     * <p>The Cost Category's effective end date.</p>
     */
    inline void SetEffectiveEnd(Aws::String&& value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd = std::move(value); }

    /**
     * <p>The Cost Category's effective end date.</p>
     */
    inline void SetEffectiveEnd(const char* value) { m_effectiveEndHasBeenSet = true; m_effectiveEnd.assign(value); }

    /**
     * <p>The Cost Category's effective end date.</p>
     */
    inline CostCategoryReference& WithEffectiveEnd(const Aws::String& value) { SetEffectiveEnd(value); return *this;}

    /**
     * <p>The Cost Category's effective end date.</p>
     */
    inline CostCategoryReference& WithEffectiveEnd(Aws::String&& value) { SetEffectiveEnd(std::move(value)); return *this;}

    /**
     * <p>The Cost Category's effective end date.</p>
     */
    inline CostCategoryReference& WithEffectiveEnd(const char* value) { SetEffectiveEnd(value); return *this;}


    /**
     * <p>The number of rules that are associated with a specific Cost Category. </p>
     */
    inline int GetNumberOfRules() const{ return m_numberOfRules; }

    /**
     * <p>The number of rules that are associated with a specific Cost Category. </p>
     */
    inline bool NumberOfRulesHasBeenSet() const { return m_numberOfRulesHasBeenSet; }

    /**
     * <p>The number of rules that are associated with a specific Cost Category. </p>
     */
    inline void SetNumberOfRules(int value) { m_numberOfRulesHasBeenSet = true; m_numberOfRules = value; }

    /**
     * <p>The number of rules that are associated with a specific Cost Category. </p>
     */
    inline CostCategoryReference& WithNumberOfRules(int value) { SetNumberOfRules(value); return *this;}


    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline const Aws::Vector<CostCategoryProcessingStatus>& GetProcessingStatus() const{ return m_processingStatus; }

    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline bool ProcessingStatusHasBeenSet() const { return m_processingStatusHasBeenSet; }

    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline void SetProcessingStatus(const Aws::Vector<CostCategoryProcessingStatus>& value) { m_processingStatusHasBeenSet = true; m_processingStatus = value; }

    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline void SetProcessingStatus(Aws::Vector<CostCategoryProcessingStatus>&& value) { m_processingStatusHasBeenSet = true; m_processingStatus = std::move(value); }

    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline CostCategoryReference& WithProcessingStatus(const Aws::Vector<CostCategoryProcessingStatus>& value) { SetProcessingStatus(value); return *this;}

    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline CostCategoryReference& WithProcessingStatus(Aws::Vector<CostCategoryProcessingStatus>&& value) { SetProcessingStatus(std::move(value)); return *this;}

    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline CostCategoryReference& AddProcessingStatus(const CostCategoryProcessingStatus& value) { m_processingStatusHasBeenSet = true; m_processingStatus.push_back(value); return *this; }

    /**
     * <p>The list of processing statuses for Cost Management products for a specific
     * cost category. </p>
     */
    inline CostCategoryReference& AddProcessingStatus(CostCategoryProcessingStatus&& value) { m_processingStatusHasBeenSet = true; m_processingStatus.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline CostCategoryReference& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline CostCategoryReference& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline CostCategoryReference& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline CostCategoryReference& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of unique cost category values in a specific cost category. </p>
     */
    inline CostCategoryReference& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }


    
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    
    inline CostCategoryReference& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    
    inline CostCategoryReference& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    
    inline CostCategoryReference& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    Aws::String m_costCategoryArn;
    bool m_costCategoryArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_effectiveStart;
    bool m_effectiveStartHasBeenSet = false;

    Aws::String m_effectiveEnd;
    bool m_effectiveEndHasBeenSet = false;

    int m_numberOfRules;
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
