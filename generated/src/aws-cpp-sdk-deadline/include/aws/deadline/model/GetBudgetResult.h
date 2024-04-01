/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/deadline/model/BudgetSchedule.h>
#include <aws/deadline/model/BudgetStatus.h>
#include <aws/deadline/model/UsageTrackingResource.h>
#include <aws/deadline/model/ConsumedUsages.h>
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
    AWS_DEADLINE_API GetBudgetResult();
    AWS_DEADLINE_API GetBudgetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetBudgetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The budget actions for the budget.</p>
     */
    inline const Aws::Vector<ResponseBudgetAction>& GetActions() const{ return m_actions; }

    /**
     * <p>The budget actions for the budget.</p>
     */
    inline void SetActions(const Aws::Vector<ResponseBudgetAction>& value) { m_actions = value; }

    /**
     * <p>The budget actions for the budget.</p>
     */
    inline void SetActions(Aws::Vector<ResponseBudgetAction>&& value) { m_actions = std::move(value); }

    /**
     * <p>The budget actions for the budget.</p>
     */
    inline GetBudgetResult& WithActions(const Aws::Vector<ResponseBudgetAction>& value) { SetActions(value); return *this;}

    /**
     * <p>The budget actions for the budget.</p>
     */
    inline GetBudgetResult& WithActions(Aws::Vector<ResponseBudgetAction>&& value) { SetActions(std::move(value)); return *this;}

    /**
     * <p>The budget actions for the budget.</p>
     */
    inline GetBudgetResult& AddActions(const ResponseBudgetAction& value) { m_actions.push_back(value); return *this; }

    /**
     * <p>The budget actions for the budget.</p>
     */
    inline GetBudgetResult& AddActions(ResponseBudgetAction&& value) { m_actions.push_back(std::move(value)); return *this; }


    /**
     * <p>The consumed usage limit for the budget.</p>
     */
    inline double GetApproximateDollarLimit() const{ return m_approximateDollarLimit; }

    /**
     * <p>The consumed usage limit for the budget.</p>
     */
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimit = value; }

    /**
     * <p>The consumed usage limit for the budget.</p>
     */
    inline GetBudgetResult& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}


    /**
     * <p>The budget ID.</p>
     */
    inline const Aws::String& GetBudgetId() const{ return m_budgetId; }

    /**
     * <p>The budget ID.</p>
     */
    inline void SetBudgetId(const Aws::String& value) { m_budgetId = value; }

    /**
     * <p>The budget ID.</p>
     */
    inline void SetBudgetId(Aws::String&& value) { m_budgetId = std::move(value); }

    /**
     * <p>The budget ID.</p>
     */
    inline void SetBudgetId(const char* value) { m_budgetId.assign(value); }

    /**
     * <p>The budget ID.</p>
     */
    inline GetBudgetResult& WithBudgetId(const Aws::String& value) { SetBudgetId(value); return *this;}

    /**
     * <p>The budget ID.</p>
     */
    inline GetBudgetResult& WithBudgetId(Aws::String&& value) { SetBudgetId(std::move(value)); return *this;}

    /**
     * <p>The budget ID.</p>
     */
    inline GetBudgetResult& WithBudgetId(const char* value) { SetBudgetId(value); return *this;}


    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetBudgetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was created.</p>
     */
    inline GetBudgetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetBudgetResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetBudgetResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that created this resource.</p>
     */
    inline GetBudgetResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the budget.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the budget.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the budget.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the budget.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the budget.</p>
     */
    inline GetBudgetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the budget.</p>
     */
    inline GetBudgetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the budget.</p>
     */
    inline GetBudgetResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The display name of the budget.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }

    /**
     * <p>The display name of the budget.</p>
     */
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }

    /**
     * <p>The display name of the budget.</p>
     */
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }

    /**
     * <p>The display name of the budget.</p>
     */
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }

    /**
     * <p>The display name of the budget.</p>
     */
    inline GetBudgetResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}

    /**
     * <p>The display name of the budget.</p>
     */
    inline GetBudgetResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the budget.</p>
     */
    inline GetBudgetResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}


    /**
     * <p>The date and time the queue stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetQueueStoppedAt() const{ return m_queueStoppedAt; }

    /**
     * <p>The date and time the queue stopped.</p>
     */
    inline void SetQueueStoppedAt(const Aws::Utils::DateTime& value) { m_queueStoppedAt = value; }

    /**
     * <p>The date and time the queue stopped.</p>
     */
    inline void SetQueueStoppedAt(Aws::Utils::DateTime&& value) { m_queueStoppedAt = std::move(value); }

    /**
     * <p>The date and time the queue stopped.</p>
     */
    inline GetBudgetResult& WithQueueStoppedAt(const Aws::Utils::DateTime& value) { SetQueueStoppedAt(value); return *this;}

    /**
     * <p>The date and time the queue stopped.</p>
     */
    inline GetBudgetResult& WithQueueStoppedAt(Aws::Utils::DateTime&& value) { SetQueueStoppedAt(std::move(value)); return *this;}


    /**
     * <p>The budget schedule.</p>
     */
    inline const BudgetSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The budget schedule.</p>
     */
    inline void SetSchedule(const BudgetSchedule& value) { m_schedule = value; }

    /**
     * <p>The budget schedule.</p>
     */
    inline void SetSchedule(BudgetSchedule&& value) { m_schedule = std::move(value); }

    /**
     * <p>The budget schedule.</p>
     */
    inline GetBudgetResult& WithSchedule(const BudgetSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The budget schedule.</p>
     */
    inline GetBudgetResult& WithSchedule(BudgetSchedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–Get a budget
     * being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–Get an inactive
     * budget. This can include expired, canceled, or deleted statuses.</p> </li> </ul>
     */
    inline const BudgetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–Get a budget
     * being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–Get an inactive
     * budget. This can include expired, canceled, or deleted statuses.</p> </li> </ul>
     */
    inline void SetStatus(const BudgetStatus& value) { m_status = value; }

    /**
     * <p>The status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–Get a budget
     * being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–Get an inactive
     * budget. This can include expired, canceled, or deleted statuses.</p> </li> </ul>
     */
    inline void SetStatus(BudgetStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–Get a budget
     * being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–Get an inactive
     * budget. This can include expired, canceled, or deleted statuses.</p> </li> </ul>
     */
    inline GetBudgetResult& WithStatus(const BudgetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–Get a budget
     * being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–Get an inactive
     * budget. This can include expired, canceled, or deleted statuses.</p> </li> </ul>
     */
    inline GetBudgetResult& WithStatus(BudgetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetBudgetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline GetBudgetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetBudgetResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetBudgetResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline GetBudgetResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The resource that the budget is tracking usage for.</p>
     */
    inline const UsageTrackingResource& GetUsageTrackingResource() const{ return m_usageTrackingResource; }

    /**
     * <p>The resource that the budget is tracking usage for.</p>
     */
    inline void SetUsageTrackingResource(const UsageTrackingResource& value) { m_usageTrackingResource = value; }

    /**
     * <p>The resource that the budget is tracking usage for.</p>
     */
    inline void SetUsageTrackingResource(UsageTrackingResource&& value) { m_usageTrackingResource = std::move(value); }

    /**
     * <p>The resource that the budget is tracking usage for.</p>
     */
    inline GetBudgetResult& WithUsageTrackingResource(const UsageTrackingResource& value) { SetUsageTrackingResource(value); return *this;}

    /**
     * <p>The resource that the budget is tracking usage for.</p>
     */
    inline GetBudgetResult& WithUsageTrackingResource(UsageTrackingResource&& value) { SetUsageTrackingResource(std::move(value)); return *this;}


    /**
     * <p>The usages of the budget.</p>
     */
    inline const ConsumedUsages& GetUsages() const{ return m_usages; }

    /**
     * <p>The usages of the budget.</p>
     */
    inline void SetUsages(const ConsumedUsages& value) { m_usages = value; }

    /**
     * <p>The usages of the budget.</p>
     */
    inline void SetUsages(ConsumedUsages&& value) { m_usages = std::move(value); }

    /**
     * <p>The usages of the budget.</p>
     */
    inline GetBudgetResult& WithUsages(const ConsumedUsages& value) { SetUsages(value); return *this;}

    /**
     * <p>The usages of the budget.</p>
     */
    inline GetBudgetResult& WithUsages(ConsumedUsages&& value) { SetUsages(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetBudgetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetBudgetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetBudgetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ResponseBudgetAction> m_actions;

    double m_approximateDollarLimit;

    Aws::String m_budgetId;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_createdBy;

    Aws::String m_description;

    Aws::String m_displayName;

    Aws::Utils::DateTime m_queueStoppedAt;

    BudgetSchedule m_schedule;

    BudgetStatus m_status;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_updatedBy;

    UsageTrackingResource m_usageTrackingResource;

    ConsumedUsages m_usages;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
