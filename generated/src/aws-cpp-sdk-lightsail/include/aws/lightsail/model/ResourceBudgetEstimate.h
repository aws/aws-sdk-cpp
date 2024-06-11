/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lightsail/model/CostEstimate.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes the estimated cost or usage that a budget tracks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ResourceBudgetEstimate">AWS
   * API Reference</a></p>
   */
  class ResourceBudgetEstimate
  {
  public:
    AWS_LIGHTSAIL_API ResourceBudgetEstimate();
    AWS_LIGHTSAIL_API ResourceBudgetEstimate(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ResourceBudgetEstimate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }
    inline ResourceBudgetEstimate& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}
    inline ResourceBudgetEstimate& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}
    inline ResourceBudgetEstimate& WithResourceName(const char* value) { SetResourceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource the budget will track.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ResourceBudgetEstimate& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline ResourceBudgetEstimate& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline const Aws::Vector<CostEstimate>& GetCostEstimates() const{ return m_costEstimates; }
    inline bool CostEstimatesHasBeenSet() const { return m_costEstimatesHasBeenSet; }
    inline void SetCostEstimates(const Aws::Vector<CostEstimate>& value) { m_costEstimatesHasBeenSet = true; m_costEstimates = value; }
    inline void SetCostEstimates(Aws::Vector<CostEstimate>&& value) { m_costEstimatesHasBeenSet = true; m_costEstimates = std::move(value); }
    inline ResourceBudgetEstimate& WithCostEstimates(const Aws::Vector<CostEstimate>& value) { SetCostEstimates(value); return *this;}
    inline ResourceBudgetEstimate& WithCostEstimates(Aws::Vector<CostEstimate>&& value) { SetCostEstimates(std::move(value)); return *this;}
    inline ResourceBudgetEstimate& AddCostEstimates(const CostEstimate& value) { m_costEstimatesHasBeenSet = true; m_costEstimates.push_back(value); return *this; }
    inline ResourceBudgetEstimate& AddCostEstimates(CostEstimate&& value) { m_costEstimatesHasBeenSet = true; m_costEstimates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The estimate start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ResourceBudgetEstimate& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ResourceBudgetEstimate& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimate end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ResourceBudgetEstimate& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ResourceBudgetEstimate& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<CostEstimate> m_costEstimates;
    bool m_costEstimatesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
