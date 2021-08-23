/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Contains detailed information about a report setting.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ReportSetting">AWS
   * API Reference</a></p>
   */
  class AWS_BACKUP_API ReportSetting
  {
  public:
    ReportSetting();
    ReportSetting(Aws::Utils::Json::JsonView jsonValue);
    ReportSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p> <code>BACKUP_JOB_REPORT |
     * COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline const Aws::String& GetReportTemplate() const{ return m_reportTemplate; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p> <code>BACKUP_JOB_REPORT |
     * COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline bool ReportTemplateHasBeenSet() const { return m_reportTemplateHasBeenSet; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p> <code>BACKUP_JOB_REPORT |
     * COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline void SetReportTemplate(const Aws::String& value) { m_reportTemplateHasBeenSet = true; m_reportTemplate = value; }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p> <code>BACKUP_JOB_REPORT |
     * COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline void SetReportTemplate(Aws::String&& value) { m_reportTemplateHasBeenSet = true; m_reportTemplate = std::move(value); }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p> <code>BACKUP_JOB_REPORT |
     * COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline void SetReportTemplate(const char* value) { m_reportTemplateHasBeenSet = true; m_reportTemplate.assign(value); }

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p> <code>BACKUP_JOB_REPORT |
     * COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline ReportSetting& WithReportTemplate(const Aws::String& value) { SetReportTemplate(value); return *this;}

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p> <code>BACKUP_JOB_REPORT |
     * COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline ReportSetting& WithReportTemplate(Aws::String&& value) { SetReportTemplate(std::move(value)); return *this;}

    /**
     * <p>Identifies the report template for the report. Reports are built using a
     * report template. The report templates are:</p> <p> <code>BACKUP_JOB_REPORT |
     * COPY_JOB_REPORT | RESTORE_JOB_REPORT</code> </p>
     */
    inline ReportSetting& WithReportTemplate(const char* value) { SetReportTemplate(value); return *this;}

  private:

    Aws::String m_reportTemplate;
    bool m_reportTemplateHasBeenSet;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
