/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportType.h>
#include <aws/codebuild/model/ReportStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codebuild/model/ReportExportConfig.h>
#include <aws/codebuild/model/TestReportSummary.h>
#include <aws/codebuild/model/CodeCoverageReportSummary.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the results from running a series of test cases during the
   * run of a build project. The test cases are specified in the buildspec for the
   * build project using one or more paths to the test case files. You can specify
   * any type of tests you want, such as unit tests, integration tests, and
   * functional tests. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/Report">AWS
   * API Reference</a></p>
   */
  class Report
  {
  public:
    AWS_CODEBUILD_API Report();
    AWS_CODEBUILD_API Report(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Report& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ARN of the report run. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the report run. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the report run. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the report run. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the report run. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the report run. </p>
     */
    inline Report& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the report run. </p>
     */
    inline Report& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the report run. </p>
     */
    inline Report& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The type of the report that was run.</p> <dl> <dt>CODE_COVERAGE</dt> <dd>
     * <p>A code coverage report.</p> </dd> <dt>TEST</dt> <dd> <p>A test report.</p>
     * </dd> </dl>
     */
    inline const ReportType& GetType() const{ return m_type; }

    /**
     * <p>The type of the report that was run.</p> <dl> <dt>CODE_COVERAGE</dt> <dd>
     * <p>A code coverage report.</p> </dd> <dt>TEST</dt> <dd> <p>A test report.</p>
     * </dd> </dl>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the report that was run.</p> <dl> <dt>CODE_COVERAGE</dt> <dd>
     * <p>A code coverage report.</p> </dd> <dt>TEST</dt> <dd> <p>A test report.</p>
     * </dd> </dl>
     */
    inline void SetType(const ReportType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the report that was run.</p> <dl> <dt>CODE_COVERAGE</dt> <dd>
     * <p>A code coverage report.</p> </dd> <dt>TEST</dt> <dd> <p>A test report.</p>
     * </dd> </dl>
     */
    inline void SetType(ReportType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the report that was run.</p> <dl> <dt>CODE_COVERAGE</dt> <dd>
     * <p>A code coverage report.</p> </dd> <dt>TEST</dt> <dd> <p>A test report.</p>
     * </dd> </dl>
     */
    inline Report& WithType(const ReportType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the report that was run.</p> <dl> <dt>CODE_COVERAGE</dt> <dd>
     * <p>A code coverage report.</p> </dd> <dt>TEST</dt> <dd> <p>A test report.</p>
     * </dd> </dl>
     */
    inline Report& WithType(ReportType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The name of the report that was run. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the report that was run. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the report that was run. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the report that was run. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the report that was run. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the report that was run. </p>
     */
    inline Report& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the report that was run. </p>
     */
    inline Report& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the report that was run. </p>
     */
    inline Report& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The ARN of the report group associated with this report. </p>
     */
    inline const Aws::String& GetReportGroupArn() const{ return m_reportGroupArn; }

    /**
     * <p> The ARN of the report group associated with this report. </p>
     */
    inline bool ReportGroupArnHasBeenSet() const { return m_reportGroupArnHasBeenSet; }

    /**
     * <p> The ARN of the report group associated with this report. </p>
     */
    inline void SetReportGroupArn(const Aws::String& value) { m_reportGroupArnHasBeenSet = true; m_reportGroupArn = value; }

    /**
     * <p> The ARN of the report group associated with this report. </p>
     */
    inline void SetReportGroupArn(Aws::String&& value) { m_reportGroupArnHasBeenSet = true; m_reportGroupArn = std::move(value); }

    /**
     * <p> The ARN of the report group associated with this report. </p>
     */
    inline void SetReportGroupArn(const char* value) { m_reportGroupArnHasBeenSet = true; m_reportGroupArn.assign(value); }

    /**
     * <p> The ARN of the report group associated with this report. </p>
     */
    inline Report& WithReportGroupArn(const Aws::String& value) { SetReportGroupArn(value); return *this;}

    /**
     * <p> The ARN of the report group associated with this report. </p>
     */
    inline Report& WithReportGroupArn(Aws::String&& value) { SetReportGroupArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the report group associated with this report. </p>
     */
    inline Report& WithReportGroupArn(const char* value) { SetReportGroupArn(value); return *this;}


    /**
     * <p> The ARN of the build run that generated this report. </p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p> The ARN of the build run that generated this report. </p>
     */
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }

    /**
     * <p> The ARN of the build run that generated this report. </p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionIdHasBeenSet = true; m_executionId = value; }

    /**
     * <p> The ARN of the build run that generated this report. </p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionIdHasBeenSet = true; m_executionId = std::move(value); }

    /**
     * <p> The ARN of the build run that generated this report. </p>
     */
    inline void SetExecutionId(const char* value) { m_executionIdHasBeenSet = true; m_executionId.assign(value); }

    /**
     * <p> The ARN of the build run that generated this report. </p>
     */
    inline Report& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p> The ARN of the build run that generated this report. </p>
     */
    inline Report& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p> The ARN of the build run that generated this report. </p>
     */
    inline Report& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    /**
     * <p> The status of this report. </p>
     */
    inline const ReportStatusType& GetStatus() const{ return m_status; }

    /**
     * <p> The status of this report. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The status of this report. </p>
     */
    inline void SetStatus(const ReportStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The status of this report. </p>
     */
    inline void SetStatus(ReportStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The status of this report. </p>
     */
    inline Report& WithStatus(const ReportStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p> The status of this report. </p>
     */
    inline Report& WithStatus(ReportStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p> The date and time this report run occurred. </p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const{ return m_created; }

    /**
     * <p> The date and time this report run occurred. </p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p> The date and time this report run occurred. </p>
     */
    inline void SetCreated(const Aws::Utils::DateTime& value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p> The date and time this report run occurred. </p>
     */
    inline void SetCreated(Aws::Utils::DateTime&& value) { m_createdHasBeenSet = true; m_created = std::move(value); }

    /**
     * <p> The date and time this report run occurred. </p>
     */
    inline Report& WithCreated(const Aws::Utils::DateTime& value) { SetCreated(value); return *this;}

    /**
     * <p> The date and time this report run occurred. </p>
     */
    inline Report& WithCreated(Aws::Utils::DateTime&& value) { SetCreated(std::move(value)); return *this;}


    /**
     * <p> The date and time a report expires. A report expires 30 days after it is
     * created. An expired report is not available to view in CodeBuild. </p>
     */
    inline const Aws::Utils::DateTime& GetExpired() const{ return m_expired; }

    /**
     * <p> The date and time a report expires. A report expires 30 days after it is
     * created. An expired report is not available to view in CodeBuild. </p>
     */
    inline bool ExpiredHasBeenSet() const { return m_expiredHasBeenSet; }

    /**
     * <p> The date and time a report expires. A report expires 30 days after it is
     * created. An expired report is not available to view in CodeBuild. </p>
     */
    inline void SetExpired(const Aws::Utils::DateTime& value) { m_expiredHasBeenSet = true; m_expired = value; }

    /**
     * <p> The date and time a report expires. A report expires 30 days after it is
     * created. An expired report is not available to view in CodeBuild. </p>
     */
    inline void SetExpired(Aws::Utils::DateTime&& value) { m_expiredHasBeenSet = true; m_expired = std::move(value); }

    /**
     * <p> The date and time a report expires. A report expires 30 days after it is
     * created. An expired report is not available to view in CodeBuild. </p>
     */
    inline Report& WithExpired(const Aws::Utils::DateTime& value) { SetExpired(value); return *this;}

    /**
     * <p> The date and time a report expires. A report expires 30 days after it is
     * created. An expired report is not available to view in CodeBuild. </p>
     */
    inline Report& WithExpired(Aws::Utils::DateTime&& value) { SetExpired(std::move(value)); return *this;}


    /**
     * <p> Information about where the raw data used to generate this report was
     * exported. </p>
     */
    inline const ReportExportConfig& GetExportConfig() const{ return m_exportConfig; }

    /**
     * <p> Information about where the raw data used to generate this report was
     * exported. </p>
     */
    inline bool ExportConfigHasBeenSet() const { return m_exportConfigHasBeenSet; }

    /**
     * <p> Information about where the raw data used to generate this report was
     * exported. </p>
     */
    inline void SetExportConfig(const ReportExportConfig& value) { m_exportConfigHasBeenSet = true; m_exportConfig = value; }

    /**
     * <p> Information about where the raw data used to generate this report was
     * exported. </p>
     */
    inline void SetExportConfig(ReportExportConfig&& value) { m_exportConfigHasBeenSet = true; m_exportConfig = std::move(value); }

    /**
     * <p> Information about where the raw data used to generate this report was
     * exported. </p>
     */
    inline Report& WithExportConfig(const ReportExportConfig& value) { SetExportConfig(value); return *this;}

    /**
     * <p> Information about where the raw data used to generate this report was
     * exported. </p>
     */
    inline Report& WithExportConfig(ReportExportConfig&& value) { SetExportConfig(std::move(value)); return *this;}


    /**
     * <p> A boolean that specifies if this report run is truncated. The list of test
     * cases is truncated after the maximum number of test cases is reached. </p>
     */
    inline bool GetTruncated() const{ return m_truncated; }

    /**
     * <p> A boolean that specifies if this report run is truncated. The list of test
     * cases is truncated after the maximum number of test cases is reached. </p>
     */
    inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }

    /**
     * <p> A boolean that specifies if this report run is truncated. The list of test
     * cases is truncated after the maximum number of test cases is reached. </p>
     */
    inline void SetTruncated(bool value) { m_truncatedHasBeenSet = true; m_truncated = value; }

    /**
     * <p> A boolean that specifies if this report run is truncated. The list of test
     * cases is truncated after the maximum number of test cases is reached. </p>
     */
    inline Report& WithTruncated(bool value) { SetTruncated(value); return *this;}


    /**
     * <p> A <code>TestReportSummary</code> object that contains information about this
     * test report. </p>
     */
    inline const TestReportSummary& GetTestSummary() const{ return m_testSummary; }

    /**
     * <p> A <code>TestReportSummary</code> object that contains information about this
     * test report. </p>
     */
    inline bool TestSummaryHasBeenSet() const { return m_testSummaryHasBeenSet; }

    /**
     * <p> A <code>TestReportSummary</code> object that contains information about this
     * test report. </p>
     */
    inline void SetTestSummary(const TestReportSummary& value) { m_testSummaryHasBeenSet = true; m_testSummary = value; }

    /**
     * <p> A <code>TestReportSummary</code> object that contains information about this
     * test report. </p>
     */
    inline void SetTestSummary(TestReportSummary&& value) { m_testSummaryHasBeenSet = true; m_testSummary = std::move(value); }

    /**
     * <p> A <code>TestReportSummary</code> object that contains information about this
     * test report. </p>
     */
    inline Report& WithTestSummary(const TestReportSummary& value) { SetTestSummary(value); return *this;}

    /**
     * <p> A <code>TestReportSummary</code> object that contains information about this
     * test report. </p>
     */
    inline Report& WithTestSummary(TestReportSummary&& value) { SetTestSummary(std::move(value)); return *this;}


    /**
     * <p>A <code>CodeCoverageReportSummary</code> object that contains a code coverage
     * summary for this report.</p>
     */
    inline const CodeCoverageReportSummary& GetCodeCoverageSummary() const{ return m_codeCoverageSummary; }

    /**
     * <p>A <code>CodeCoverageReportSummary</code> object that contains a code coverage
     * summary for this report.</p>
     */
    inline bool CodeCoverageSummaryHasBeenSet() const { return m_codeCoverageSummaryHasBeenSet; }

    /**
     * <p>A <code>CodeCoverageReportSummary</code> object that contains a code coverage
     * summary for this report.</p>
     */
    inline void SetCodeCoverageSummary(const CodeCoverageReportSummary& value) { m_codeCoverageSummaryHasBeenSet = true; m_codeCoverageSummary = value; }

    /**
     * <p>A <code>CodeCoverageReportSummary</code> object that contains a code coverage
     * summary for this report.</p>
     */
    inline void SetCodeCoverageSummary(CodeCoverageReportSummary&& value) { m_codeCoverageSummaryHasBeenSet = true; m_codeCoverageSummary = std::move(value); }

    /**
     * <p>A <code>CodeCoverageReportSummary</code> object that contains a code coverage
     * summary for this report.</p>
     */
    inline Report& WithCodeCoverageSummary(const CodeCoverageReportSummary& value) { SetCodeCoverageSummary(value); return *this;}

    /**
     * <p>A <code>CodeCoverageReportSummary</code> object that contains a code coverage
     * summary for this report.</p>
     */
    inline Report& WithCodeCoverageSummary(CodeCoverageReportSummary&& value) { SetCodeCoverageSummary(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ReportType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_reportGroupArn;
    bool m_reportGroupArnHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    ReportStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_created;
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_expired;
    bool m_expiredHasBeenSet = false;

    ReportExportConfig m_exportConfig;
    bool m_exportConfigHasBeenSet = false;

    bool m_truncated;
    bool m_truncatedHasBeenSet = false;

    TestReportSummary m_testSummary;
    bool m_testSummaryHasBeenSet = false;

    CodeCoverageReportSummary m_codeCoverageSummary;
    bool m_codeCoverageSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
