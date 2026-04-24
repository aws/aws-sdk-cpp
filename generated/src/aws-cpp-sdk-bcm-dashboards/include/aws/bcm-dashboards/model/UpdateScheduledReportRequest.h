/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboardsRequest.h>
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/DateTimeRange.h>
#include <aws/bcm-dashboards/model/ScheduleConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BCMDashboards {
namespace Model {

/**
 */
class UpdateScheduledReportRequest : public BCMDashboardsRequest {
 public:
  AWS_BCMDASHBOARDS_API UpdateScheduledReportRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateScheduledReport"; }

  AWS_BCMDASHBOARDS_API Aws::String SerializePayload() const override;

  AWS_BCMDASHBOARDS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the scheduled report to update.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  UpdateScheduledReportRequest& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new name for the scheduled report.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  UpdateScheduledReportRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new description for the scheduled report.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  UpdateScheduledReportRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the dashboard to associate with the scheduled report.</p>
   */
  inline const Aws::String& GetDashboardArn() const { return m_dashboardArn; }
  inline bool DashboardArnHasBeenSet() const { return m_dashboardArnHasBeenSet; }
  template <typename DashboardArnT = Aws::String>
  void SetDashboardArn(DashboardArnT&& value) {
    m_dashboardArnHasBeenSet = true;
    m_dashboardArn = std::forward<DashboardArnT>(value);
  }
  template <typename DashboardArnT = Aws::String>
  UpdateScheduledReportRequest& WithDashboardArn(DashboardArnT&& value) {
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
  UpdateScheduledReportRequest& WithScheduledReportExecutionRoleArn(ScheduledReportExecutionRoleArnT&& value) {
    SetScheduledReportExecutionRoleArn(std::forward<ScheduledReportExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated schedule configuration for the report.</p>
   */
  inline const ScheduleConfig& GetScheduleConfig() const { return m_scheduleConfig; }
  inline bool ScheduleConfigHasBeenSet() const { return m_scheduleConfigHasBeenSet; }
  template <typename ScheduleConfigT = ScheduleConfig>
  void SetScheduleConfig(ScheduleConfigT&& value) {
    m_scheduleConfigHasBeenSet = true;
    m_scheduleConfig = std::forward<ScheduleConfigT>(value);
  }
  template <typename ScheduleConfigT = ScheduleConfig>
  UpdateScheduledReportRequest& WithScheduleConfig(ScheduleConfigT&& value) {
    SetScheduleConfig(std::forward<ScheduleConfigT>(value));
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
  UpdateScheduledReportRequest& WithWidgetIds(WidgetIdsT&& value) {
    SetWidgetIds(std::forward<WidgetIdsT>(value));
    return *this;
  }
  template <typename WidgetIdsT = Aws::String>
  UpdateScheduledReportRequest& AddWidgetIds(WidgetIdsT&& value) {
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
  UpdateScheduledReportRequest& WithWidgetDateRangeOverride(WidgetDateRangeOverrideT&& value) {
    SetWidgetDateRangeOverride(std::forward<WidgetDateRangeOverrideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to clear existing widgetIds.</p>
   */
  inline bool GetClearWidgetIds() const { return m_clearWidgetIds; }
  inline bool ClearWidgetIdsHasBeenSet() const { return m_clearWidgetIdsHasBeenSet; }
  inline void SetClearWidgetIds(bool value) {
    m_clearWidgetIdsHasBeenSet = true;
    m_clearWidgetIds = value;
  }
  inline UpdateScheduledReportRequest& WithClearWidgetIds(bool value) {
    SetClearWidgetIds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Set to true to clear existing widgetDateRangeOverride.</p>
   */
  inline bool GetClearWidgetDateRangeOverride() const { return m_clearWidgetDateRangeOverride; }
  inline bool ClearWidgetDateRangeOverrideHasBeenSet() const { return m_clearWidgetDateRangeOverrideHasBeenSet; }
  inline void SetClearWidgetDateRangeOverride(bool value) {
    m_clearWidgetDateRangeOverrideHasBeenSet = true;
    m_clearWidgetDateRangeOverride = value;
  }
  inline UpdateScheduledReportRequest& WithClearWidgetDateRangeOverride(bool value) {
    SetClearWidgetDateRangeOverride(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_dashboardArn;

  Aws::String m_scheduledReportExecutionRoleArn;

  ScheduleConfig m_scheduleConfig;

  Aws::Vector<Aws::String> m_widgetIds;

  DateTimeRange m_widgetDateRangeOverride;

  bool m_clearWidgetIds{false};

  bool m_clearWidgetDateRangeOverride{false};
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_dashboardArnHasBeenSet = false;
  bool m_scheduledReportExecutionRoleArnHasBeenSet = false;
  bool m_scheduleConfigHasBeenSet = false;
  bool m_widgetIdsHasBeenSet = false;
  bool m_widgetDateRangeOverrideHasBeenSet = false;
  bool m_clearWidgetIdsHasBeenSet = false;
  bool m_clearWidgetDateRangeOverrideHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMDashboards
}  // namespace Aws
