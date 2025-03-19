/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>

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
   * <p>Contains a summary of a code coverage report.</p> <p>Line coverage measures
   * how many statements your tests cover. A statement is a single instruction, not
   * including comments, conditionals, etc.</p> <p>Branch coverage determines if your
   * tests cover every possible branch of a control structure, such as an
   * <code>if</code> or <code>case</code> statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/CodeCoverageReportSummary">AWS
   * API Reference</a></p>
   */
  class CodeCoverageReportSummary
  {
  public:
    AWS_CODEBUILD_API CodeCoverageReportSummary() = default;
    AWS_CODEBUILD_API CodeCoverageReportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API CodeCoverageReportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The percentage of lines that are covered by your tests.</p>
     */
    inline double GetLineCoveragePercentage() const { return m_lineCoveragePercentage; }
    inline bool LineCoveragePercentageHasBeenSet() const { return m_lineCoveragePercentageHasBeenSet; }
    inline void SetLineCoveragePercentage(double value) { m_lineCoveragePercentageHasBeenSet = true; m_lineCoveragePercentage = value; }
    inline CodeCoverageReportSummary& WithLineCoveragePercentage(double value) { SetLineCoveragePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines that are covered by your tests.</p>
     */
    inline int GetLinesCovered() const { return m_linesCovered; }
    inline bool LinesCoveredHasBeenSet() const { return m_linesCoveredHasBeenSet; }
    inline void SetLinesCovered(int value) { m_linesCoveredHasBeenSet = true; m_linesCovered = value; }
    inline CodeCoverageReportSummary& WithLinesCovered(int value) { SetLinesCovered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines that are not covered by your tests.</p>
     */
    inline int GetLinesMissed() const { return m_linesMissed; }
    inline bool LinesMissedHasBeenSet() const { return m_linesMissedHasBeenSet; }
    inline void SetLinesMissed(int value) { m_linesMissedHasBeenSet = true; m_linesMissed = value; }
    inline CodeCoverageReportSummary& WithLinesMissed(int value) { SetLinesMissed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of branches that are covered by your tests.</p>
     */
    inline double GetBranchCoveragePercentage() const { return m_branchCoveragePercentage; }
    inline bool BranchCoveragePercentageHasBeenSet() const { return m_branchCoveragePercentageHasBeenSet; }
    inline void SetBranchCoveragePercentage(double value) { m_branchCoveragePercentageHasBeenSet = true; m_branchCoveragePercentage = value; }
    inline CodeCoverageReportSummary& WithBranchCoveragePercentage(double value) { SetBranchCoveragePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conditional branches that are covered by your tests.</p>
     */
    inline int GetBranchesCovered() const { return m_branchesCovered; }
    inline bool BranchesCoveredHasBeenSet() const { return m_branchesCoveredHasBeenSet; }
    inline void SetBranchesCovered(int value) { m_branchesCoveredHasBeenSet = true; m_branchesCovered = value; }
    inline CodeCoverageReportSummary& WithBranchesCovered(int value) { SetBranchesCovered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conditional branches that are not covered by your tests.</p>
     */
    inline int GetBranchesMissed() const { return m_branchesMissed; }
    inline bool BranchesMissedHasBeenSet() const { return m_branchesMissedHasBeenSet; }
    inline void SetBranchesMissed(int value) { m_branchesMissedHasBeenSet = true; m_branchesMissed = value; }
    inline CodeCoverageReportSummary& WithBranchesMissed(int value) { SetBranchesMissed(value); return *this;}
    ///@}
  private:

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
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
