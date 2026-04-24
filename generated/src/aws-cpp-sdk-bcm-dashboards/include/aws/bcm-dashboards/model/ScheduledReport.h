/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/DateTimeRange.h>
#include <aws/bcm-dashboards/model/HealthStatus.h>
#include <aws/bcm-dashboards/model/ScheduleConfig.h>
#include <aws/core/utils/DateTime.h>
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
 * <p>Contains the full configuration and metadata of a scheduled
 * report.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/ScheduledReport">AWS
 * API Reference</a></p>
 */
class ScheduledReport {
 public:
  AWS_BCMDASHBOARDS_API ScheduledReport() = default;
  AWS_BCMDASHBOARDS_API ScheduledReport(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API ScheduledReport& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ScheduledReport& WithArn(ArnT&& value) {
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
  ScheduledReport& WithName(NameT&& value) {
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
  ScheduledReport& WithDashboardArn(DashboardArnT&& value) {
    SetDashboardArn(std::forward<DashboardArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that the scheduled report uses to execute. Amazon Web
   * Services Billing and Cost Management Dashboards will assume this IAM role while
   * executing the scheduled report.</p>
   */
  inline const Aws::String& GetScheduledReportExecutionRoleArn() const { return m_scheduledReportExecutionRoleArn; }
  inline bool ScheduledReportExecutionRoleArnHasBeenSet() const { return m_scheduledReportExecutionRoleArnHasBeenSet; }
  template <typename ScheduledReportExecutionRoleArnT = Aws::String>
  void SetScheduledReportExecutionRoleArn(ScheduledReportExecutionRoleArnT&& value) {
    m_scheduledReportExecutionRoleArnHasBeenSet = true;
    m_scheduledReportExecutionRoleArn = std::forward<ScheduledReportExecutionRoleArnT>(value);
  }
  template <typename ScheduledReportExecutionRoleArnT = Aws::String>
  ScheduledReport& WithScheduledReportExecutionRoleArn(ScheduledReportExecutionRoleArnT&& value) {
    SetScheduledReportExecutionRoleArn(std::forward<ScheduledReportExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule configuration that defines when and how often the report is
   * generated.</p>
   */
  inline const ScheduleConfig& GetScheduleConfig() const { return m_scheduleConfig; }
  inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }
  template <typename ScheduleConfigT = ScheduleConfig>
  void SetScheduleConfig(ScheduleConfigT&& value) {
    m_scheduleConfigHasBeenSet = true;
    m_scheduleConfig = std::forward<ScheduleConfigT>(value);
  }
  template <typename ScheduleConfigT = ScheduleConfig>
  ScheduledReport& WithScheduleConfig(ScheduleConfigT&& value) {
    SetScheduleConfig(std::forward<ScheduleConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the scheduled report's purpose or contents.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  ScheduledReport& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
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
  ScheduledReport& WithWidgetIds(WidgetIdsT&& value) {
    SetWidgetIds(std::forward<WidgetIdsT>(value));
    return *this;
  }
  template <typename WidgetIdsT = Aws::String>
  ScheduledReport& AddWidgetIds(WidgetIdsT&& value) {
    m_widgetIdsHasBeenSet = true;
    m_widgetIds.emplace_back(std::forward<WidgetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date range override applied to widgets in the scheduled report.</p>
   */
  inline const DateTimeRange& GetWidgetDateRangeOverride() const { return m_widgetDateRangeOverride; }
  inline bool WidgetDateRangeOverrideHasBeenSet() const { return m_widgetDateRangeOverrideHasBeenSet; }
  template <typename WidgetDateRangeOverrideT = DateTimeRange>
  void SetWidgetDateRangeOverride(WidgetDateRangeOverrideT&& value) {
    m_widgetDateRangeOverrideHasBeenSet = true;
    m_widgetDateRangeOverride = std::forward<WidgetDateRangeOverrideT>(value);
  }
  template <typename WidgetDateRangeOverrideT = DateTimeRange>
  ScheduledReport& WithWidgetDateRangeOverride(WidgetDateRangeOverrideT&& value) {
    SetWidgetDateRangeOverride(std::forward<WidgetDateRangeOverrideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the scheduled report was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ScheduledReport& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the scheduled report was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  ScheduledReport& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the most recent execution of the scheduled report.</p>
   */
  inline const Aws::Utils::DateTime& GetLastExecutionAt() const { return m_lastExecutionAt; }
  inline bool LastExecutionAtHasBeenSet() const { return m_lastExecutionAtHasBeenSet; }
  template <typename LastExecutionAtT = Aws::Utils::DateTime>
  void SetLastExecutionAt(LastExecutionAtT&& value) {
    m_lastExecutionAtHasBeenSet = true;
    m_lastExecutionAt = std::forward<LastExecutionAtT>(value);
  }
  template <typename LastExecutionAtT = Aws::Utils::DateTime>
  ScheduledReport& WithLastExecutionAt(LastExecutionAtT&& value) {
    SetLastExecutionAt(std::forward<LastExecutionAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The health status of the scheduled report at last refresh time.</p>
   */
  inline const HealthStatus& GetHealthStatus() const { return m_healthStatus; }
  inline bool HealthStatusHasBeenSet() const { return m_healthStatusHasBeenSet; }
  template <typename HealthStatusT = HealthStatus>
  void SetHealthStatus(HealthStatusT&& value) {
    m_healthStatusHasBeenSet = true;
    m_healthStatus = std::forward<HealthStatusT>(value);
  }
  template <typename HealthStatusT = HealthStatus>
  ScheduledReport& WithHealthStatus(HealthStatusT&& value) {
    SetHealthStatus(std::forward<HealthStatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_dashboardArn;

  Aws::String m_scheduledReportExecutionRoleArn;

  ScheduleConfig m_scheduleConfig;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_widgetIds;

  DateTimeRange m_widgetDateRangeOverride;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::Utils::DateTime m_lastExecutionAt{};

  HealthStatus m_healthStatus;
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_dashboardArnHasBeenSet = false;
  bool m_scheduledReportExecutionRoleArnHasBeenSet = false;
  bool m_scheduleConfigHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_widgetIdsHasBeenSet = false;
  bool m_widgetDateRangeOverrideHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_lastExecutionAtHasBeenSet = false;
  bool m_healthStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
