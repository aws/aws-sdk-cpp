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
    AWS_CLOUDTRAIL_API UpdateDashboardRequest();

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
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline UpdateDashboardRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline UpdateDashboardRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
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
    inline const Aws::Vector<RequestWidget>& GetWidgets() const{ return m_widgets; }
    inline bool WidgetsHasBeenSet() const { return m_widgetsHasBeenSet; }
    inline void SetWidgets(const Aws::Vector<RequestWidget>& value) { m_widgetsHasBeenSet = true; m_widgets = value; }
    inline void SetWidgets(Aws::Vector<RequestWidget>&& value) { m_widgetsHasBeenSet = true; m_widgets = std::move(value); }
    inline UpdateDashboardRequest& WithWidgets(const Aws::Vector<RequestWidget>& value) { SetWidgets(value); return *this;}
    inline UpdateDashboardRequest& WithWidgets(Aws::Vector<RequestWidget>&& value) { SetWidgets(std::move(value)); return *this;}
    inline UpdateDashboardRequest& AddWidgets(const RequestWidget& value) { m_widgetsHasBeenSet = true; m_widgets.push_back(value); return *this; }
    inline UpdateDashboardRequest& AddWidgets(RequestWidget&& value) { m_widgetsHasBeenSet = true; m_widgets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The refresh schedule configuration for the dashboard. </p>
     */
    inline const RefreshSchedule& GetRefreshSchedule() const{ return m_refreshSchedule; }
    inline bool RefreshScheduleHasBeenSet() const { return m_refreshScheduleHasBeenSet; }
    inline void SetRefreshSchedule(const RefreshSchedule& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = value; }
    inline void SetRefreshSchedule(RefreshSchedule&& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = std::move(value); }
    inline UpdateDashboardRequest& WithRefreshSchedule(const RefreshSchedule& value) { SetRefreshSchedule(value); return *this;}
    inline UpdateDashboardRequest& WithRefreshSchedule(RefreshSchedule&& value) { SetRefreshSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether termination protection is enabled for the dashboard. If
     * termination protection is enabled, you cannot delete the dashboard until
     * termination protection is disabled. </p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }
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

    bool m_terminationProtectionEnabled;
    bool m_terminationProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
