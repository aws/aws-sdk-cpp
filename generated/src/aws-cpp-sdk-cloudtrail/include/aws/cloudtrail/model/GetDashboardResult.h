/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/DashboardType.h>
#include <aws/cloudtrail/model/DashboardStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudtrail/model/RefreshSchedule.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudtrail/model/Widget.h>
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
namespace CloudTrail
{
namespace Model
{
  class GetDashboardResult
  {
  public:
    AWS_CLOUDTRAIL_API GetDashboardResult() = default;
    AWS_CLOUDTRAIL_API GetDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN for the dashboard. </p>
     */
    inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
    template<typename DashboardArnT = Aws::String>
    void SetDashboardArn(DashboardArnT&& value) { m_dashboardArnHasBeenSet = true; m_dashboardArn = std::forward<DashboardArnT>(value); }
    template<typename DashboardArnT = Aws::String>
    GetDashboardResult& WithDashboardArn(DashboardArnT&& value) { SetDashboardArn(std::forward<DashboardArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of dashboard. </p>
     */
    inline DashboardType GetType() const { return m_type; }
    inline void SetType(DashboardType value) { m_typeHasBeenSet = true; m_type = value; }
    inline GetDashboardResult& WithType(DashboardType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the dashboard. </p>
     */
    inline DashboardStatus GetStatus() const { return m_status; }
    inline void SetStatus(DashboardStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDashboardResult& WithStatus(DashboardStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of widgets for the dashboard. </p>
     */
    inline const Aws::Vector<Widget>& GetWidgets() const { return m_widgets; }
    template<typename WidgetsT = Aws::Vector<Widget>>
    void SetWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets = std::forward<WidgetsT>(value); }
    template<typename WidgetsT = Aws::Vector<Widget>>
    GetDashboardResult& WithWidgets(WidgetsT&& value) { SetWidgets(std::forward<WidgetsT>(value)); return *this;}
    template<typename WidgetsT = Widget>
    GetDashboardResult& AddWidgets(WidgetsT&& value) { m_widgetsHasBeenSet = true; m_widgets.emplace_back(std::forward<WidgetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The refresh schedule for the dashboard, if configured. </p>
     */
    inline const RefreshSchedule& GetRefreshSchedule() const { return m_refreshSchedule; }
    template<typename RefreshScheduleT = RefreshSchedule>
    void SetRefreshSchedule(RefreshScheduleT&& value) { m_refreshScheduleHasBeenSet = true; m_refreshSchedule = std::forward<RefreshScheduleT>(value); }
    template<typename RefreshScheduleT = RefreshSchedule>
    GetDashboardResult& WithRefreshSchedule(RefreshScheduleT&& value) { SetRefreshSchedule(std::forward<RefreshScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp that shows when the dashboard was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    GetDashboardResult& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp that shows when the dashboard was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    GetDashboardResult& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the last dashboard refresh. </p>
     */
    inline const Aws::String& GetLastRefreshId() const { return m_lastRefreshId; }
    template<typename LastRefreshIdT = Aws::String>
    void SetLastRefreshId(LastRefreshIdT&& value) { m_lastRefreshIdHasBeenSet = true; m_lastRefreshId = std::forward<LastRefreshIdT>(value); }
    template<typename LastRefreshIdT = Aws::String>
    GetDashboardResult& WithLastRefreshId(LastRefreshIdT&& value) { SetLastRefreshId(std::forward<LastRefreshIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information about failures for the last scheduled refresh. </p>
     */
    inline const Aws::String& GetLastRefreshFailureReason() const { return m_lastRefreshFailureReason; }
    template<typename LastRefreshFailureReasonT = Aws::String>
    void SetLastRefreshFailureReason(LastRefreshFailureReasonT&& value) { m_lastRefreshFailureReasonHasBeenSet = true; m_lastRefreshFailureReason = std::forward<LastRefreshFailureReasonT>(value); }
    template<typename LastRefreshFailureReasonT = Aws::String>
    GetDashboardResult& WithLastRefreshFailureReason(LastRefreshFailureReasonT&& value) { SetLastRefreshFailureReason(std::forward<LastRefreshFailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether termination protection is enabled for the dashboard. </p>
     */
    inline bool GetTerminationProtectionEnabled() const { return m_terminationProtectionEnabled; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }
    inline GetDashboardResult& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDashboardResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardArn;
    bool m_dashboardArnHasBeenSet = false;

    DashboardType m_type{DashboardType::NOT_SET};
    bool m_typeHasBeenSet = false;

    DashboardStatus m_status{DashboardStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Widget> m_widgets;
    bool m_widgetsHasBeenSet = false;

    RefreshSchedule m_refreshSchedule;
    bool m_refreshScheduleHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;

    Aws::String m_lastRefreshId;
    bool m_lastRefreshIdHasBeenSet = false;

    Aws::String m_lastRefreshFailureReason;
    bool m_lastRefreshFailureReasonHasBeenSet = false;

    bool m_terminationProtectionEnabled{false};
    bool m_terminationProtectionEnabledHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
