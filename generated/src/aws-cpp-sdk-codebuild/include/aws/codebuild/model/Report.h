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
    AWS_CODEBUILD_API Report() = default;
    AWS_CODEBUILD_API Report(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Report& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The ARN of the report run. </p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Report& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the report that was run.</p> <dl> <dt>CODE_COVERAGE</dt> <dd>
     * <p>A code coverage report.</p> </dd> <dt>TEST</dt> <dd> <p>A test report.</p>
     * </dd> </dl>
     */
    inline ReportType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ReportType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Report& WithType(ReportType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the report that was run. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Report& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the report group associated with this report. </p>
     */
    inline const Aws::String& GetReportGroupArn() const { return m_reportGroupArn; }
    inline bool ReportGroupArnHasBeenSet() const { return m_reportGroupArnHasBeenSet; }
    template<typename ReportGroupArnT = Aws::String>
    void SetReportGroupArn(ReportGroupArnT&& value) { m_reportGroupArnHasBeenSet = true; m_reportGroupArn = std::forward<ReportGroupArnT>(value); }
    template<typename ReportGroupArnT = Aws::String>
    Report& WithReportGroupArn(ReportGroupArnT&& value) { SetReportGroupArn(std::forward<ReportGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN of the build run that generated this report. </p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    Report& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of this report. </p>
     */
    inline ReportStatusType GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ReportStatusType value) { m_statusHasBeenSet = true; m_status = value; }
    inline Report& WithStatus(ReportStatusType value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time this report run occurred. </p>
     */
    inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    template<typename CreatedT = Aws::Utils::DateTime>
    void SetCreated(CreatedT&& value) { m_createdHasBeenSet = true; m_created = std::forward<CreatedT>(value); }
    template<typename CreatedT = Aws::Utils::DateTime>
    Report& WithCreated(CreatedT&& value) { SetCreated(std::forward<CreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time a report expires. A report expires 30 days after it is
     * created. An expired report is not available to view in CodeBuild. </p>
     */
    inline const Aws::Utils::DateTime& GetExpired() const { return m_expired; }
    inline bool ExpiredHasBeenSet() const { return m_expiredHasBeenSet; }
    template<typename ExpiredT = Aws::Utils::DateTime>
    void SetExpired(ExpiredT&& value) { m_expiredHasBeenSet = true; m_expired = std::forward<ExpiredT>(value); }
    template<typename ExpiredT = Aws::Utils::DateTime>
    Report& WithExpired(ExpiredT&& value) { SetExpired(std::forward<ExpiredT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Information about where the raw data used to generate this report was
     * exported. </p>
     */
    inline const ReportExportConfig& GetExportConfig() const { return m_exportConfig; }
    inline bool ExportConfigHasBeenSet() const { return m_exportConfigHasBeenSet; }
    template<typename ExportConfigT = ReportExportConfig>
    void SetExportConfig(ExportConfigT&& value) { m_exportConfigHasBeenSet = true; m_exportConfig = std::forward<ExportConfigT>(value); }
    template<typename ExportConfigT = ReportExportConfig>
    Report& WithExportConfig(ExportConfigT&& value) { SetExportConfig(std::forward<ExportConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A boolean that specifies if this report run is truncated. The list of test
     * cases is truncated after the maximum number of test cases is reached. </p>
     */
    inline bool GetTruncated() const { return m_truncated; }
    inline bool TruncatedHasBeenSet() const { return m_truncatedHasBeenSet; }
    inline void SetTruncated(bool value) { m_truncatedHasBeenSet = true; m_truncated = value; }
    inline Report& WithTruncated(bool value) { SetTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>TestReportSummary</code> object that contains information about this
     * test report. </p>
     */
    inline const TestReportSummary& GetTestSummary() const { return m_testSummary; }
    inline bool TestSummaryHasBeenSet() const { return m_testSummaryHasBeenSet; }
    template<typename TestSummaryT = TestReportSummary>
    void SetTestSummary(TestSummaryT&& value) { m_testSummaryHasBeenSet = true; m_testSummary = std::forward<TestSummaryT>(value); }
    template<typename TestSummaryT = TestReportSummary>
    Report& WithTestSummary(TestSummaryT&& value) { SetTestSummary(std::forward<TestSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>CodeCoverageReportSummary</code> object that contains a code coverage
     * summary for this report.</p>
     */
    inline const CodeCoverageReportSummary& GetCodeCoverageSummary() const { return m_codeCoverageSummary; }
    inline bool CodeCoverageSummaryHasBeenSet() const { return m_codeCoverageSummaryHasBeenSet; }
    template<typename CodeCoverageSummaryT = CodeCoverageReportSummary>
    void SetCodeCoverageSummary(CodeCoverageSummaryT&& value) { m_codeCoverageSummaryHasBeenSet = true; m_codeCoverageSummary = std::forward<CodeCoverageSummaryT>(value); }
    template<typename CodeCoverageSummaryT = CodeCoverageReportSummary>
    Report& WithCodeCoverageSummary(CodeCoverageSummaryT&& value) { SetCodeCoverageSummary(std::forward<CodeCoverageSummaryT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    ReportType m_type{ReportType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_reportGroupArn;
    bool m_reportGroupArnHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    ReportStatusType m_status{ReportStatusType::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_created{};
    bool m_createdHasBeenSet = false;

    Aws::Utils::DateTime m_expired{};
    bool m_expiredHasBeenSet = false;

    ReportExportConfig m_exportConfig;
    bool m_exportConfigHasBeenSet = false;

    bool m_truncated{false};
    bool m_truncatedHasBeenSet = false;

    TestReportSummary m_testSummary;
    bool m_testSummaryHasBeenSet = false;

    CodeCoverageReportSummary m_codeCoverageSummary;
    bool m_codeCoverageSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
