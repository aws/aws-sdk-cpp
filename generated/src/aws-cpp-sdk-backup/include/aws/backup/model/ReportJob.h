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
    AWS_BACKUP_API ReportJob() = default;
    AWS_BACKUP_API ReportJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ReportJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a report job. A unique, randomly generated, Unicode, UTF-8
     * encoded string that is at most 1,024 bytes long. Report job IDs cannot be
     * edited.</p>
     */
    inline const Aws::String& GetReportJobId() const { return m_reportJobId; }
    inline bool ReportJobIdHasBeenSet() const { return m_reportJobIdHasBeenSet; }
    template<typename ReportJobIdT = Aws::String>
    void SetReportJobId(ReportJobIdT&& value) { m_reportJobIdHasBeenSet = true; m_reportJobId = std::forward<ReportJobIdT>(value); }
    template<typename ReportJobIdT = Aws::String>
    ReportJob& WithReportJobId(ReportJobIdT&& value) { SetReportJobId(std::forward<ReportJobIdT>(value)); return *this;}
    ///@}

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
    ReportJob& WithReportPlanArn(ReportPlanArnT&& value) { SetReportPlanArn(std::forward<ReportPlanArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are: </p> <p>
     * <code>RESOURCE_COMPLIANCE_REPORT | CONTROL_COMPLIANCE_REPORT | BACKUP_JOB_REPORT
     * | COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline const Aws::String& GetReportTemplate() const { return m_reportTemplate; }
    inline bool ReportTemplateHasBeenSet() const { return m_reportTemplateHasBeenSet; }
    template<typename ReportTemplateT = Aws::String>
    void SetReportTemplate(ReportTemplateT&& value) { m_reportTemplateHasBeenSet = true; m_reportTemplate = std::forward<ReportTemplateT>(value); }
    template<typename ReportTemplateT = Aws::String>
    ReportJob& WithReportTemplate(ReportTemplateT&& value) { SetReportTemplate(std::forward<ReportTemplateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a report job is created, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CreationTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ReportJob& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that a report job is completed, in Unix format and
     * Coordinated Universal Time (UTC). The value of <code>CompletionTime</code> is
     * accurate to milliseconds. For example, the value 1516925490.087 represents
     * Friday, January 26, 2018 12:11:30.087 AM.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    ReportJob& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of a report job. The statuses are:</p> <p> <code>CREATED | RUNNING
     * | COMPLETED | FAILED</code> </p> <p> <code>COMPLETED</code> means that the
     * report is available for your review at your designated destination. If the
     * status is <code>FAILED</code>, review the <code>StatusMessage</code> for the
     * reason.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    ReportJob& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A message explaining the status of the report job.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ReportJob& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket name and S3 keys for the destination where the report job
     * publishes the report.</p>
     */
    inline const ReportDestination& GetReportDestination() const { return m_reportDestination; }
    inline bool ReportDestinationHasBeenSet() const { return m_reportDestinationHasBeenSet; }
    template<typename ReportDestinationT = ReportDestination>
    void SetReportDestination(ReportDestinationT&& value) { m_reportDestinationHasBeenSet = true; m_reportDestination = std::forward<ReportDestinationT>(value); }
    template<typename ReportDestinationT = ReportDestination>
    ReportJob& WithReportDestination(ReportDestinationT&& value) { SetReportDestination(std::forward<ReportDestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reportJobId;
    bool m_reportJobIdHasBeenSet = false;

    Aws::String m_reportPlanArn;
    bool m_reportPlanArnHasBeenSet = false;

    Aws::String m_reportTemplate;
    bool m_reportTemplateHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
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
