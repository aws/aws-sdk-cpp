/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains code coverage report information.</p> <p>Line coverage measures how
   * many statements your tests cover. A statement is a single instruction, not
   * including comments, conditionals, etc.</p> <p>Branch coverage determines if your
   * tests cover every possible branch of a control structure, such as an
   * <code>if</code> or <code>case</code> statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CodeCoverage">AWS
   * API Reference</a></p>
   */
  class CodeCoverage
  {
  public:
    AWS_CODEBUILD_API CodeCoverage() = default;
    AWS_CODEBUILD_API CodeCoverage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API CodeCoverage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the code coverage report.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CodeCoverage& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the report.</p>
     */
    inline const Aws::String& GetReportARN() const { return m_reportARN; }
    inline bool ReportARNHasBeenSet() const { return m_reportARNHasBeenSet; }
    template<typename ReportARNT = Aws::String>
    void SetReportARN(ReportARNT&& value) { m_reportARNHasBeenSet = true; m_reportARN = std::forward<ReportARNT>(value); }
    template<typename ReportARNT = Aws::String>
    CodeCoverage& WithReportARN(ReportARNT&& value) { SetReportARN(std::forward<ReportARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the test report file.</p>
     */
    inline const Aws::String& GetFilePath() const { return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    template<typename FilePathT = Aws::String>
    void SetFilePath(FilePathT&& value) { m_filePathHasBeenSet = true; m_filePath = std::forward<FilePathT>(value); }
    template<typename FilePathT = Aws::String>
    CodeCoverage& WithFilePath(FilePathT&& value) { SetFilePath(std::forward<FilePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of lines that are covered by your tests.</p>
     */
    inline double GetLineCoveragePercentage() const { return m_lineCoveragePercentage; }
    inline bool LineCoveragePercentageHasBeenSet() const { return m_lineCoveragePercentageHasBeenSet; }
    inline void SetLineCoveragePercentage(double value) { m_lineCoveragePercentageHasBeenSet = true; m_lineCoveragePercentage = value; }
    inline CodeCoverage& WithLineCoveragePercentage(double value) { SetLineCoveragePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines that are covered by your tests.</p>
     */
    inline int GetLinesCovered() const { return m_linesCovered; }
    inline bool LinesCoveredHasBeenSet() const { return m_linesCoveredHasBeenSet; }
    inline void SetLinesCovered(int value) { m_linesCoveredHasBeenSet = true; m_linesCovered = value; }
    inline CodeCoverage& WithLinesCovered(int value) { SetLinesCovered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines that are not covered by your tests.</p>
     */
    inline int GetLinesMissed() const { return m_linesMissed; }
    inline bool LinesMissedHasBeenSet() const { return m_linesMissedHasBeenSet; }
    inline void SetLinesMissed(int value) { m_linesMissedHasBeenSet = true; m_linesMissed = value; }
    inline CodeCoverage& WithLinesMissed(int value) { SetLinesMissed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of branches that are covered by your tests.</p>
     */
    inline double GetBranchCoveragePercentage() const { return m_branchCoveragePercentage; }
    inline bool BranchCoveragePercentageHasBeenSet() const { return m_branchCoveragePercentageHasBeenSet; }
    inline void SetBranchCoveragePercentage(double value) { m_branchCoveragePercentageHasBeenSet = true; m_branchCoveragePercentage = value; }
    inline CodeCoverage& WithBranchCoveragePercentage(double value) { SetBranchCoveragePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conditional branches that are covered by your tests.</p>
     */
    inline int GetBranchesCovered() const { return m_branchesCovered; }
    inline bool BranchesCoveredHasBeenSet() const { return m_branchesCoveredHasBeenSet; }
    inline void SetBranchesCovered(int value) { m_branchesCoveredHasBeenSet = true; m_branchesCovered = value; }
    inline CodeCoverage& WithBranchesCovered(int value) { SetBranchesCovered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conditional branches that are not covered by your tests.</p>
     */
    inline int GetBranchesMissed() const { return m_branchesMissed; }
    inline bool BranchesMissedHasBeenSet() const { return m_branchesMissedHasBeenSet; }
    inline void SetBranchesMissed(int value) { m_branchesMissedHasBeenSet = true; m_branchesMissed = value; }
    inline CodeCoverage& WithBranchesMissed(int value) { SetBranchesMissed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tests were run.</p>
     */
    inline const Aws::Utils::DateTime& GetExpired() const { return m_expired; }
    inline bool ExpiredHasBeenSet() const { return m_expiredHasBeenSet; }
    template<typename ExpiredT = Aws::Utils::DateTime>
    void SetExpired(ExpiredT&& value) { m_expiredHasBeenSet = true; m_expired = std::forward<ExpiredT>(value); }
    template<typename ExpiredT = Aws::Utils::DateTime>
    CodeCoverage& WithExpired(ExpiredT&& value) { SetExpired(std::forward<ExpiredT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_reportARN;
    bool m_reportARNHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    double m_lineCoveragePercentage{0.0};
    bool m_lineCoveragePercentageHasBeenSet = false;

    int m_linesCovered{0};
    bool m_linesCoveredHasBeenSet = false;

    int m_linesMissed{0};
    bool m_linesMissedHasBeenSet = false;

    double m_branchCoveragePercentage{0.0};
    bool m_branchCoveragePercentageHasBeenSet = false;

    int m_branchesCovered{0};
    bool m_branchesCoveredHasBeenSet = false;

    int m_branchesMissed{0};
    bool m_branchesMissedHasBeenSet = false;

    Aws::Utils::DateTime m_expired{};
    bool m_expiredHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
