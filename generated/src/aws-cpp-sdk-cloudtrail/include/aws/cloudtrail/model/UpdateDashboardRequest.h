/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/RefreshSchedule.h>
#include <aws/cloudtrail/model/RequestWidget.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   */
  class UpdateDashboardRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API UpdateDashboardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDashboard"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The name or ARN of the dashboard. </p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    UpdateDashboardRequest& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of widgets for the dashboard. A custom dashboard can have a maximum
     * of 10 widgets. </p> <p>To add new widgets, pass in an array that includes the
     * existing widgets along with any new widgets. Run the <code>GetDashboard</code>
     * operation to get the list of widgets for the dashboard.</p> <p>To remove
     * widgets, pass in an array that includes the existing widgets minus the widgets
     * you want removed.</p>
     */
    inline const Aws::Vector<RequestWidget>& GetWidgets() const { return m_widgets; }
    inline bool WidgetsHasBeenSet() const { return m_widgetsHasBeenSet; }
    template<typename WidgetsT = Aws::Vector<RequestWidget>>
    void SetWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets = std::forward<WidgetsT>(value); }
    template<typename WidgetsT = Aws::Vector<RequestWidget>>
    UpdateDashboardRequest& WithWidgets(WidgetsT&& value) { SetWidgets(std::forward<WidgetsT>(value)); return *this;}
    template<typename WidgetsT = RequestWidget>
    UpdateDashboardRequest& AddWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets.emplace_back(std::forward<WidgetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The refresh schedule configuration for the dashboard. </p>
     */
    inline const RefreshSchedule& GetRefreshSchedule() const { return m_refreshSchedule; }
    inline bool RefreshScheduleHasBeenSet() const { return m_refreshScheduleHasBeenSet; }
    template<typename RefreshScheduleT = RefreshSchedule>
    void SetRefreshSchedule(RefreshScheduleT&& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = std::forward<RefreshScheduleT>(value); }
    template<typename RefreshScheduleT = RefreshSchedule>
    UpdateDashboardRequest& WithRefreshSchedule(RefreshScheduleT&& value) { SetRefreshSchedule(std::forward<RefreshScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether termination protection is enabled for the dashboard. If
     * termination protection is enabled, you cannot delete the dashboard until
     * termination protection is disabled. </p>
     */
    inline bool GetTerminationProtectionEnabled() const { return m_terminationProtectionEnabled; }
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }
    inline UpdateDashboardRequest& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::Vector<RequestWidget> m_widgets;
    bool m_widgetsHasBeenSet = false;

    RefreshSchedule m_refreshSchedule;
    bool m_refreshScheduleHasBeenSet = false;

    bool m_terminationProtectionEnabled{false};
    bool m_terminationProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
