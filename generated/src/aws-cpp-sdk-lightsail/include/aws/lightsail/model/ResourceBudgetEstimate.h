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
    AWS_LIGHTSAIL_API ResourceBudgetEstimate() = default;
    AWS_LIGHTSAIL_API ResourceBudgetEstimate(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API ResourceBudgetEstimate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The resource name.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    ResourceBudgetEstimate& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of resource the budget will track.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline ResourceBudgetEstimate& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cost estimate for the specified budget.</p>
     */
    inline const Aws::Vector<CostEstimate>& GetCostEstimates() const { return m_costEstimates; }
    inline bool CostEstimatesHasBeenSet() const { return m_costEstimatesHasBeenSet; }
    template<typename CostEstimatesT = Aws::Vector<CostEstimate>>
    void SetCostEstimates(CostEstimatesT&& value) { m_costEstimatesHasBeenSet = true; m_costEstimates = std::forward<CostEstimatesT>(value); }
    template<typename CostEstimatesT = Aws::Vector<CostEstimate>>
    ResourceBudgetEstimate& WithCostEstimates(CostEstimatesT&& value) { SetCostEstimates(std::forward<CostEstimatesT>(value)); return *this;}
    template<typename CostEstimatesT = CostEstimate>
    ResourceBudgetEstimate& AddCostEstimates(CostEstimatesT&& value) { m_costEstimatesHasBeenSet = true; m_costEstimates.emplace_back(std::forward<CostEstimatesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The estimate start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ResourceBudgetEstimate& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimate end time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ResourceBudgetEstimate& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<CostEstimate> m_costEstimates;
    bool m_costEstimatesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
