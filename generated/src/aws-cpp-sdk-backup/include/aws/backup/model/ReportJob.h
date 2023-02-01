/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/backup/model/ReportDestination.h>
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
   * <p>Contains detailed information about a report job. A report job compiles a
   * report based on a report plan and publishes it to Amazon S3.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ReportJob">AWS
   * API Reference</a></p>
   */
  class ReportJob
  {
  public:
    AWS_BACKUP_API ReportJob();
    AWS_BACKUP_API ReportJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ReportJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for a report job. A unique, randomly generated, Unicode, UTF-8
     * encoded string that is at most 1,024 bytes long. Report job IDs cannot be
     * edited.</p>
     */
    inline const Aws::String& GetReportJobId() const{ return m_reportJobId; }

    /**
     * <p>The identifier for a report job. A unique, randomly generated, Unicode, UTF-8
     * encoded string that is at most 1,024 bytes long. Report job IDs cannot be
     * edited.</p>
     */
    inline bool ReportJobIdHasBeenSet() const { return m_reportJobIdHasBeenSet; }

    /**
     * <p>The identifier for a report job. A unique, randomly generated, Unicode, UTF-8
     * encoded string that is at most 1,024 bytes long. Report job IDs cannot be
     * edited.</p>
     */
    inline void SetReportJobId(const Aws::String& value) { m_reportJobIdHasBeenSet = true; m_reportJobId = value; }

    /**
     * <p>The identifier for a report job. A unique, randomly generated, Unicode, UTF-8
     * encoded string that is at most 1,024 bytes long. Report job IDs cannot be
     * edited.</p>
     */
    inline void SetReportJobId(Aws::String&& value) { m_reportJobIdHasBeenSet = true; m_reportJobId = std::move(value); }

    /**
     * <p>The identifier for a report job. A unique, randomly generated, Unicode, UTF-8
     * encoded string that is at most 1,024 bytes long. Report job IDs cannot be
     * edited.</p>
     */
    inline void SetReportJobId(const char* value) { m_reportJobIdHasBeenSet = true; m_reportJobId.assign(value); }

    /**
     * <p>The identifier for a report job. A unique, randomly generated, Unicode, UTF-8
     * encoded string that is at most 1,024 bytes long. Report job IDs cannot be
     * edited.</p>
     */
    inline ReportJob& WithReportJobId(const Aws::String& value) { SetReportJobId(value); return *this;}

    /**
     * <p>The identifier for a report job. A unique, randomly generated, Unicode, UTF-8
     * encoded string that is at most 1,024 bytes long. Report job IDs cannot be
     * edited.</p>
     */
    inline ReportJob& WithReportJobId(Aws::String&& value) { SetReportJobId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a report job. A unique, randomly generated, Unicode, UTF-8
     * encoded string that is at most 1,024 bytes long. Report job IDs cannot be
     * edited.</p>
     */
    inline ReportJob& WithReportJobId(const char* value) { SetReportJobId(value); return *this;}


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
    inline ReportJob& WithReportPlanArn(const Aws::String& value) { SetReportPlanArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline ReportJob& WithReportPlanArn(Aws::String&& value) { SetReportPlanArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that uniquely identifies a resource. The format
     * of the ARN depends on the resource type.</p>
     */
    inline ReportJob& WithReportPlanArn(const char* value) { SetReportPlanArn(value); return *this;}


    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are: </p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline const Aws::String& GetReportTemplate() const{ return m_reportTemplate; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are: </p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline bool ReportTemplateHasBeenSet() const { return m_reportTemplateHasBeenSet; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are: </p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline void SetReportTemplate(const Aws::String& value) { m_reportTemplateHasBeenSet = true; m_reportTemplate = value; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are: </p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline void SetReportTemplate(Aws::String&& value) { m_reportTemplateHasBeenSet = true; m_reportTemplate = std::move(value); }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are: </p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline void SetReportTemplate(const char* value) { m_reportTemplateHasBeenSet = true; m_reportTemplate.assign(value); }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are: </p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline ReportJob& WithReportTemplate(const Aws::String& value) { SetReportTemplate(value); return *this;}

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are: </p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline ReportJob& WithReportTemplate(Aws::String&& value) { SetReportTemplate(std::move(value)); return *this;}

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are: </p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline ReportJob& WithReportTemplate(const char* value) { SetReportTemplate(value); return *this;}


    /**
     * <p>The date and time that a report job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time that a report job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time that a report job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time that a report job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time that a report job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline ReportJob& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time that a report job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline ReportJob& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that a report job is completed, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CompletionTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const{ return m_completionTime; }

    /**
     * <p>The date and time that a report job is completed, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CompletionTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }

    /**
     * <p>The date and time that a report job is completed, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CompletionTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionTime(const Aws::Utils::DateTime& value) { m_completionTimeHasBeenSet = true; m_completionTime = value; }

    /**
     * <p>The date and time that a report job is completed, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CompletionTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline void SetCompletionTime(Aws::Utils::DateTime&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::move(value); }

    /**
     * <p>The date and time that a report job is completed, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CompletionTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline ReportJob& WithCompletionTime(const Aws::Utils::DateTime& value) { SetCompletionTime(value); return *this;}

    /**
     * <p>The date and time that a report job is completed, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CompletionTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline ReportJob& WithCompletionTime(Aws::Utils::DateTime&& value) { SetCompletionTime(std::move(value)); return *this;}


    /**
     * <p>The status of a report job. The statuses are:</p> <p> <code>CREATED | RUNNING
     * | COMPLETED | FAILED</code> </p> <p> <code>COMPLETED</code> means that the
     * report is available for your review at your designated destination. If the
     * status is <code>FAILED</code>, review the <code>StatusMessage</code> for the
     * reason.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of a report job. The statuses are:</p> <p> <code>CREATED | RUNNING
     * | COMPLETED | FAILED</code> </p> <p> <code>COMPLETED</code> means that the
     * report is available for your review at your designated destination. If the
     * status is <code>FAILED</code>, review the <code>StatusMessage</code> for the
     * reason.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of a report job. The statuses are:</p> <p> <code>CREATED | RUNNING
     * | COMPLETED | FAILED</code> </p> <p> <code>COMPLETED</code> means that the
     * report is available for your review at your designated destination. If the
     * status is <code>FAILED</code>, review the <code>StatusMessage</code> for the
     * reason.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of a report job. The statuses are:</p> <p> <code>CREATED | RUNNING
     * | COMPLETED | FAILED</code> </p> <p> <code>COMPLETED</code> means that the
     * report is available for your review at your designated destination. If the
     * status is <code>FAILED</code>, review the <code>StatusMessage</code> for the
     * reason.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of a report job. The statuses are:</p> <p> <code>CREATED | RUNNING
     * | COMPLETED | FAILED</code> </p> <p> <code>COMPLETED</code> means that the
     * report is available for your review at your designated destination. If the
     * status is <code>FAILED</code>, review the <code>StatusMessage</code> for the
     * reason.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of a report job. The statuses are:</p> <p> <code>CREATED | RUNNING
     * | COMPLETED | FAILED</code> </p> <p> <code>COMPLETED</code> means that the
     * report is available for your review at your designated destination. If the
     * status is <code>FAILED</code>, review the <code>StatusMessage</code> for the
     * reason.</p>
     */
    inline ReportJob& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of a report job. The statuses are:</p> <p> <code>CREATED | RUNNING
     * | COMPLETED | FAILED</code> </p> <p> <code>COMPLETED</code> means that the
     * report is available for your review at your designated destination. If the
     * status is <code>FAILED</code>, review the <code>StatusMessage</code> for the
     * reason.</p>
     */
    inline ReportJob& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of a report job. The statuses are:</p> <p> <code>CREATED | RUNNING
     * | COMPLETED | FAILED</code> </p> <p> <code>COMPLETED</code> means that the
     * report is available for your review at your designated destination. If the
     * status is <code>FAILED</code>, review the <code>StatusMessage</code> for the
     * reason.</p>
     */
    inline ReportJob& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>A message explaining the status of the report job.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>A message explaining the status of the report job.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>A message explaining the status of the report job.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>A message explaining the status of the report job.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>A message explaining the status of the report job.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>A message explaining the status of the report job.</p>
     */
    inline ReportJob& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>A message explaining the status of the report job.</p>
     */
    inline ReportJob& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>A message explaining the status of the report job.</p>
     */
    inline ReportJob& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The S3 bucket name and S3 keys for the destination where the report job
     * publishes the report.</p>
     */
    inline const ReportDestination& GetReportDestination() const{ return m_reportDestination; }

    /**
     * <p>The S3 bucket name and S3 keys for the destination where the report job
     * publishes the report.</p>
     */
    inline bool ReportDestinationHasBeenSet() const { return m_reportDestinationHasBeenSet; }

    /**
     * <p>The S3 bucket name and S3 keys for the destination where the report job
     * publishes the report.</p>
     */
    inline void SetReportDestination(const ReportDestination& value) { m_reportDestinationHasBeenSet = true; m_reportDestination = value; }

    /**
     * <p>The S3 bucket name and S3 keys for the destination where the report job
     * publishes the report.</p>
     */
    inline void SetReportDestination(ReportDestination&& value) { m_reportDestinationHasBeenSet = true; m_reportDestination = std::move(value); }

    /**
     * <p>The S3 bucket name and S3 keys for the destination where the report job
     * publishes the report.</p>
     */
    inline ReportJob& WithReportDestination(const ReportDestination& value) { SetReportDestination(value); return *this;}

    /**
     * <p>The S3 bucket name and S3 keys for the destination where the report job
     * publishes the report.</p>
     */
    inline ReportJob& WithReportDestination(ReportDestination&& value) { SetReportDestination(std::move(value)); return *this;}

  private:

    Aws::String m_reportJobId;
    bool m_reportJobIdHasBeenSet = false;

    Aws::String m_reportPlanArn;
    bool m_reportPlanArnHasBeenSet = false;

    Aws::String m_reportTemplate;
    bool m_reportTemplateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime;
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ReportDestination m_reportDestination;
    bool m_reportDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
