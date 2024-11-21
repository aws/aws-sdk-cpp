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
    AWS_CLOUDTRAIL_API GetDashboardResult();
    AWS_CLOUDTRAIL_API GetDashboardResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API GetDashboardResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The ARN for the dashboard. </p>
     */
    inline const Aws::String& GetDashboardArn() const{ return m_dashboardArn; }
    inline void SetDashboardArn(const Aws::String& value) { m_dashboardArn = value; }
    inline void SetDashboardArn(Aws::String&& value) { m_dashboardArn = std::move(value); }
    inline void SetDashboardArn(const char* value) { m_dashboardArn.assign(value); }
    inline GetDashboardResult& WithDashboardArn(const Aws::String& value) { SetDashboardArn(value); return *this;}
    inline GetDashboardResult& WithDashboardArn(Aws::String&& value) { SetDashboardArn(std::move(value)); return *this;}
    inline GetDashboardResult& WithDashboardArn(const char* value) { SetDashboardArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of dashboard. </p>
     */
    inline const DashboardType& GetType() const{ return m_type; }
    inline void SetType(const DashboardType& value) { m_type = value; }
    inline void SetType(DashboardType&& value) { m_type = std::move(value); }
    inline GetDashboardResult& WithType(const DashboardType& value) { SetType(value); return *this;}
    inline GetDashboardResult& WithType(DashboardType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the dashboard. </p>
     */
    inline const DashboardStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DashboardStatus& value) { m_status = value; }
    inline void SetStatus(DashboardStatus&& value) { m_status = std::move(value); }
    inline GetDashboardResult& WithStatus(const DashboardStatus& value) { SetStatus(value); return *this;}
    inline GetDashboardResult& WithStatus(DashboardStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of widgets for the dashboard. </p>
     */
    inline const Aws::Vector<Widget>& GetWidgets() const{ return m_widgets; }
    inline void SetWidgets(const Aws::Vector<Widget>& value) { m_widgets = value; }
    inline void SetWidgets(Aws::Vector<Widget>&& value) { m_widgets = std::move(value); }
    inline GetDashboardResult& WithWidgets(const Aws::Vector<Widget>& value) { SetWidgets(value); return *this;}
    inline GetDashboardResult& WithWidgets(Aws::Vector<Widget>&& value) { SetWidgets(std::move(value)); return *this;}
    inline GetDashboardResult& AddWidgets(const Widget& value) { m_widgets.push_back(value); return *this; }
    inline GetDashboardResult& AddWidgets(Widget&& value) { m_widgets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The refresh schedule for the dashboard, if configured. </p>
     */
    inline const RefreshSchedule& GetRefreshSchedule() const{ return m_refreshSchedule; }
    inline void SetRefreshSchedule(const RefreshSchedule& value) { m_refreshSchedule = value; }
    inline void SetRefreshSchedule(RefreshSchedule&& value) { m_refreshSchedule = std::move(value); }
    inline GetDashboardResult& WithRefreshSchedule(const RefreshSchedule& value) { SetRefreshSchedule(value); return *this;}
    inline GetDashboardResult& WithRefreshSchedule(RefreshSchedule&& value) { SetRefreshSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp that shows when the dashboard was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestamp = std::move(value); }
    inline GetDashboardResult& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline GetDashboardResult& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The timestamp that shows when the dashboard was last updated. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestamp = std::move(value); }
    inline GetDashboardResult& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline GetDashboardResult& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the last dashboard refresh. </p>
     */
    inline const Aws::String& GetLastRefreshId() const{ return m_lastRefreshId; }
    inline void SetLastRefreshId(const Aws::String& value) { m_lastRefreshId = value; }
    inline void SetLastRefreshId(Aws::String&& value) { m_lastRefreshId = std::move(value); }
    inline void SetLastRefreshId(const char* value) { m_lastRefreshId.assign(value); }
    inline GetDashboardResult& WithLastRefreshId(const Aws::String& value) { SetLastRefreshId(value); return *this;}
    inline GetDashboardResult& WithLastRefreshId(Aws::String&& value) { SetLastRefreshId(std::move(value)); return *this;}
    inline GetDashboardResult& WithLastRefreshId(const char* value) { SetLastRefreshId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Provides information about failures for the last scheduled refresh. </p>
     */
    inline const Aws::String& GetLastRefreshFailureReason() const{ return m_lastRefreshFailureReason; }
    inline void SetLastRefreshFailureReason(const Aws::String& value) { m_lastRefreshFailureReason = value; }
    inline void SetLastRefreshFailureReason(Aws::String&& value) { m_lastRefreshFailureReason = std::move(value); }
    inline void SetLastRefreshFailureReason(const char* value) { m_lastRefreshFailureReason.assign(value); }
    inline GetDashboardResult& WithLastRefreshFailureReason(const Aws::String& value) { SetLastRefreshFailureReason(value); return *this;}
    inline GetDashboardResult& WithLastRefreshFailureReason(Aws::String&& value) { SetLastRefreshFailureReason(std::move(value)); return *this;}
    inline GetDashboardResult& WithLastRefreshFailureReason(const char* value) { SetLastRefreshFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether termination protection is enabled for the dashboard. </p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabled = value; }
    inline GetDashboardResult& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDashboardResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDashboardResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDashboardResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_dashboardArn;

    DashboardType m_type;

    DashboardStatus m_status;

    Aws::Vector<Widget> m_widgets;

    RefreshSchedule m_refreshSchedule;

    Aws::Utils::DateTime m_createdTimestamp;

    Aws::Utils::DateTime m_updatedTimestamp;

    Aws::String m_lastRefreshId;

    Aws::String m_lastRefreshFailureReason;

    bool m_terminationProtectionEnabled;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
