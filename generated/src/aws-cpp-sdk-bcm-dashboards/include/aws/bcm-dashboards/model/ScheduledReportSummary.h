/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/HealthStatus.h>
#include <aws/bcm-dashboards/model/ScheduleState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BCMDashboards {
namespace Model {

/**
 * <p>Contains summary information for a scheduled report.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/ScheduledReportSummary">AWS
 * API Reference</a></p>
 */
class ScheduledReportSummary {
 public:
  AWS_BCMDASHBOARDS_API ScheduledReportSummary() = default;
  AWS_BCMDASHBOARDS_API ScheduledReportSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API ScheduledReportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the scheduled report.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ScheduledReportSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the scheduled report.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ScheduledReportSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the dashboard associated with the scheduled report.</p>
   */
  inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
  inline bool DashboardArnHasBeenSet() const { return m_dashboardArnHasBeenSet; }
  template <typename DashboardArnT = Aws::String>
  void SetDashboardArn(DashboardArnT&& value) {
    m_dashboardArnHasBeenSet = true;
    m_dashboardArn = std::forward<DashboardArnT>(value);
  }
  template <typename DashboardArnT = Aws::String>
  ScheduledReportSummary& WithDashboardArn(DashboardArnT&& value) {
    SetDashboardArn(std::forward<DashboardArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule expression that defines when the report runs.</p>
   */
  inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
  inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
  template <typename ScheduleExpressionT = Aws::String>
  void SetScheduleExpression(ScheduleExpressionT&& value) {
    m_scheduleExpressionHasBeenSet = true;
    m_scheduleExpression = std::forward<ScheduleExpressionT>(value);
  }
  template <typename ScheduleExpressionT = Aws::String>
  ScheduledReportSummary& WithScheduleExpression(ScheduleExpressionT&& value) {
    SetScheduleExpression(std::forward<ScheduleExpressionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the schedule: <code>ENABLED</code> or <code>DISABLED</code>.</p>
   */
  inline ScheduleState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ScheduleState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ScheduledReportSummary& WithState(ScheduleState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The health status of the scheduled report as of its last refresh time.</p>
   */
  inline const HealthStatus& GetHealthStatus() const { return m_healthStatus; }
  inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
  template <typename HealthStatusT = HealthStatus>
  void SetHealthStatus(HealthStatusT&& value) {
    m_healthStatusHasBeenSet = true;
    m_healthStatus = std::forward<HealthStatusT>(value);
  }
  template <typename HealthStatusT = HealthStatus>
  ScheduledReportSummary& WithHealthStatus(HealthStatusT&& value) {
    SetHealthStatus(std::forward<HealthStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time zone for the schedule expression, for example, <code>UTC</code>.</p>
   */
  inline const Aws::String& GetScheduleExpressionTimeZone() const { return m_scheduleExpressionTimeZone; }
  inline bool ScheduleExpressionTimeZoneHasBeenSet() const { return m_scheduleExpressionTimeZoneHasBeenSet; }
  template <typename ScheduleExpressionTimeZoneT = Aws::String>
  void SetScheduleExpressionTimeZone(ScheduleExpressionTimeZoneT&& value) {
    m_scheduleExpressionTimeZoneHasBeenSet = true;
    m_scheduleExpressionTimeZone = std::forward<ScheduleExpressionTimeZoneT>(value);
  }
  template <typename ScheduleExpressionTimeZoneT = Aws::String>
  ScheduledReportSummary& WithScheduleExpressionTimeZone(ScheduleExpressionTimeZoneT&& value) {
    SetScheduleExpressionTimeZone(std::forward<ScheduleExpressionTimeZoneT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of widget identifiers included in the scheduled report.</p>
   */
  inline const Aws::Vector<Aws::String>& GetWidgetIds() const { return m_widgetIds; }
  inline bool WidgetIdsHasBeenSet() const { return m_widgetIdsHasBeenSet; }
  template <typename WidgetIdsT = Aws::Vector<Aws::String>>
  void SetWidgetIds(WidgetIdsT&& value) {
    m_widgetIdsHasBeenSet = true;
    m_widgetIds = std::forward<WidgetIdsT>(value);
  }
  template <typename WidgetIdsT = Aws::Vector<Aws::String>>
  ScheduledReportSummary& WithWidgetIds(WidgetIdsT&& value) {
    SetWidgetIds(std::forward<WidgetIdsT>(value));
    return *this;
  }
  template <typename WidgetIdsT = Aws::String>
  ScheduledReportSummary& AddWidgetIds(WidgetIdsT&& value) {
    m_widgetIdsHasBeenSet = true;
    m_widgetIds.emplace_back(std::forward<WidgetIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_dashboardArn;

  Aws::String m_scheduleExpression;

  ScheduleState m_state{ScheduleState::NOT_SET};

  HealthStatus m_healthStatus;

  Aws::String m_scheduleExpressionTimeZone;

  Aws::Vector<Aws::String> m_widgetIds;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_dashboardArnHasBeenSet = false;
  bool m_scheduleExpressionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_healthStatusHasBeenSet = false;
  bool m_scheduleExpressionTimeZoneHasBeenSet = false;
  bool m_widgetIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
