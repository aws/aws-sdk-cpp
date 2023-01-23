/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/ReportFormat.h>
#include <aws/fsx/model/ReportScope.h>
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
namespace FSx
{
namespace Model
{

  /**
   * <p>Provides a report detailing the data repository task results of the files
   * processed that match the criteria specified in the report <code>Scope</code>
   * parameter. FSx delivers the report to the file system's linked data repository
   * in Amazon S3, using the path specified in the report <code>Path</code>
   * parameter. You can specify whether or not a report gets generated for a task
   * using the <code>Enabled</code> parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CompletionReport">AWS
   * API Reference</a></p>
   */
  class CompletionReport
  {
  public:
    AWS_FSX_API CompletionReport();
    AWS_FSX_API CompletionReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API CompletionReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set <code>Enabled</code> to <code>True</code> to generate a
     * <code>CompletionReport</code> when the task completes. If set to
     * <code>true</code>, then you need to provide a report <code>Scope</code>,
     * <code>Path</code>, and <code>Format</code>. Set <code>Enabled</code> to
     * <code>False</code> if you do not want a <code>CompletionReport</code> generated
     * when the task completes.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Set <code>Enabled</code> to <code>True</code> to generate a
     * <code>CompletionReport</code> when the task completes. If set to
     * <code>true</code>, then you need to provide a report <code>Scope</code>,
     * <code>Path</code>, and <code>Format</code>. Set <code>Enabled</code> to
     * <code>False</code> if you do not want a <code>CompletionReport</code> generated
     * when the task completes.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Set <code>Enabled</code> to <code>True</code> to generate a
     * <code>CompletionReport</code> when the task completes. If set to
     * <code>true</code>, then you need to provide a report <code>Scope</code>,
     * <code>Path</code>, and <code>Format</code>. Set <code>Enabled</code> to
     * <code>False</code> if you do not want a <code>CompletionReport</code> generated
     * when the task completes.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Set <code>Enabled</code> to <code>True</code> to generate a
     * <code>CompletionReport</code> when the task completes. If set to
     * <code>true</code>, then you need to provide a report <code>Scope</code>,
     * <code>Path</code>, and <code>Format</code>. Set <code>Enabled</code> to
     * <code>False</code> if you do not want a <code>CompletionReport</code> generated
     * when the task completes.</p>
     */
    inline CompletionReport& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * location of the report on the file system's linked S3 data repository. An
     * absolute path that defines where the completion report will be stored in the
     * destination location. The <code>Path</code> you provide must be located within
     * the file system’s ExportPath. An example <code>Path</code> value is
     * "s3://myBucket/myExportPath/optionalPrefix". The report provides the following
     * information for each file in the report: FilePath, FileStatus, and ErrorCode. To
     * learn more about a file system's <code>ExportPath</code>, see . </p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * location of the report on the file system's linked S3 data repository. An
     * absolute path that defines where the completion report will be stored in the
     * destination location. The <code>Path</code> you provide must be located within
     * the file system’s ExportPath. An example <code>Path</code> value is
     * "s3://myBucket/myExportPath/optionalPrefix". The report provides the following
     * information for each file in the report: FilePath, FileStatus, and ErrorCode. To
     * learn more about a file system's <code>ExportPath</code>, see . </p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * location of the report on the file system's linked S3 data repository. An
     * absolute path that defines where the completion report will be stored in the
     * destination location. The <code>Path</code> you provide must be located within
     * the file system’s ExportPath. An example <code>Path</code> value is
     * "s3://myBucket/myExportPath/optionalPrefix". The report provides the following
     * information for each file in the report: FilePath, FileStatus, and ErrorCode. To
     * learn more about a file system's <code>ExportPath</code>, see . </p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * location of the report on the file system's linked S3 data repository. An
     * absolute path that defines where the completion report will be stored in the
     * destination location. The <code>Path</code> you provide must be located within
     * the file system’s ExportPath. An example <code>Path</code> value is
     * "s3://myBucket/myExportPath/optionalPrefix". The report provides the following
     * information for each file in the report: FilePath, FileStatus, and ErrorCode. To
     * learn more about a file system's <code>ExportPath</code>, see . </p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * location of the report on the file system's linked S3 data repository. An
     * absolute path that defines where the completion report will be stored in the
     * destination location. The <code>Path</code> you provide must be located within
     * the file system’s ExportPath. An example <code>Path</code> value is
     * "s3://myBucket/myExportPath/optionalPrefix". The report provides the following
     * information for each file in the report: FilePath, FileStatus, and ErrorCode. To
     * learn more about a file system's <code>ExportPath</code>, see . </p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * location of the report on the file system's linked S3 data repository. An
     * absolute path that defines where the completion report will be stored in the
     * destination location. The <code>Path</code> you provide must be located within
     * the file system’s ExportPath. An example <code>Path</code> value is
     * "s3://myBucket/myExportPath/optionalPrefix". The report provides the following
     * information for each file in the report: FilePath, FileStatus, and ErrorCode. To
     * learn more about a file system's <code>ExportPath</code>, see . </p>
     */
    inline CompletionReport& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * location of the report on the file system's linked S3 data repository. An
     * absolute path that defines where the completion report will be stored in the
     * destination location. The <code>Path</code> you provide must be located within
     * the file system’s ExportPath. An example <code>Path</code> value is
     * "s3://myBucket/myExportPath/optionalPrefix". The report provides the following
     * information for each file in the report: FilePath, FileStatus, and ErrorCode. To
     * learn more about a file system's <code>ExportPath</code>, see . </p>
     */
    inline CompletionReport& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * location of the report on the file system's linked S3 data repository. An
     * absolute path that defines where the completion report will be stored in the
     * destination location. The <code>Path</code> you provide must be located within
     * the file system’s ExportPath. An example <code>Path</code> value is
     * "s3://myBucket/myExportPath/optionalPrefix". The report provides the following
     * information for each file in the report: FilePath, FileStatus, and ErrorCode. To
     * learn more about a file system's <code>ExportPath</code>, see . </p>
     */
    inline CompletionReport& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * format of the <code>CompletionReport</code>. <code>REPORT_CSV_20191124</code> is
     * the only format currently supported. When <code>Format</code> is set to
     * <code>REPORT_CSV_20191124</code>, the <code>CompletionReport</code> is provided
     * in CSV format, and is delivered to <code>{path}/task-{id}/failures.csv</code>.
     * </p>
     */
    inline const ReportFormat& GetFormat() const{ return m_format; }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * format of the <code>CompletionReport</code>. <code>REPORT_CSV_20191124</code> is
     * the only format currently supported. When <code>Format</code> is set to
     * <code>REPORT_CSV_20191124</code>, the <code>CompletionReport</code> is provided
     * in CSV format, and is delivered to <code>{path}/task-{id}/failures.csv</code>.
     * </p>
     */
    inline bool FormatHasBeenSet() const { return m_formatHasBeenSet; }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * format of the <code>CompletionReport</code>. <code>REPORT_CSV_20191124</code> is
     * the only format currently supported. When <code>Format</code> is set to
     * <code>REPORT_CSV_20191124</code>, the <code>CompletionReport</code> is provided
     * in CSV format, and is delivered to <code>{path}/task-{id}/failures.csv</code>.
     * </p>
     */
    inline void SetFormat(const ReportFormat& value) { m_formatHasBeenSet = true; m_format = value; }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * format of the <code>CompletionReport</code>. <code>REPORT_CSV_20191124</code> is
     * the only format currently supported. When <code>Format</code> is set to
     * <code>REPORT_CSV_20191124</code>, the <code>CompletionReport</code> is provided
     * in CSV format, and is delivered to <code>{path}/task-{id}/failures.csv</code>.
     * </p>
     */
    inline void SetFormat(ReportFormat&& value) { m_formatHasBeenSet = true; m_format = std::move(value); }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * format of the <code>CompletionReport</code>. <code>REPORT_CSV_20191124</code> is
     * the only format currently supported. When <code>Format</code> is set to
     * <code>REPORT_CSV_20191124</code>, the <code>CompletionReport</code> is provided
     * in CSV format, and is delivered to <code>{path}/task-{id}/failures.csv</code>.
     * </p>
     */
    inline CompletionReport& WithFormat(const ReportFormat& value) { SetFormat(value); return *this;}

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * format of the <code>CompletionReport</code>. <code>REPORT_CSV_20191124</code> is
     * the only format currently supported. When <code>Format</code> is set to
     * <code>REPORT_CSV_20191124</code>, the <code>CompletionReport</code> is provided
     * in CSV format, and is delivered to <code>{path}/task-{id}/failures.csv</code>.
     * </p>
     */
    inline CompletionReport& WithFormat(ReportFormat&& value) { SetFormat(std::move(value)); return *this;}


    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * scope of the <code>CompletionReport</code>; <code>FAILED_FILES_ONLY</code> is
     * the only scope currently supported. When <code>Scope</code> is set to
     * <code>FAILED_FILES_ONLY</code>, the <code>CompletionReport</code> only contains
     * information about files that the data repository task failed to process.</p>
     */
    inline const ReportScope& GetScope() const{ return m_scope; }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * scope of the <code>CompletionReport</code>; <code>FAILED_FILES_ONLY</code> is
     * the only scope currently supported. When <code>Scope</code> is set to
     * <code>FAILED_FILES_ONLY</code>, the <code>CompletionReport</code> only contains
     * information about files that the data repository task failed to process.</p>
     */
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * scope of the <code>CompletionReport</code>; <code>FAILED_FILES_ONLY</code> is
     * the only scope currently supported. When <code>Scope</code> is set to
     * <code>FAILED_FILES_ONLY</code>, the <code>CompletionReport</code> only contains
     * information about files that the data repository task failed to process.</p>
     */
    inline void SetScope(const ReportScope& value) { m_scopeHasBeenSet = true; m_scope = value; }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * scope of the <code>CompletionReport</code>; <code>FAILED_FILES_ONLY</code> is
     * the only scope currently supported. When <code>Scope</code> is set to
     * <code>FAILED_FILES_ONLY</code>, the <code>CompletionReport</code> only contains
     * information about files that the data repository task failed to process.</p>
     */
    inline void SetScope(ReportScope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * scope of the <code>CompletionReport</code>; <code>FAILED_FILES_ONLY</code> is
     * the only scope currently supported. When <code>Scope</code> is set to
     * <code>FAILED_FILES_ONLY</code>, the <code>CompletionReport</code> only contains
     * information about files that the data repository task failed to process.</p>
     */
    inline CompletionReport& WithScope(const ReportScope& value) { SetScope(value); return *this;}

    /**
     * <p>Required if <code>Enabled</code> is set to <code>true</code>. Specifies the
     * scope of the <code>CompletionReport</code>; <code>FAILED_FILES_ONLY</code> is
     * the only scope currently supported. When <code>Scope</code> is set to
     * <code>FAILED_FILES_ONLY</code>, the <code>CompletionReport</code> only contains
     * information about files that the data repository task failed to process.</p>
     */
    inline CompletionReport& WithScope(ReportScope&& value) { SetScope(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::String m_path;
    bool m_pathHasBeenSet = false;

    ReportFormat m_format;
    bool m_formatHasBeenSet = false;

    ReportScope m_scope;
    bool m_scopeHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
