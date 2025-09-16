/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/HealthStatusValue.h>
#include <aws/budgets/model/HealthStatusReason.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>Provides information about the current operational state of a billing view
   * resource, including its ability to access and update based on its associated
   * billing view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/HealthStatus">AWS
   * API Reference</a></p>
   */
  class HealthStatus
  {
  public:
    AWS_BUDGETS_API HealthStatus() = default;
    AWS_BUDGETS_API HealthStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API HealthStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the billing view resource.</p>
     */
    inline HealthStatusValue GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(HealthStatusValue value) { m_statusHasBeenSet = true; m_status = value; }
    inline HealthStatus& WithStatus(HealthStatusValue value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the current status.</p> <ul> <li> <p>
     * <code>BILLING_VIEW_NO_ACCESS</code>: The billing view resource does not grant
     * <code>billing:GetBillingViewData</code> permission to this account.</p> </li>
     * <li> <p> <code>BILLING_VIEW_UNHEALTHY</code>: The billing view associated with
     * the budget is unhealthy.</p> </li> <li> <p> <code>FILTER_INVALID</code>: The
     * filter contains reference to an account you do not have access to.</p> </li>
     * <li> <p> <code>MULTI_YEAR_HISTORICAL_DATA_DISABLED</code>: The budget is not
     * being updated. Enable multi-year historical data in your Cost Management
     * preferences.</p> </li> </ul>
     */
    inline HealthStatusReason GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(HealthStatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline HealthStatus& WithStatusReason(HealthStatusReason value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    HealthStatus& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}
  private:

    HealthStatusValue m_status{HealthStatusValue::NOT_SET};
    bool m_statusHasBeenSet = false;

    HealthStatusReason m_statusReason{HealthStatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
