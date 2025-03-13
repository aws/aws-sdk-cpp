/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backup/model/ReportSetting.h>
#include <aws/backup/model/ReportDeliveryChannel.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains detailed information about a report plan.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ReportPlan">AWS
   * API Reference</a></p>
   */
  class ReportPlan
  {
  public:
    AWS_BACKUP_API ReportPlan() = default;
    AWS_BACKUP_API ReportPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ReportPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetReportPlanArn() const { return m_reportPlanArn; }
    inline bool ReportPlanArnHasBeenSet() const { return m_reportPlanArnHasBeenSet; }
    template<typename ReportPlanArnT = Aws::String>
    void SetReportPlanArn(ReportPlanArnT&& value) { m_reportPlanArnHasBeenSet = true; m_reportPlanArn = std::forward<ReportPlanArnT>(value); }
    template<typename ReportPlanArnT = Aws::String>
    ReportPlan& WithReportPlanArn(ReportPlanArnT&& value) { SetReportPlanArn(std::forward<ReportPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the report plan. This name is between 1 and 256 characters
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetReportPlanName() const { return m_reportPlanName; }
    inline bool ReportPlanNameHasBeenSet() const { return m_reportPlanNameHasBeenSet; }
    template<typename ReportPlanNameT = Aws::String>
    void SetReportPlanName(ReportPlanNameT&& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = std::forward<ReportPlanNameT>(value); }
    template<typename ReportPlanNameT = Aws::String>
    ReportPlan& WithReportPlanName(ReportPlanNameT&& value) { SetReportPlanName(std::forward<ReportPlanNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the report plan with a maximum 1,024
     * characters.</p>
     */
    inline const Aws::String& GetReportPlanDescription() const { return m_reportPlanDescription; }
    inline bool ReportPlanDescriptionHasBeenSet() const { return m_reportPlanDescriptionHasBeenSet; }
    template<typename ReportPlanDescriptionT = Aws::String>
    void SetReportPlanDescription(ReportPlanDescriptionT&& value) { m_reportPlanDescriptionHasBeenSet = true; m_reportPlanDescription = std::forward<ReportPlanDescriptionT>(value); }
    template<typename ReportPlanDescriptionT = Aws::String>
    ReportPlan& WithReportPlanDescription(ReportPlanDescriptionT&& value) { SetReportPlanDescription(std::forward<ReportPlanDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline const ReportSetting& GetReportSetting() const { return m_reportSetting; }
    inline bool ReportSettingHasBeenSet() const { return m_reportSettingHasBeenSet; }
    template<typename ReportSettingT = ReportSetting>
    void SetReportSetting(ReportSettingT&& value) { m_reportSettingHasBeenSet = true; m_reportSetting = std::forward<ReportSettingT>(value); }
    template<typename ReportSettingT = ReportSetting>
    ReportPlan& WithReportSetting(ReportSettingT&& value) { SetReportSetting(std::forward<ReportSettingT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about where and how to deliver your reports,
     * specifically your Amazon S3 bucket name, S3 key prefix, and the formats of your
     * reports.</p>
     */
    inline const ReportDeliveryChannel& GetReportDeliveryChannel() const { return m_reportDeliveryChannel; }
    inline bool ReportDeliveryChannelHasBeenSet() const { return m_reportDeliveryChannelHasBeenSet; }
    template<typename ReportDeliveryChannelT = ReportDeliveryChannel>
    void SetReportDeliveryChannel(ReportDeliveryChannelT&& value) { m_reportDeliveryChannelHasBeenSet = true; m_reportDeliveryChannel = std::forward<ReportDeliveryChannelT>(value); }
    template<typename ReportDeliveryChannelT = ReportDeliveryChannel>
    ReportPlan& WithReportDeliveryChannel(ReportDeliveryChannelT&& value) { SetReportDeliveryChannel(std::forward<ReportDeliveryChannelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment status of a report plan. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS |
     * COMPLETED</code> </p>
     */
    inline const Aws::String& GetDeploymentStatus() const { return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    template<typename DeploymentStatusT = Aws::String>
    void SetDeploymentStatus(DeploymentStatusT&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::forward<DeploymentStatusT>(value); }
    template<typename DeploymentStatusT = Aws::String>
    ReportPlan& WithDeploymentStatus(DeploymentStatusT&& value) { SetDeploymentStatus(std::forward<DeploymentStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a report plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ReportPlan& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a report job associated with this report plan last
     * attempted to run, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastAttemptedExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAttemptedExecutionTime() const { return m_lastAttemptedExecutionTime; }
    inline bool LastAttemptedExecutionTimeHasBeenSet() const { return m_lastAttemptedExecutionTimeHasBeenSet; }
    template<typename LastAttemptedExecutionTimeT = Aws::Utils::DateTime>
    void SetLastAttemptedExecutionTime(LastAttemptedExecutionTimeT&& value) { m_lastAttemptedExecutionTimeHasBeenSet = true; m_lastAttemptedExecutionTime = std::forward<LastAttemptedExecutionTimeT>(value); }
    template<typename LastAttemptedExecutionTimeT = Aws::Utils::DateTime>
    ReportPlan& WithLastAttemptedExecutionTime(LastAttemptedExecutionTimeT&& value) { SetLastAttemptedExecutionTime(std::forward<LastAttemptedExecutionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a report job associated with this report plan last
     * successfully ran, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastSuccessfulExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulExecutionTime() const { return m_lastSuccessfulExecutionTime; }
    inline bool LastSuccessfulExecutionTimeHasBeenSet() const { return m_lastSuccessfulExecutionTimeHasBeenSet; }
    template<typename LastSuccessfulExecutionTimeT = Aws::Utils::DateTime>
    void SetLastSuccessfulExecutionTime(LastSuccessfulExecutionTimeT&& value) { m_lastSuccessfulExecutionTimeHasBeenSet = true; m_lastSuccessfulExecutionTime = std::forward<LastSuccessfulExecutionTimeT>(value); }
    template<typename LastSuccessfulExecutionTimeT = Aws::Utils::DateTime>
    ReportPlan& WithLastSuccessfulExecutionTime(LastSuccessfulExecutionTimeT&& value) { SetLastSuccessfulExecutionTime(std::forward<LastSuccessfulExecutionTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportPlanArn;
    bool m_reportPlanArnHasBeenSet = false;

    Aws::String m_reportPlanName;
    bool m_reportPlanNameHasBeenSet = false;

    Aws::String m_reportPlanDescription;
    bool m_reportPlanDescriptionHasBeenSet = false;

    ReportSetting m_reportSetting;
    bool m_reportSettingHasBeenSet = false;

    ReportDeliveryChannel m_reportDeliveryChannel;
    bool m_reportDeliveryChannelHasBeenSet = false;

    Aws::String m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAttemptedExecutionTime{};
    bool m_lastAttemptedExecutionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulExecutionTime{};
    bool m_lastSuccessfulExecutionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
