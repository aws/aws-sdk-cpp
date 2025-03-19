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
    AWS_DEADLINE_API BudgetSummary() = default;
    AWS_DEADLINE_API BudgetSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API BudgetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The budget ID.</p>
     */
    inline const Aws::String& GetBudgetId() const { return m_budgetId; }
    inline bool BudgetIdHasBeenSet() const { return m_budgetIdHasBeenSet; }
    template<typename BudgetIdT = Aws::String>
    void SetBudgetId(BudgetIdT&& value) { m_budgetIdHasBeenSet = true; m_budgetId = std::forward<BudgetIdT>(value); }
    template<typename BudgetIdT = Aws::String>
    BudgetSummary& WithBudgetId(BudgetIdT&& value) { SetBudgetId(std::forward<BudgetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource used to track expenditure in the budget.</p>
     */
    inline const UsageTrackingResource& GetUsageTrackingResource() const { return m_usageTrackingResource; }
    inline bool UsageTrackingResourceHasBeenSet() const { return m_usageTrackingResourceHasBeenSet; }
    template<typename UsageTrackingResourceT = UsageTrackingResource>
    void SetUsageTrackingResource(UsageTrackingResourceT&& value) { m_usageTrackingResourceHasBeenSet = true; m_usageTrackingResource = std::forward<UsageTrackingResourceT>(value); }
    template<typename UsageTrackingResourceT = UsageTrackingResource>
    BudgetSummary& WithUsageTrackingResource(UsageTrackingResourceT&& value) { SetUsageTrackingResource(std::forward<UsageTrackingResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the budget.</p> <ul> <li> <p> <code>ACTIVE</code>–The budget is
     * being evaluated.</p> </li> <li> <p> <code>INACTIVE</code>–The budget is
     * inactive. This can include Expired, Canceled, or deleted Deleted statuses.</p>
     * </li> </ul>
     */
    inline BudgetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(BudgetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline BudgetSummary& WithStatus(BudgetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the budget summary to update.</p>  <p>This
     * field can store any content. Escape or encode this content before displaying it
     * on a webpage or any other system that might interpret the content of this
     * field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    BudgetSummary& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate dollar limit of the budget.</p>
     */
    inline double GetApproximateDollarLimit() const { return m_approximateDollarLimit; }
    inline bool ApproximateDollarLimitHasBeenSet() const { return m_approximateDollarLimitHasBeenSet; }
    inline void SetApproximateDollarLimit(double value) { m_approximateDollarLimitHasBeenSet = true; m_approximateDollarLimit = value; }
    inline BudgetSummary& WithApproximateDollarLimit(double value) { SetApproximateDollarLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The consumed usage for the budget.</p>
     */
    inline const ConsumedUsages& GetUsages() const { return m_usages; }
    inline bool UsagesHasBeenSet() const { return m_usagesHasBeenSet; }
    template<typename UsagesT = ConsumedUsages>
    void SetUsages(UsagesT&& value) { m_usagesHasBeenSet = true; m_usages = std::forward<UsagesT>(value); }
    template<typename UsagesT = ConsumedUsages>
    BudgetSummary& WithUsages(UsagesT&& value) { SetUsages(std::forward<UsagesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that created this resource.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    BudgetSummary& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    BudgetSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user or system that updated this resource.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    BudgetSummary& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the resource was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    BudgetSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
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

    double m_approximateDollarLimit{0.0};
    bool m_approximateDollarLimitHasBeenSet = false;

    ConsumedUsages m_usages;
    bool m_usagesHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
