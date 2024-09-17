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
    AWS_DEADLINE_API GetBudgetResult();
    AWS_DEADLINE_API GetBudgetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEADLINE_API GetBudgetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The budget ID.</p>
     */
    inline const Aws::String& GetBudgetId() const{ return m_budgetId; }
    inline void SetBudgetId(const Aws::String& value) { m_budgetId = value; }
    inline void SetBudgetId(Aws::String&& value) { m_budgetId = std::move(value); }
    inline void SetBudgetId(const char* value) { m_budgetId.assign(value); }
    inline GetBudgetResult& WithBudgetId(const Aws::String& value) { SetBudgetId(value); return *this;}
    inline GetBudgetResult& WithBudgetId(Aws::String&& value) { SetBudgetId(std::move(value)); return *this;}
    inline GetBudgetResult& WithBudgetId(const char* value) { SetBudgetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that the budget is tracking usage for.</p>
     */
    inline const UsageTrackingResource& GetUsageTrackingResource() const{ return m_usageTrackingResource; }
    inline void SetUsageTrackingResource(const UsageTrackingResource& value) { m_usageTrackingResource = value; }
    inline void SetUsageTrackingResource(UsageTrackingResource&& value) { m_usageTrackingResource = std::move(value); }
    inline GetBudgetResult& WithUsageTrackingResource(const UsageTrackingResource& value) { SetUsageTrackingResource(value); return *this;}
    inline GetBudgetResult& WithUsageTrackingResource(UsageTrackingResource&& value) { SetUsageTrackingResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–Get a budget
     * being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–Get an inactive
     * budget. This can include expired, canceled, or deleted statuses.</p> </li> </ul>
     */
    inline const BudgetStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const BudgetStatus& value) { m_status = value; }
    inline void SetStatus(BudgetStatus&& value) { m_status = std::move(value); }
    inline GetBudgetResult& WithStatus(const BudgetStatus& value) { SetStatus(value); return *this;}
    inline GetBudgetResult& WithStatus(BudgetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the budget.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline void SetDisplayName(const Aws::String& value) { m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayName.assign(value); }
    inline GetBudgetResult& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline GetBudgetResult& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline GetBudgetResult& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the budget.</p>  <p>This field can store any
     * content. Escape or encode this content before displaying it on a webpage or any
     * other system that might interpret the content of this field.</p> 
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetBudgetResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetBudgetResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetBudgetResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The consumed usage limit for the budget.</p>
     */
    inline double GetApproximateDollarLimit() const{ return m_approximateDollarLimit; }
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimit = value; }
    inline GetBudgetResult& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usages of the budget.</p>
     */
    inline const ConsumedUsages& GetUsages() const{ return m_usages; }
    inline void SetUsages(const ConsumedUsages& value) { m_usages = value; }
    inline void SetUsages(ConsumedUsages&& value) { m_usages = std::move(value); }
    inline GetBudgetResult& WithUsages(const ConsumedUsages& value) { SetUsages(value); return *this;}
    inline GetBudgetResult& WithUsages(ConsumedUsages&& value) { SetUsages(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The budget actions for the budget.</p>
     */
    inline const Aws::Vector<ResponseBudgetAction>& GetActions() const{ return m_actions; }
    inline void SetActions(const Aws::Vector<ResponseBudgetAction>& value) { m_actions = value; }
    inline void SetActions(Aws::Vector<ResponseBudgetAction>&& value) { m_actions = std::move(value); }
    inline GetBudgetResult& WithActions(const Aws::Vector<ResponseBudgetAction>& value) { SetActions(value); return *this;}
    inline GetBudgetResult& WithActions(Aws::Vector<ResponseBudgetAction>&& value) { SetActions(std::move(value)); return *this;}
    inline GetBudgetResult& AddActions(const ResponseBudgetAction& value) { m_actions.push_back(value); return *this; }
    inline GetBudgetResult& AddActions(ResponseBudgetAction&& value) { m_actions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The budget schedule.</p>
     */
    inline const BudgetSchedule& GetSchedule() const{ return m_schedule; }
    inline void SetSchedule(const BudgetSchedule& value) { m_schedule = value; }
    inline void SetSchedule(BudgetSchedule&& value) { m_schedule = std::move(value); }
    inline GetBudgetResult& WithSchedule(const BudgetSchedule& value) { SetSchedule(value); return *this;}
    inline GetBudgetResult& WithSchedule(BudgetSchedule&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdBy.assign(value); }
    inline GetBudgetResult& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GetBudgetResult& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GetBudgetResult& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetBudgetResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetBudgetResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedBy.assign(value); }
    inline GetBudgetResult& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GetBudgetResult& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GetBudgetResult& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetBudgetResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetBudgetResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the queue stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetQueueStoppedAt() const{ return m_queueStoppedAt; }
    inline void SetQueueStoppedAt(const Aws::Utils::DateTime& value) { m_queueStoppedAt = value; }
    inline void SetQueueStoppedAt(Aws::Utils::DateTime&& value) { m_queueStoppedAt = std::move(value); }
    inline GetBudgetResult& WithQueueStoppedAt(const Aws::Utils::DateTime& value) { SetQueueStoppedAt(value); return *this;}
    inline GetBudgetResult& WithQueueStoppedAt(Aws::Utils::DateTime&& value) { SetQueueStoppedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetBudgetResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetBudgetResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetBudgetResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_budgetId;

    UsageTrackingResource m_usageTrackingResource;

    BudgetStatus m_status;

    Aws::String m_displayName;

    Aws::String m_description;

    double m_approximateDollarLimit;

    ConsumedUsages m_usages;

    Aws::Vector<ResponseBudgetAction> m_actions;

    BudgetSchedule m_schedule;

    Aws::String m_createdBy;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_updatedBy;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Utils::DateTime m_queueStoppedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
