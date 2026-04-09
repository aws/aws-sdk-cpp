/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/DateTimeRange.h>
#include <aws/bcm-dashboards/model/ScheduleConfig.h>
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
 * <p>Defines the configuration for creating a new scheduled report, including the
 * dashboard, schedule, execution role, and optional widget settings.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/ScheduledReportInput">AWS
 * API Reference</a></p>
 */
class ScheduledReportInput {
 public:
  AWS_BCMDASHBOARDS_API ScheduledReportInput() = default;
  AWS_BCMDASHBOARDS_API ScheduledReportInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API ScheduledReportInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  ScheduledReportInput& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the dashboard to generate the scheduled report from.</p>
   */
  inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
  inline bool DashboardArnHasBeenSet() const { return m_dashboardArnHasBeenSet; }
  template <typename DashboardArnT = Aws::String>
  void SetDashboardArn(DashboardArnT&& value) {
    m_dashboardArnHasBeenSet = true;
    m_dashboardArn = std::forward<DashboardArnT>(value);
  }
  template <typename DashboardArnT = Aws::String>
  ScheduledReportInput& WithDashboardArn(DashboardArnT&& value) {
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
  ScheduledReportInput& WithScheduledReportExecutionRoleArn(ScheduledReportExecutionRoleArnT&& value) {
    SetScheduledReportExecutionRoleArn(std::forward<ScheduledReportExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedule configuration that defines when and how often the report is
   * generated. If the schedule state is not specified, it defaults to
   * <code>ENABLED</code>.</p>
   */
  inline const ScheduleConfig& GetScheduleConfig() const { return m_scheduleConfig; }
  inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }
  template <typename ScheduleConfigT = ScheduleConfig>
  void SetScheduleConfig(ScheduleConfigT&& value) {
    m_scheduleConfigHasBeenSet = true;
    m_scheduleConfig = std::forward<ScheduleConfigT>(value);
  }
  template <typename ScheduleConfigT = ScheduleConfig>
  ScheduledReportInput& WithScheduleConfig(ScheduleConfigT&& value) {
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
  ScheduledReportInput& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of widget identifiers to include in the scheduled report. If not
   * specified, all widgets in the dashboard are included.</p>
   */
  inline const Aws::Vector<Aws::String>& GetWidgetIds() const { return m_widgetIds; }
  inline bool WidgetIdsHasBeenSet() const { return m_widgetIdsHasBeenSet; }
  template <typename WidgetIdsT = Aws::Vector<Aws::String>>
  void SetWidgetIds(WidgetIdsT&& value) {
    m_widgetIdsHasBeenSet = true;
    m_widgetIds = std::forward<WidgetIdsT>(value);
  }
  template <typename WidgetIdsT = Aws::Vector<Aws::String>>
  ScheduledReportInput& WithWidgetIds(WidgetIdsT&& value) {
    SetWidgetIds(std::forward<WidgetIdsT>(value));
    return *this;
  }
  template <typename WidgetIdsT = Aws::String>
  ScheduledReportInput& AddWidgetIds(WidgetIdsT&& value) {
    m_widgetIdsHasBeenSet = true;
    m_widgetIds.emplace_back(std::forward<WidgetIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date range override to apply to widgets in the scheduled report.</p>
   */
  inline const DateTimeRange& GetWidgetDateRangeOverride() const { return m_widgetDateRangeOverride; }
  inline bool WidgetDateRangeOverrideHasBeenSet() const { return m_widgetDateRangeOverrideHasBeenSet; }
  template <typename WidgetDateRangeOverrideT = DateTimeRange>
  void SetWidgetDateRangeOverride(WidgetDateRangeOverrideT&& value) {
    m_widgetDateRangeOverrideHasBeenSet = true;
    m_widgetDateRangeOverride = std::forward<WidgetDateRangeOverrideT>(value);
  }
  template <typename WidgetDateRangeOverrideT = DateTimeRange>
  ScheduledReportInput& WithWidgetDateRangeOverride(WidgetDateRangeOverrideT&& value) {
    SetWidgetDateRangeOverride(std::forward<WidgetDateRangeOverrideT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_dashboardArn;

  Aws::String m_scheduledReportExecutionRoleArn;

  ScheduleConfig m_scheduleConfig;

  Aws::String m_description;

  Aws::Vector<Aws::String> m_widgetIds;

  DateTimeRange m_widgetDateRangeOverride;
  bool m_nameHasBeenSet = false;
  bool m_dashboardArnHasBeenSet = false;
  bool m_scheduledReportExecutionRoleArnHasBeenSet = false;
  bool m_scheduleConfigHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_widgetIdsHasBeenSet = false;
  bool m_widgetDateRangeOverrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
