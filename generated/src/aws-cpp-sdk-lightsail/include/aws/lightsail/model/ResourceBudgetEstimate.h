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


    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The resource name.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The resource name.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The resource name.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The resource name.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The resource name.</p>
     */
    inline ResourceBudgetEstimate& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The resource name.</p>
     */
    inline ResourceBudgetEstimate& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The resource name.</p>
     */
    inline ResourceBudgetEstimate& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The type of resource the budget will track.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of resource the budget will track.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of resource the budget will track.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of resource the budget will track.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of resource the budget will track.</p>
     */
    inline ResourceBudgetEstimate& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of resource the budget will track.</p>
     */
    inline ResourceBudgetEstimate& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline const Aws::Vector<CostEstimate>& GetCostEstimates() const{ return m_costEstimates; }

    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline bool CostEstimatesHasBeenSet() const { return m_costEstimatesHasBeenSet; }

    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline void SetCostEstimates(const Aws::Vector<CostEstimate>& value) { m_costEstimatesHasBeenSet = true; m_costEstimates = value; }

    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline void SetCostEstimates(Aws::Vector<CostEstimate>&& value) { m_costEstimatesHasBeenSet = true; m_costEstimates = std::move(value); }

    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline ResourceBudgetEstimate& WithCostEstimates(const Aws::Vector<CostEstimate>& value) { SetCostEstimates(value); return *this;}

    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline ResourceBudgetEstimate& WithCostEstimates(Aws::Vector<CostEstimate>&& value) { SetCostEstimates(std::move(value)); return *this;}

    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline ResourceBudgetEstimate& AddCostEstimates(const CostEstimate& value) { m_costEstimatesHasBeenSet = true; m_costEstimates.push_back(value); return *this; }

    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline ResourceBudgetEstimate& AddCostEstimates(CostEstimate&& value) { m_costEstimatesHasBeenSet = true; m_costEstimates.push_back(std::move(value)); return *this; }


    /**
     * <p>The estimate start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The estimate start time.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The estimate start time.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The estimate start time.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The estimate start time.</p>
     */
    inline ResourceBudgetEstimate& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The estimate start time.</p>
     */
    inline ResourceBudgetEstimate& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The estimate end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The estimate end time.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The estimate end time.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The estimate end time.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The estimate end time.</p>
     */
    inline ResourceBudgetEstimate& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The estimate end time.</p>
     */
    inline ResourceBudgetEstimate& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

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
