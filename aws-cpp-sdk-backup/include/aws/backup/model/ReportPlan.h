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
    AWS_BACKUP_API ReportPlan();
    AWS_BACKUP_API ReportPlan(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ReportPlan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline const Aws::String& GetReportPlanArn() const{ return m_reportPlanArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline bool ReportPlanArnHasBeenSet() const { return m_reportPlanArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetReportPlanArn(const Aws::String& value) { m_reportPlanArnHasBeenSet = true; m_reportPlanArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetReportPlanArn(Aws::String&& value) { m_reportPlanArnHasBeenSet = true; m_reportPlanArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline void SetReportPlanArn(const char* value) { m_reportPlanArnHasBeenSet = true; m_reportPlanArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline ReportPlan& WithReportPlanArn(const Aws::String& value) { SetReportPlanArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline ReportPlan& WithReportPlanArn(Aws::String&& value) { SetReportPlanArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline ReportPlan& WithReportPlanArn(const char* value) { SetReportPlanArn(value); return *this;}


    /**
     * <p>The unique name of the report plan. This name is between 1 and 256 characters
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetReportPlanName() const{ return m_reportPlanName; }

    /**
     * <p>The unique name of the report plan. This name is between 1 and 256 characters
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline bool ReportPlanNameHasBeenSet() const { return m_reportPlanNameHasBeenSet; }

    /**
     * <p>The unique name of the report plan. This name is between 1 and 256 characters
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline void SetReportPlanName(const Aws::String& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = value; }

    /**
     * <p>The unique name of the report plan. This name is between 1 and 256 characters
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline void SetReportPlanName(Aws::String&& value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName = std::move(value); }

    /**
     * <p>The unique name of the report plan. This name is between 1 and 256 characters
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline void SetReportPlanName(const char* value) { m_reportPlanNameHasBeenSet = true; m_reportPlanName.assign(value); }

    /**
     * <p>The unique name of the report plan. This name is between 1 and 256 characters
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline ReportPlan& WithReportPlanName(const Aws::String& value) { SetReportPlanName(value); return *this;}

    /**
     * <p>The unique name of the report plan. This name is between 1 and 256 characters
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline ReportPlan& WithReportPlanName(Aws::String&& value) { SetReportPlanName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the report plan. This name is between 1 and 256 characters
     * starting with a letter, and consisting of letters (a-z, A-Z), numbers (0-9), and
     * underscores (_).</p>
     */
    inline ReportPlan& WithReportPlanName(const char* value) { SetReportPlanName(value); return *this;}


    /**
     * <p>An optional description of the report plan with a maximum 1,024
     * characters.</p>
     */
    inline const Aws::String& GetReportPlanDescription() const{ return m_reportPlanDescription; }

    /**
     * <p>An optional description of the report plan with a maximum 1,024
     * characters.</p>
     */
    inline bool ReportPlanDescriptionHasBeenSet() const { return m_reportPlanDescriptionHasBeenSet; }

    /**
     * <p>An optional description of the report plan with a maximum 1,024
     * characters.</p>
     */
    inline void SetReportPlanDescription(const Aws::String& value) { m_reportPlanDescriptionHasBeenSet = true; m_reportPlanDescription = value; }

    /**
     * <p>An optional description of the report plan with a maximum 1,024
     * characters.</p>
     */
    inline void SetReportPlanDescription(Aws::String&& value) { m_reportPlanDescriptionHasBeenSet = true; m_reportPlanDescription = std::move(value); }

    /**
     * <p>An optional description of the report plan with a maximum 1,024
     * characters.</p>
     */
    inline void SetReportPlanDescription(const char* value) { m_reportPlanDescriptionHasBeenSet = true; m_reportPlanDescription.assign(value); }

    /**
     * <p>An optional description of the report plan with a maximum 1,024
     * characters.</p>
     */
    inline ReportPlan& WithReportPlanDescription(const Aws::String& value) { SetReportPlanDescription(value); return *this;}

    /**
     * <p>An optional description of the report plan with a maximum 1,024
     * characters.</p>
     */
    inline ReportPlan& WithReportPlanDescription(Aws::String&& value) { SetReportPlanDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description of the report plan with a maximum 1,024
     * characters.</p>
     */
    inline ReportPlan& WithReportPlanDescription(const char* value) { SetReportPlanDescription(value); return *this;}


    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline const ReportSetting& GetReportSetting() const{ return m_reportSetting; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline bool ReportSettingHasBeenSet() const { return m_reportSettingHasBeenSet; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline void SetReportSetting(const ReportSetting& value) { m_reportSettingHasBeenSet = true; m_reportSetting = value; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline void SetReportSetting(ReportSetting&& value) { m_reportSettingHasBeenSet = true; m_reportSetting = std::move(value); }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline ReportPlan& WithReportSetting(const ReportSetting& value) { SetReportSetting(value); return *this;}

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p> <p>If the report template is
     * <code>RESOURCE_COMPLIANCE_REPORT</code> or
     * <code>CONTROL_COMPLIANCE_REPORT</code>, this API resource also describes the
     * report coverage by Amazon Web Services Regions and frameworks.</p>
     */
    inline ReportPlan& WithReportSetting(ReportSetting&& value) { SetReportSetting(std::move(value)); return *this;}


    /**
     * <p>Contains information about where and how to deliver your reports,
     * specifically your Amazon S3 bucket name, S3 key prefix, and the formats of your
     * reports.</p>
     */
    inline const ReportDeliveryChannel& GetReportDeliveryChannel() const{ return m_reportDeliveryChannel; }

    /**
     * <p>Contains information about where and how to deliver your reports,
     * specifically your Amazon S3 bucket name, S3 key prefix, and the formats of your
     * reports.</p>
     */
    inline bool ReportDeliveryChannelHasBeenSet() const { return m_reportDeliveryChannelHasBeenSet; }

    /**
     * <p>Contains information about where and how to deliver your reports,
     * specifically your Amazon S3 bucket name, S3 key prefix, and the formats of your
     * reports.</p>
     */
    inline void SetReportDeliveryChannel(const ReportDeliveryChannel& value) { m_reportDeliveryChannelHasBeenSet = true; m_reportDeliveryChannel = value; }

    /**
     * <p>Contains information about where and how to deliver your reports,
     * specifically your Amazon S3 bucket name, S3 key prefix, and the formats of your
     * reports.</p>
     */
    inline void SetReportDeliveryChannel(ReportDeliveryChannel&& value) { m_reportDeliveryChannelHasBeenSet = true; m_reportDeliveryChannel = std::move(value); }

    /**
     * <p>Contains information about where and how to deliver your reports,
     * specifically your Amazon S3 bucket name, S3 key prefix, and the formats of your
     * reports.</p>
     */
    inline ReportPlan& WithReportDeliveryChannel(const ReportDeliveryChannel& value) { SetReportDeliveryChannel(value); return *this;}

    /**
     * <p>Contains information about where and how to deliver your reports,
     * specifically your Amazon S3 bucket name, S3 key prefix, and the formats of your
     * reports.</p>
     */
    inline ReportPlan& WithReportDeliveryChannel(ReportDeliveryChannel&& value) { SetReportDeliveryChannel(std::move(value)); return *this;}


    /**
     * <p>The deployment status of a report plan. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS |
     * COMPLETED</code> </p>
     */
    inline const Aws::String& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>The deployment status of a report plan. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS |
     * COMPLETED</code> </p>
     */
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }

    /**
     * <p>The deployment status of a report plan. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS |
     * COMPLETED</code> </p>
     */
    inline void SetDeploymentStatus(const Aws::String& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }

    /**
     * <p>The deployment status of a report plan. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS |
     * COMPLETED</code> </p>
     */
    inline void SetDeploymentStatus(Aws::String&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }

    /**
     * <p>The deployment status of a report plan. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS |
     * COMPLETED</code> </p>
     */
    inline void SetDeploymentStatus(const char* value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus.assign(value); }

    /**
     * <p>The deployment status of a report plan. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS |
     * COMPLETED</code> </p>
     */
    inline ReportPlan& WithDeploymentStatus(const Aws::String& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>The deployment status of a report plan. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS |
     * COMPLETED</code> </p>
     */
    inline ReportPlan& WithDeploymentStatus(Aws::String&& value) { SetDeploymentStatus(std::move(value)); return *this;}

    /**
     * <p>The deployment status of a report plan. The statuses are:</p> <p>
     * <code>CREATE_IN_PROGRESS | UPDATE_IN_PROGRESS | DELETE_IN_PROGRESS |
     * COMPLETED</code> </p>
     */
    inline ReportPlan& WithDeploymentStatus(const char* value) { SetDeploymentStatus(value); return *this;}


    /**
     * <p>The date and time that a report plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that a report plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that a report plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that a report plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that a report plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline ReportPlan& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that a report plan is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline ReportPlan& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that a report job associated with this report plan last
     * attempted to run, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastAttemptedExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAttemptedExecutionTime() const{ return m_lastAttemptedExecutionTime; }

    /**
     * <p>The date and time that a report job associated with this report plan last
     * attempted to run, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastAttemptedExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline bool LastAttemptedExecutionTimeHasBeenSet() const { return m_lastAttemptedExecutionTimeHasBeenSet; }

    /**
     * <p>The date and time that a report job associated with this report plan last
     * attempted to run, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastAttemptedExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetLastAttemptedExecutionTime(const Aws::Utils::DateTime& value) { m_lastAttemptedExecutionTimeHasBeenSet = true; m_lastAttemptedExecutionTime = value; }

    /**
     * <p>The date and time that a report job associated with this report plan last
     * attempted to run, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastAttemptedExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetLastAttemptedExecutionTime(Aws::Utils::DateTime&& value) { m_lastAttemptedExecutionTimeHasBeenSet = true; m_lastAttemptedExecutionTime = std::move(value); }

    /**
     * <p>The date and time that a report job associated with this report plan last
     * attempted to run, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastAttemptedExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline ReportPlan& WithLastAttemptedExecutionTime(const Aws::Utils::DateTime& value) { SetLastAttemptedExecutionTime(value); return *this;}

    /**
     * <p>The date and time that a report job associated with this report plan last
     * attempted to run, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastAttemptedExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline ReportPlan& WithLastAttemptedExecutionTime(Aws::Utils::DateTime&& value) { SetLastAttemptedExecutionTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that a report job associated with this report plan last
     * successfully ran, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastSuccessfulExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulExecutionTime() const{ return m_lastSuccessfulExecutionTime; }

    /**
     * <p>The date and time that a report job associated with this report plan last
     * successfully ran, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastSuccessfulExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline bool LastSuccessfulExecutionTimeHasBeenSet() const { return m_lastSuccessfulExecutionTimeHasBeenSet; }

    /**
     * <p>The date and time that a report job associated with this report plan last
     * successfully ran, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastSuccessfulExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetLastSuccessfulExecutionTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulExecutionTimeHasBeenSet = true; m_lastSuccessfulExecutionTime = value; }

    /**
     * <p>The date and time that a report job associated with this report plan last
     * successfully ran, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastSuccessfulExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline void SetLastSuccessfulExecutionTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulExecutionTimeHasBeenSet = true; m_lastSuccessfulExecutionTime = std::move(value); }

    /**
     * <p>The date and time that a report job associated with this report plan last
     * successfully ran, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastSuccessfulExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline ReportPlan& WithLastSuccessfulExecutionTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulExecutionTime(value); return *this;}

    /**
     * <p>The date and time that a report job associated with this report plan last
     * successfully ran, in Unix format and Coordinated Universal Time (UTC). The value
     * of <code>LastSuccessfulExecutionTime</code> is accurate to milliseconds. For
     * example, the value 1516925490.087 represents Friday, January 26, 2018
     * 12:11:30.087 AM.</p>
     */
    inline ReportPlan& WithLastSuccessfulExecutionTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulExecutionTime(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastAttemptedExecutionTime;
    bool m_lastAttemptedExecutionTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulExecutionTime;
    bool m_lastSuccessfulExecutionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
