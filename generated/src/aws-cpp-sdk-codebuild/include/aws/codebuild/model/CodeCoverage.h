﻿/**
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
    AWS_CODEBUILD_API CodeCoverage();
    AWS_CODEBUILD_API CodeCoverage(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API CodeCoverage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the code coverage report.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CodeCoverage& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CodeCoverage& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CodeCoverage& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the report.</p>
     */
    inline const Aws::String& GetReportARN() const{ return m_reportARN; }
    inline bool ReportARNHasBeenSet() const { return m_reportARNHasBeenSet; }
    inline void SetReportARN(const Aws::String& value) { m_reportARNHasBeenSet = true; m_reportARN = value; }
    inline void SetReportARN(Aws::String&& value) { m_reportARNHasBeenSet = true; m_reportARN = std::move(value); }
    inline void SetReportARN(const char* value) { m_reportARNHasBeenSet = true; m_reportARN.assign(value); }
    inline CodeCoverage& WithReportARN(const Aws::String& value) { SetReportARN(value); return *this;}
    inline CodeCoverage& WithReportARN(Aws::String&& value) { SetReportARN(std::move(value)); return *this;}
    inline CodeCoverage& WithReportARN(const char* value) { SetReportARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of the test report file.</p>
     */
    inline const Aws::String& GetFilePath() const{ return m_filePath; }
    inline bool FilePathHasBeenSet() const { return m_filePathHasBeenSet; }
    inline void SetFilePath(const Aws::String& value) { m_filePathHasBeenSet = true; m_filePath = value; }
    inline void SetFilePath(Aws::String&& value) { m_filePathHasBeenSet = true; m_filePath = std::move(value); }
    inline void SetFilePath(const char* value) { m_filePathHasBeenSet = true; m_filePath.assign(value); }
    inline CodeCoverage& WithFilePath(const Aws::String& value) { SetFilePath(value); return *this;}
    inline CodeCoverage& WithFilePath(Aws::String&& value) { SetFilePath(std::move(value)); return *this;}
    inline CodeCoverage& WithFilePath(const char* value) { SetFilePath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of lines that are covered by your tests.</p>
     */
    inline double GetLineCoveragePercentage() const{ return m_lineCoveragePercentage; }
    inline bool LineCoveragePercentageHasBeenSet() const { return m_lineCoveragePercentageHasBeenSet; }
    inline void SetLineCoveragePercentage(double value) { m_lineCoveragePercentageHasBeenSet = true; m_lineCoveragePercentage = value; }
    inline CodeCoverage& WithLineCoveragePercentage(double value) { SetLineCoveragePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines that are covered by your tests.</p>
     */
    inline int GetLinesCovered() const{ return m_linesCovered; }
    inline bool LinesCoveredHasBeenSet() const { return m_linesCoveredHasBeenSet; }
    inline void SetLinesCovered(int value) { m_linesCoveredHasBeenSet = true; m_linesCovered = value; }
    inline CodeCoverage& WithLinesCovered(int value) { SetLinesCovered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of lines that are not covered by your tests.</p>
     */
    inline int GetLinesMissed() const{ return m_linesMissed; }
    inline bool LinesMissedHasBeenSet() const { return m_linesMissedHasBeenSet; }
    inline void SetLinesMissed(int value) { m_linesMissedHasBeenSet = true; m_linesMissed = value; }
    inline CodeCoverage& WithLinesMissed(int value) { SetLinesMissed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of branches that are covered by your tests.</p>
     */
    inline double GetBranchCoveragePercentage() const{ return m_branchCoveragePercentage; }
    inline bool BranchCoveragePercentageHasBeenSet() const { return m_branchCoveragePercentageHasBeenSet; }
    inline void SetBranchCoveragePercentage(double value) { m_branchCoveragePercentageHasBeenSet = true; m_branchCoveragePercentage = value; }
    inline CodeCoverage& WithBranchCoveragePercentage(double value) { SetBranchCoveragePercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conditional branches that are covered by your tests.</p>
     */
    inline int GetBranchesCovered() const{ return m_branchesCovered; }
    inline bool BranchesCoveredHasBeenSet() const { return m_branchesCoveredHasBeenSet; }
    inline void SetBranchesCovered(int value) { m_branchesCoveredHasBeenSet = true; m_branchesCovered = value; }
    inline CodeCoverage& WithBranchesCovered(int value) { SetBranchesCovered(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of conditional branches that are not covered by your tests.</p>
     */
    inline int GetBranchesMissed() const{ return m_branchesMissed; }
    inline bool BranchesMissedHasBeenSet() const { return m_branchesMissedHasBeenSet; }
    inline void SetBranchesMissed(int value) { m_branchesMissedHasBeenSet = true; m_branchesMissed = value; }
    inline CodeCoverage& WithBranchesMissed(int value) { SetBranchesMissed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the tests were run.</p>
     */
    inline const Aws::Utils::DateTime& GetExpired() const{ return m_expired; }
    inline bool ExpiredHasBeenSet() const { return m_expiredHasBeenSet; }
    inline void SetExpired(const Aws::Utils::DateTime& value) { m_expiredHasBeenSet = true; m_expired = value; }
    inline void SetExpired(Aws::Utils::DateTime&& value) { m_expiredHasBeenSet = true; m_expired = std::move(value); }
    inline CodeCoverage& WithExpired(const Aws::Utils::DateTime& value) { SetExpired(value); return *this;}
    inline CodeCoverage& WithExpired(Aws::Utils::DateTime&& value) { SetExpired(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_reportARN;
    bool m_reportARNHasBeenSet = false;

    Aws::String m_filePath;
    bool m_filePathHasBeenSet = false;

    double m_lineCoveragePercentage;
    bool m_lineCoveragePercentageHasBeenSet = false;

    int m_linesCovered;
    bool m_linesCoveredHasBeenSet = false;

    int m_linesMissed;
    bool m_linesMissedHasBeenSet = false;

    double m_branchCoveragePercentage;
    bool m_branchCoveragePercentageHasBeenSet = false;

    int m_branchesCovered;
    bool m_branchesCoveredHasBeenSet = false;

    int m_branchesMissed;
    bool m_branchesMissedHasBeenSet = false;

    Aws::Utils::DateTime m_expired;
    bool m_expiredHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
