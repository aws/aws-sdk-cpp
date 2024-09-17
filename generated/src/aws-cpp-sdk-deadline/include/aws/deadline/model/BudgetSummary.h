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
#include <aws/core/utils/DateTime.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The budget summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/BudgetSummary">AWS
   * API Reference</a></p>
   */
  class BudgetSummary
  {
  public:
    AWS_DEADLINE_API BudgetSummary();
    AWS_DEADLINE_API BudgetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API BudgetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The budget ID.</p>
     */
    inline const Aws::String& GetBudgetId() const{ return m_budgetId; }
    inline bool BudgetIdHasBeenSet() const { return m_budgetIdHasBeenSet; }
    inline void SetBudgetId(const Aws::String& value) { m_budgetIdHasBeenSet = true; m_budgetId = value; }
    inline void SetBudgetId(Aws::String&& value) { m_budgetIdHasBeenSet = true; m_budgetId = std::move(value); }
    inline void SetBudgetId(const char* value) { m_budgetIdHasBeenSet = true; m_budgetId.assign(value); }
    inline BudgetSummary& WithBudgetId(const Aws::String& value) { SetBudgetId(value); return *this;}
    inline BudgetSummary& WithBudgetId(Aws::String&& value) { SetBudgetId(std::move(value)); return *this;}
    inline BudgetSummary& WithBudgetId(const char* value) { SetBudgetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource used to track expenditure in the budget.</p>
     */
    inline const UsageTrackingResource& GetUsageTrackingResource() const{ return m_usageTrackingResource; }
    inline bool UsageTrackingResourceHasBeenSet() const { return m_usageTrackingResourceHasBeenSet; }
    inline void SetUsageTrackingResource(const UsageTrackingResource& value) { m_usageTrackingResourceHasBeenSet = true; m_usageTrackingResource = value; }
    inline void SetUsageTrackingResource(UsageTrackingResource&& value) { m_usageTrackingResourceHasBeenSet = true; m_usageTrackingResource = std::move(value); }
    inline BudgetSummary& WithUsageTrackingResource(const UsageTrackingResource& value) { SetUsageTrackingResource(value); return *this;}
    inline BudgetSummary& WithUsageTrackingResource(UsageTrackingResource&& value) { SetUsageTrackingResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The budget is
     * being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget is
     * inactive. This can include Expired, Canceled, or deleted Deleted statuses.</p>
     * </li> </ul>
     */
    inline const BudgetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const BudgetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(BudgetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline BudgetSummary& WithStatus(const BudgetStatus& value) { SetStatus(value); return *this;}
    inline BudgetSummary& WithStatus(BudgetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the budget summary to update.</p>  <p>This
     * field can store any content. Escape or encode this content before displaying it
     * on a webpage or any other system that might interpret the content of this
     * field.</p> 
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline BudgetSummary& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline BudgetSummary& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline BudgetSummary& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate dollar limit of the budget.</p>
     */
    inline double GetApproximateDollarLimit() const{ return m_approximateDollarLimit; }
    inline bool ApproximateDollarLimitHasBeenSet() const { return m_approximateDollarLimitHasBeenSet; }
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimitHasBeenSet = true; m_approximateDollarLimit = value; }
    inline BudgetSummary& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The consumed usage for the budget.</p>
     */
    inline const ConsumedUsages& GetUsages() const{ return m_usages; }
    inline bool UsagesHasBeenSet() const { return m_usagesHasBeenSet; }
    inline void SetUsages(const ConsumedUsages& value) { m_usagesHasBeenSet = true; m_usages = value; }
    inline void SetUsages(ConsumedUsages&& value) { m_usagesHasBeenSet = true; m_usages = std::move(value); }
    inline BudgetSummary& WithUsages(const ConsumedUsages& value) { SetUsages(value); return *this;}
    inline BudgetSummary& WithUsages(ConsumedUsages&& value) { SetUsages(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline BudgetSummary& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline BudgetSummary& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline BudgetSummary& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline BudgetSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline BudgetSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline BudgetSummary& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline BudgetSummary& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline BudgetSummary& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline BudgetSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline BudgetSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_budgetId;
    bool m_budgetIdHasBeenSet = false;

    UsageTrackingResource m_usageTrackingResource;
    bool m_usageTrackingResourceHasBeenSet = false;

    BudgetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    double m_approximateDollarLimit;
    bool m_approximateDollarLimitHasBeenSet = false;

    ConsumedUsages m_usages;
    bool m_usagesHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
