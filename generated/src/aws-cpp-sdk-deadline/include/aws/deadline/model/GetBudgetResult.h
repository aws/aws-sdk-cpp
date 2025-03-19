/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/UsageTrackingResource.h>
#include <aws/deadline/model/BudgetStatus.h>
#include <aws/deadline/model/ConsumedUsages.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/BudgetSchedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/ResponseBudgetAction.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{
  class GetBudgetResult
  {
  public:
    AWS_DEADLINE_API GetBudgetResult() = default;
    AWS_DEADLINE_API GetBudgetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetBudgetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The budget ID.</p>
     */
    inline const Aws::String& GetBudgetId() const { return m_budgetId; }
    template<typename BudgetIdT = Aws::String>
    void SetBudgetId(BudgetIdT&& value) { m_budgetIdHasBeenSet = true; m_budgetId = std::forward<BudgetIdT>(value); }
    template<typename BudgetIdT = Aws::String>
    GetBudgetResult& WithBudgetId(BudgetIdT&& value) { SetBudgetId(std::forward<BudgetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that the budget is tracking usage for.</p>
     */
    inline const UsageTrackingResource& GetUsageTrackingResource() const { return m_usageTrackingResource; }
    template<typename UsageTrackingResourceT = UsageTrackingResource>
    void SetUsageTrackingResource(UsageTrackingResourceT&& value) { m_usageTrackingResourceHasBeenSet = true; m_usageTrackingResource = std::forward<UsageTrackingResourceT>(value); }
    template<typename UsageTrackingResourceT = UsageTrackingResource>
    GetBudgetResult& WithUsageTrackingResource(UsageTrackingResourceT&& value) { SetUsageTrackingResource(std::forward<UsageTrackingResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–Get a budget
     * being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–Get an inactive
     * budget. This can include expired, canceled, or deleted statuses.</p> </li> </ul>
     */
    inline BudgetStatus GetStatus() const { return m_status; }
    inline void SetStatus(BudgetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetBudgetResult& WithStatus(BudgetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the budget.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    GetBudgetResult& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the budget.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetBudgetResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The consumed usage limit for the budget.</p>
     */
    inline double GetApproximateDollarLimit() const { return m_approximateDollarLimit; }
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimitHasBeenSet = true; m_approximateDollarLimit = value; }
    inline GetBudgetResult& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usages of the budget.</p>
     */
    inline const ConsumedUsages& GetUsages() const { return m_usages; }
    template<typename UsagesT = ConsumedUsages>
    void SetUsages(UsagesT&& value) { m_usagesHasBeenSet = true; m_usages = std::forward<UsagesT>(value); }
    template<typename UsagesT = ConsumedUsages>
    GetBudgetResult& WithUsages(UsagesT&& value) { SetUsages(std::forward<UsagesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget actions for the budget.</p>
     */
    inline const Aws::Vector<ResponseBudgetAction>& GetActions() const { return m_actions; }
    template<typename ActionsT = Aws::Vector<ResponseBudgetAction>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<ResponseBudgetAction>>
    GetBudgetResult& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = ResponseBudgetAction>
    GetBudgetResult& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The budget schedule.</p>
     */
    inline const BudgetSchedule& GetSchedule() const { return m_schedule; }
    template<typename ScheduleT = BudgetSchedule>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = BudgetSchedule>
    GetBudgetResult& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetBudgetResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetBudgetResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GetBudgetResult& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetBudgetResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the queue stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetQueueStoppedAt() const { return m_queueStoppedAt; }
    template<typename QueueStoppedAtT = Aws::Utils::DateTime>
    void SetQueueStoppedAt(QueueStoppedAtT&& value) { m_queueStoppedAtHasBeenSet = true; m_queueStoppedAt = std::forward<QueueStoppedAtT>(value); }
    template<typename QueueStoppedAtT = Aws::Utils::DateTime>
    GetBudgetResult& WithQueueStoppedAt(QueueStoppedAtT&& value) { SetQueueStoppedAt(std::forward<QueueStoppedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetBudgetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_budgetId;
    bool m_budgetIdHasBeenSet = false;

    UsageTrackingResource m_usageTrackingResource;
    bool m_usageTrackingResourceHasBeenSet = false;

    BudgetStatus m_status{BudgetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    double m_approximateDollarLimit{0.0};
    bool m_approximateDollarLimitHasBeenSet = false;

    ConsumedUsages m_usages;
    bool m_usagesHasBeenSet = false;

    Aws::Vector<ResponseBudgetAction> m_actions;
    bool m_actionsHasBeenSet = false;

    BudgetSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_queueStoppedAt{};
    bool m_queueStoppedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
